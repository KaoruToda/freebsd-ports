# Created by: Sofian Brabez <sbrabez@gmail.com>
# $FreeBSD$

PORTNAME=	pep8
PORTVERSION=	1.6.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Python style guide checker

LICENSE=	MIT

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

regression-test: extract
	@(cd ${WRKSRC}; ${PYTHON_CMD} ${PORTNAME}.py \
		--doctest --testsuite=testsuite)

.include <bsd.port.mk>
