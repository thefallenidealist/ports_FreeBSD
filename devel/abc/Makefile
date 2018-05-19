# Created by: Johnny Sorocil <propaliidealist@gmail.com>
# $FreeBSD$

PORTNAME=	abc
PORTVERSION=20180310
CATEGORIES=	devel
MASTER_SITES=http://bitbucket.org/${BB_ACCOUNT}/${BB_PROJECT}/get/${BB_COMMIT}.zip?dummy=/

MAINTAINER=	propaliidealist@gmail.com
COMMENT=	System for Sequential Logic Synthesis and Formal Verification

LICENSE=	MIT		# TODO provjerit

USES+=		gmake readline
WRKSRC=		${WRKDIR}/${BB_ACCOUNT}-${BB_PROJECT}-${BB_COMMIT}

BB_ACCOUNT=	alanmi
BB_PROJECT=	${PORTNAME}
BB_COMMIT=	7b03389b80be

MAKE_ARGS+=		CC=${CC} CXX=${CXX} ABC_USE_LIBSTDCXX=1

PLIST_FILES=	bin/abc

do-install:
	@${CP} ${WRKSRC}/abc ${STAGEDIR}${PREFIX}/bin
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/abc

.include <bsd.port.mk>
