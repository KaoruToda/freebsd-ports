# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD$

PORTNAME=	pure-sockets
PORTVERSION=	0.6
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	https://cdn.bitbucket.org/purelang/pure-lang/downloads/
DIST_SUBDIR=	pure

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Pure language interface to the Berkeley socket functions

BROKEN=		unfetchable

LICENSE=	GPLv3 LGPL3
LICENSE_COMB=	dual

USES=		pure
PORTDOCS=	README
PORTEXAMPLES=	*
OPTIONS_DEFINE=	DOCS EXAMPLES

PLIST_FILES=	lib/pure/sockets.pure \
		lib/pure/sockets.so

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/pure/sockets.so
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	@(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>
