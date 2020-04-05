# Created by: Johnny Sorocil <jsorocil@gmail.com>
# $FreeBSD$

PORTNAME=	openocd
PKGNAMEPREFIX=	riscv32-
PORTVERSION=	g20191212
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	RISC-V Open On-Chip Debugger

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--enable-cmsis-dap --enable-ftdi --disable-werror --program-prefix=${PKGNAMEPREFIX}

USES=		gmake libtool:build makeinfo pkgconfig tar:bzip2
CFLAGS+=	-I${LOCALBASE}/include -Wno-error

BUILD_DEPENDS=	automake>=0:devel/automake

USE_GITHUB=	yes
GH_TUPLE=	riscv-mcu:riscv-openocd:9e6a7a2e5320cdaeeafcc79debedfd216f443f19 \
			msteveb:jimtcl:0.77:jimtcl \
			syntacore:libjaylink:0.1.0-17-g4959f4e:libjaylink

pre-configure:
	@cd ${WRKSRC} && ./bootstrap

post-extract:
	@${RMDIR} ${WRKSRC}/jimtcl
	@${RMDIR} ${WRKSRC}/src/jtag/drivers/libjaylink
	@${MV} ${WRKSRC_libjaylink}	${WRKSRC}/src/jtag/drivers/libjaylink
	@${MV} ${WRKSRC_jimtcl}		${WRKSRC}/jimtcl

post-stage:
	@${CP} ${FILESDIR}/gd32vf103.cfg			${STAGEDIR}${DATADIR}/scripts/board/
	@${CP} ${FILESDIR}/sipeed-rv-debugger.cfg	${STAGEDIR}${DATADIR}/scripts/interface/ftdi/

.include <bsd.port.mk>
