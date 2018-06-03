# Created by: Johnny Sorocil <jsorocil@gmail.com>
# $FreeBSD$

PORTNAME=	lattice-ice40-tools
PORTVERSION=	g20180310
CATEGORIES=	devel

MAINTAINER=	jsorocil@gmail.com
COMMENT=	Open source tools for Lattice iCE40 FPGAs

RUN_DEPENDS=	${LOCALBASE}/bin/arachne-pnr:devel/arachne-pnr \
		${LOCALBASE}/bin/abc:devel/abc \
		${LOCALBASE}/bin/icepack:devel/icestorm \
		${LOCALBASE}/bin/yosys:devel/yosys

USES=		metaport

OPTIONS_DEFINE=	EXAMPLES
EXAMPLES_DESC=	Build examples for Olimex iCE40 FPGA boards

OPTIONS_DEFAULT=	EXAMPLES

EXAMPLESDIR=	${PREFIX}/share/examples/lattice-ice40-olimex

EXAMPLES_RUN_DEPENDS=	${EXAMPLESDIR}/ice40hx1k-blinky.bin:devel/lattice-ice40-examples-hx1k \
			${EXAMPLESDIR}/ice40hx8k-blinky.bin:devel/lattice-ice40-examples-hx8k \
			${EXAMPLESDIR}/ice40hx1k-vga-ps2.bin:devel/lattice-ice40-examples-hx1k \
			${EXAMPLESDIR}/ice40hx8k-vga-ps2.bin:devel/lattice-ice40-examples-hx8k

.include <bsd.port.mk>
