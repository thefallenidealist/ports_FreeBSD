# Created by: Johnny Sorocil <propaliidealist@gmail.com>
# $FreeBSD$

PORTNAME=	lattice-ice40-examples
PORTVERSION=20180310
CATEGORIES=	devel

MAINTAINER=	propaliidealist@gmail.com
COMMENT=	Lattice iCE40 FPGA examples for Olimex boards

LICENSE=		APACHE20

NO_BUILD=		yes
NO_ARCH=		yes

EXAMPLES_DIR=	lattice-ice40-olimex

RUN_DEPENDS=	${LOCALBASE}/share/examples/${EXAMPLES_DIR}/ice40hx1k-blinky.bin:devel/lattice-ice40-examples-hx1k \
				${LOCALBASE}/share/examples/${EXAMPLES_DIR}/ice40hx1k-vga-ps2.bin:devel/lattice-ice40-examples-hx1k \
				${LOCALBASE}/share/examples/${EXAMPLES_DIR}/ice40hx8k-blinky.bin:devel/lattice-ice40-examples-hx8k \
				${LOCALBASE}/share/examples/${EXAMPLES_DIR}/ice40hx8k-vga-ps2.bin:devel/lattice-ice40-examples-hx8k

USES=			metaport

.include <bsd.port.mk>
