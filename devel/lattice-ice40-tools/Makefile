# Created by: Johnny Sorocil <propaliidealist@gmail.com>
# $FreeBSD$

PORTNAME=	lattice-ice40-tools
PORTVERSION=	g20180310
CATEGORIES=	devel

MAINTAINER=	propaliidealist@gmail.com
COMMENT=	Open source tools for Lattice iCE40 FPGAs

LICENSE=	ISCL MIT
LICENSE_COMB=	multi

RUN_DEPENDS=	${LOCALBASE}/bin/arachne-pnr:devel/arachne-pnr \
		${LOCALBASE}/bin/abc:devel/abc \
		${LOCALBASE}/bin/icepack:devel/icestorm \
		${LOCALBASE}/bin/yosys:devel/yosys

NO_BUILD=	yes
NO_ARCH=	yes

USES=		metaport

.include <bsd.port.mk>
