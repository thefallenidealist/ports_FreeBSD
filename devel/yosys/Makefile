# Created by: Johnny Sorocil <propaliidealist@gmail.com>
# $FreeBSD$

PORTNAME=	yosys
PORTVERSION=20180310
CATEGORIES=	devel

MAINTAINER=	propaliidealist@gmail.com
COMMENT=	Yosys Open SYnthesis Suite

LICENSE=	ISCL

USES=			gmake shebangfix readline tcl
SHEBANG_FILES=	${WRKSRC}/misc/yosys-config.in

USE_GITHUB=	yes
GH_ACCOUNT=	YosysHQ
GH_TAGNAME=	efaef82

LIB_DEPENDS+=	libffi.so:devel/libffi
BUILD_DEPENDS=	gawk:lang/gawk \
	pkgconf:devel/pkgconf \
	python3.6:lang/python36 \
	tclsh:lang/tcl-wrapper \
	bison:devel/bison \
	hg:devel/mercurial \
	bash:shells/bash

post-patch:
	@${REINPLACE_CMD} -e 's/python3 /python${PYTHON3_DEFAULT} /g' \
		${WRKSRC}/techlibs/ice40/Makefile.inc \
		${WRKSRC}/techlibs/xilinx/Makefile.inc \
		${WRKSRC}/techlibs/common/Makefile.inc \
		${WRKSRC}/tests/fsm/run-test.sh \
		${WRKSRC}/tests/realmath/run-test.sh \
		${WRKSRC}/tests/share/run-test.sh \
		${WRKSRC}/tests/bram/run-test.sh

post-build:
	@${REINPLACE_CMD} -e 's/python3 /python${PYTHON3_DEFAULT} /g' \
		${WRKSRC}/yosys-config

post-stage:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/yosys
	${SED} -i '' 's/python3/python${PYTHON3_DEFAULT}/g' \
		${STAGEDIR}${LOCALBASE}/bin/yosys-smtbmc

.include <bsd.port.mk>
