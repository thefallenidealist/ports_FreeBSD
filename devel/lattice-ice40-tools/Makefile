# Created by: Johnny Sorocil <propaliidealist@gmail.com>
# $FreeBSD$

PORTNAME=	lattice-ice40-tools
PORTVERSION=20180310
CATEGORIES=	devel

MAINTAINER=	propaliidealist@gmail.com
COMMENT=	Open source tools for Lattice iCE40 FPGAs

LICENSE=		ISCL MIT
LICENSE_COMB=	multi

NO_BUILD=		yes
NO_ARCH=		yes

RUN_DEPENDS=	${LOCALBASE}/bin/arachne-pnr:devel/arachne-pnr \
				${LOCALBASE}/bin/icepack:devel/icestorm \
				${LOCALBASE}/bin/yosys:devel/yosys

USES=			metaport

.include <bsd.port.mk>
