# Created by: Timothy Bourke <timbob@bigpond.com>
# $FreeBSD$

PORTNAME=	imgtops
PORTVERSION=	1.0
PORTREVISION=	5
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Create efficient Encapsulated Postscript files from images

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pillow>0:${PORTSDIR}/graphics/py-pillow

USES=			ghostscript:run python
USE_PYTHON=		distutils

post-install:
	${CHMOD} 644 ${STAGEDIR}${MANPREFIX}/man/man1/imgtops.1
	${CHMOD} 644 ${STAGEDIR}${MANPREFIX}/man/man1/epstoimg.1
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/imgtopslib/encoders.so

.include <bsd.port.mk>
