# Created by: Johnny Sorocil <jsorocil@gmail.com>
# $FreeBSD$

PORTNAME=	abc
PORTVERSION=	g20180310
CATEGORIES=	devel

MAINTAINER=	jsorocil@gmail.com
COMMENT=	System for Sequential Logic Synthesis and Formal Verification

LICENSE=	ABC
LICENSE_NAME=	abc license (similiar to MIT)
LICENSE_FILE=	${WRKSRC}/copyright.txt
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES=		gmake readline

USE_GITHUB=	yes
GH_ACCOUNT=	berkeley-abc
GH_PROJECT=	abc
GH_TAGNAME=	e839091ba05083f166356f5455cea7ba3adad8d6

MAKE_ARGS=	CC=${CC} CXX=${CXX} ABC_USE_LIBSTDCXX=1

PLIST_FILES=	bin/abc

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/abc ${STAGEDIR}${PREFIX}/bin

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/abc

.include <bsd.port.mk>
