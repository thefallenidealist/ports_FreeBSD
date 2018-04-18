# Created by: Bruce M. Simpson <bms@FreeBSD.org>
# $FreeBSD$

PORTNAME=	urjtag
PORTVERSION=	2017.10
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Extended utility to work with JTAG-aware boards

LICENSE=	GPLv2

RUN_DEPENDS=	bash:shells/bash
LIB_DEPENDS+=	libpython3.6m.so:lang/python36 libftdi1.so:devel/libftdi1

USES=		gmake localbase:ldflags readline shebangfix tar:xz libtool
USE_LDCONFIG=	yes
USE_CSTD=	c99
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=		FTDI JEDEC NLS
OPTIONS_DEFAULT=	FTDI
OPTIONS_SUB=		yes

FTDI_DESC=		FTDI-based USB JTAG adapters support
FTDI_LIB_DEPENDS=	libftdi.so:devel/libftdi
FTDI_CONFIGURE_WITH=	libftdi

JEDEC_DESC=		Experimental JEDEC flash detection
JEDEC_CONFIGURE_ENABLE=	jedec-exp

NLS_USES=		gettext
NLS_CONFIGURE_ENABLE=	nls

post-patch:
	# Suppress svn(1) binary detection
	@${REINPLACE_CMD} -e 's|^SVN=.*|SVN=''|' ${WRKSRC}/configure
	# Make it compile
	@${REINPLACE_CMD} -e '/rl_filename_quote_characters/d' ${WRKSRC}/src/apps/jtag/jtag.c

post-stage:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/liburjtag.so.0.0.0
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/python3.6/site-packages/urjtag.so

.include <bsd.port.mk>
