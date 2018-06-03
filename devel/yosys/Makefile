# Created by: Johnny Sorocil <jsorocil@gmail.com>
# $FreeBSD$

PORTNAME=		yosys
DISTVERSION=		0.7-783
DISTVERSIONSUFFIX=	-gbab39eac
CATEGORIES=		devel

MAINTAINER=	jsorocil@gmail.com
COMMENT=	Yosys Open SYnthesis Suite

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libffi.so:devel/libffi
BUILD_DEPENDS=	gawk:lang/gawk \
		pkgconf:devel/pkgconf \
		tclsh:lang/tcl-wrapper \
		bash:shells/bash \
		abc:devel/abc

USES=		gmake shebangfix readline tcl bison python:3.6+,build
SHEBANG_FILES=	${WRKSRC}/misc/yosys-config.in

USE_GITHUB=	yes
GH_ACCOUNT=	YosysHQ
GH_TAGNAME=	bab39eacce5c17c42d50a3a60a67cc8a9ee52d98

post-patch:
	@${REINPLACE_CMD} -e 's/python3 /python${PYTHON3_DEFAULT} /g' \
		${WRKSRC}/techlibs/ice40/Makefile.inc \
		${WRKSRC}/techlibs/xilinx/Makefile.inc \
		${WRKSRC}/techlibs/common/Makefile.inc \
		${WRKSRC}/tests/fsm/run-test.sh \
		${WRKSRC}/tests/realmath/run-test.sh \
		${WRKSRC}/tests/share/run-test.sh \
		${WRKSRC}/tests/bram/run-test.sh
	@${SED} -i '' 's/ABCEXTERNAL ?=/ABCEXTERNAL ?= abc/g' ${WRKSRC}/Makefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/yosys
	${SED} -i '' 's/python3/python${PYTHON3_DEFAULT}/g' ${STAGEDIR}${LOCALBASE}/bin/yosys-smtbmc

.include <bsd.port.mk>
