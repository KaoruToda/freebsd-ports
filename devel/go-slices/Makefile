# $FreeBSD$

PORTNAME=	slices
PORTVERSION=	0.0.0.20130325
CATEGORIES=	devel
PKGNAMEPREFIX=	go-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Go library for slice-based datatypes

#LICENSE=	MIT based, with no-evli clause

BUILD_DEPENDS=	go-raw>0:${PORTSDIR}/devel/go-raw

USE_GITHUB=	yes
GH_ACCOUNT=	feyeleanor
GH_TAGNAME=	bb44bb2

GO_PKGNAME=	github.com/${GH_ACCOUNT}/${PORTNAME}

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/lang/go/files/bsd.go.mk"
.include <bsd.port.post.mk>
