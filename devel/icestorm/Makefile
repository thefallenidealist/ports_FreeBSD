# Created by: Johnny Sorocil <propaliidealist@gmail.com>
# $FreeBSD$

PORTNAME=	icestorm
PORTVERSION=20180310
CATEGORIES=	devel

MAINTAINER=	propaliidealist@gmail.com
COMMENT=	IceStorm tools for Lattice iCE40 FPGAs

LICENSE=	ISCL

USES=	gmake python:3.3+ shebangfix pkgconfig
SHEBANG_FILES=	${WRKSRC}/icebox/*.py \
				${WRKSRC}/icebox/Makefile

USE_GITHUB=		yes
GH_ACCOUNT=		cliffordwolf
GH_TAGNAME=		4476d83

LIB_DEPENDS+=libftdi.so:devel/libftdi

post-patch:
	@${REINPLACE_CMD} -e 's/python3 /python${PYTHON3_DEFAULT} /g' \
		${WRKSRC}/icebox/Makefile \
		${WRKSRC}/icetime/Makefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/icepack
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/icepll
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/icebram
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/iceprog
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/icemulti
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/icetime

.include <bsd.port.mk>
