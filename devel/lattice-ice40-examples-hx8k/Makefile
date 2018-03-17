# Created by: Johnny Sorocil <propaliidealist@gmail.com>
# $FreeBSD$

PORTNAME=	lattice-ice40-examples-hx8k
PORTVERSION=20180310
CATEGORIES=	devel

MAINTAINER=	propaliidealist@gmail.com
COMMENT=	Lattice iCE40 FPGA examples for Olimex HX8K board

LICENSE=		APACHE20

NO_ARCH=		yes
USE_GITHUB=		yes
GH_ACCOUNT=		OLIMEX
GH_PROJECT=		iCE40HX8K-EVB
GH_TAGNAME=		ae28371

USES=			${GMAKE}

RUN_DEPENDS=	${LOCALBASE}/bin/arachne-pnr:devel/arachne-pnr \
				${LOCALBASE}/bin/icepack:devel/icestorm \
				${LOCALBASE}/bin/yosys:devel/yosys

EXAMPLES_DIR=	lattice-ice40-olimex

do-build:
	@# do nothing because original Makefile does not have "make install command"

do-install:
	${GMAKE} -C ${WRKSRC}/demo/ice40hx8k-evb
	${GMAKE} -C ${WRKSRC}/demo/ice40-io-video

post-stage:
	@${MKDIR} ${STAGEDIR}${LOCALBASE}/share/examples/${EXAMPLES_DIR}
	@${CP} ${WRKSRC}/demo/ice40hx8k-evb/example.v    ${STAGEDIR}${LOCALBASE}/share/examples/${EXAMPLES_DIR}/ice40hx8k-blinky.v
	@${CP} ${WRKSRC}/demo/ice40hx8k-evb/example.rpt  ${STAGEDIR}${LOCALBASE}/share/examples/${EXAMPLES_DIR}/ice40hx8k-blinky.rpt
	@${CP} ${WRKSRC}/demo/ice40hx8k-evb/example.bin  ${STAGEDIR}${LOCALBASE}/share/examples/${EXAMPLES_DIR}/ice40hx8k-blinky.bin
	@${CP} ${WRKSRC}/demo/ice40-io-video/example.v   ${STAGEDIR}${LOCALBASE}/share/examples/${EXAMPLES_DIR}/ice40hx8k-vga-ps2.v
	@${CP} ${WRKSRC}/demo/ice40-io-video/example.rpt ${STAGEDIR}${LOCALBASE}/share/examples/${EXAMPLES_DIR}/ice40hx8k-vga-ps2.rpt
	@${CP} ${WRKSRC}/demo/ice40-io-video/example.bin ${STAGEDIR}${LOCALBASE}/share/examples/${EXAMPLES_DIR}/ice40hx8k-vga-ps2.bin

.include <bsd.port.mk>
