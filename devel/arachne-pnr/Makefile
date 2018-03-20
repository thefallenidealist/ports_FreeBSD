# Created by: Johnny Sorocil <propaliidealist@gmail.com>
# $FreeBSD$

PORTNAME=	arachne-pnr
PORTVERSION=20180310
CATEGORIES=	devel

MAINTAINER=	propaliidealist@gmail.com
COMMENT=	Place and route tool for FPGAs

LICENSE=	MIT

BUILD_DEPENDS=	${LOCALBASE}/share/icebox:devel/icestorm

USES+=		gmake

USE_GITHUB=	yes
GH_ACCOUNT=	cseed
GH_TAGNAME=	6701132

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/arachne-pnr

.include <bsd.port.mk>
