# Created by: Johannes Meixner <xmj@chaot.net>
# $FreeBSD$

PORTNAME=	iocage
PORTVERSION=	20151207
CATEGORIES=	sysutils
PKGNAMESUFFIX=	-devel

MAINTAINER=	kmoore@FreeBSD.org
COMMENT=	Full featured, no dependency Jail container manager - devel build

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	iocage
GH_TAGNAME=	e4f390f34963886a6eda2c4c54b889d29dc02e6c

NO_BUILD=	yes
NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e "s|/usr/local/lib/iocage|${PREFIX}/lib/iocage|g" ${WRKSRC}/iocage

pre-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/iocage

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/rc.d/iocage ${STAGEDIR}${PREFIX}/etc/rc.d
	${INSTALL_SCRIPT} ${WRKSRC}/iocage ${STAGEDIR}${PREFIX}/sbin
	(cd ${WRKSRC}/lib/ && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/lib/iocage)
	${INSTALL_MAN} ${WRKSRC}/iocage.8 ${STAGEDIR}${PREFIX}/man/man8

.include <bsd.port.mk>
