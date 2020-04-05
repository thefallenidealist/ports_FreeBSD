# Created by: Johnny Sorocil <jsorocil@gmail.com>
# $FreeBSD$

PORTNAME=	gdb
PORTVERSION=	8.3.1
PORTREVISION=	0
CATEGORIES=	devel
MASTER_SITES=	GNU
PKGNAMEPREFIX=	riscv32-none-eabi-
DISTNAME=	gdb-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNU GDB for the RISC-V bare metal target
LIB_DEPENDS=	libexpat.so:textproc/expat2 libhidapi.so:comms/hidapi

USES=		gmake tar:xz iconv gmake libtool python:2.7-3.6
USE_PYTHON=	flavors py3kplist

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--target=riscv32 -prefix=${PKGNAMEPREFIX} --disable-nls \
				--disable-werror --with-python=${PYTHON_CMD} --datadir=${PREFIX}/share/gdb/python/${PKGNAMEPREFIX}${PORTNAME}

pre-configure:
	cd ${WRKSRC} ; ${RM} -r dejagnu expect tcl texinfo

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gdb/gdb \
		${STAGEDIR}${PREFIX}/bin/${PKGNAMEPREFIX}${PORTNAME}
	(cd ${INSTALL_WRKSRC}/gdb ; \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} install-python )
	(cd ${INSTALL_WRKSRC}/gdb/data-directory ; \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${MAKE_ARGS} install-python )
	(cd ${STAGEDIR}${PREFIX}/share/gdb/python && \
		${PYTHON_CMD} -m compileall .)

.include <bsd.port.mk>
