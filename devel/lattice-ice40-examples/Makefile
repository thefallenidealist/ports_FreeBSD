# Created by: Johnny Sorocil <propaliidealist@gmail.com>
# $FreeBSD$

PORTNAME=	lattice-ice40-examples
PORTVERSION=	g20180310
CATEGORIES=	devel

MAINTAINER=	propaliidealist@gmail.com
COMMENT=	Lattice iCE40 FPGA examples for Olimex boards

LICENSE=	APACHE20

RUN_DEPENDS=	${EXAMPLESDIR}/ice40hx1k-blinky.bin:devel/lattice-ice40-examples-hx1k \
		${EXAMPLESDIR}/ice40hx1k-vga-ps2.bin:devel/lattice-ice40-examples-hx1k \
		${EXAMPLESDIR}/ice40hx8k-blinky.bin:devel/lattice-ice40-examples-hx8k \
		${EXAMPLESDIR}/ice40hx8k-vga-ps2.bin:devel/lattice-ice40-examples-hx8k

EXAMPLESDIR=    ${PREFIX}/share/examples/lattice-ice40-olimex

NO_BUILD=	yes
NO_ARCH=	yes

USES=		metaport

.include <bsd.port.mk>
