# Created by: M. Warner Losh <imp@freebsd.org>
# $FreeBSD$

PORTNAME=	gdb
PORTVERSION=	7.10
PORTREVISION=	4
CATEGORIES=	devel
MASTER_SITES=	GNU
PKGNAMEPREFIX=	arm-none-eabi-
DISTNAME=	gdb-${PORTVERSION}

MAINTAINER=	imp@FreeBSD.org
COMMENT=	GNU GDB for the arm bare metal target
LIB_DEPENDS=	libexpat.so:textproc/expat2

USES=		gmake tar:xz iconv gmake libtool
USE_PYTHON=	flavors py3kplist

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--target=arm-none-eabi --program-prefix=arm-none-eabi- --disable-nls \
		--disable-werror

OPTIONS_DEFINE=	PYTHON
OPTIONS_DEFAULT= PYTHON

PYTHON_CONFIGURE_ON=	--with-python=${PYTHON_CMD}
PYTHON_CONFIGURE_OFF=	--without-python
PYTHON_USES=		python

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MPYTHON}
.if ${PYTHON_VER} != ${PYTHON_DEFAULT}
PKGNAMESUFFIX=	${PYTHON_PKGNAMESUFFIX}
.endif
.endif

pre-configure:
	cd ${WRKSRC} ; ${RM} -r dejagnu expect tcl texinfo

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gdb/gdb \
		${STAGEDIR}${PREFIX}/bin/${PKGNAMEPREFIX}${PORTNAME}
	${INSTALL_MAN} ${WRKSRC}/gdb/doc/gdb.1 \
		${STAGEDIR}${MAN1PREFIX}/man/man1/gdb${VER}.1
	(cd ${WRKSRC}/gdb/data-directory ; \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} install-syscalls )

do-install-PYTHON-on:
	(cd ${WRKSRC}/gdb; ${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} install-python )
	(cd ${WRKSRC}/gdb/data-directory ; \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} install-python )
	@(cd ${STAGEDIR}${PREFIX}/share/gdb/python && \
		${PYTHON_CMD} -m compileall .)
. for f in gdb gdb/command gdb/function gdb/printer
	@(cd ${STAGEDIR}${PREFIX}/share/gdb/python/${f} ; ${CHMOD} 644 *.py* )
. endfor

.include <bsd.port.mk>
