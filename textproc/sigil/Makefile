# Created by: Jonathan Chen <jonc@chen.org.nz>
# $FreeBSD$

PORTNAME=	sigil
PORTVERSION=	0.9.1
CATEGORIES=	textproc

MAINTAINER=	ports@FreeBSD.org
COMMENT=	WYSIWYG ePub editor

LICENSE=	GPLv3 # or any later version

LIB_DEPENDS=	libminizip.so:${PORTSDIR}/archivers/minizip \
		libpcre.so:${PORTSDIR}/devel/pcre \
		libhunspell-1.3.so:${PORTSDIR}/textproc/hunspell

USE_GITHUB=	yes
GH_ACCOUNT=	Sigil-Ebook
GH_PROJECT=	Sigil

USES=		cmake compiler:c++11-lib desktop-file-utils pkgconfig \
		python:3 shebangfix
SHEBANG_FILES=	src/Resource_Files/plugin_launchers/python/*.py \
		src/Resource_Files/python3lib/*.py
USE_QT5=	concurrent gui network printsupport svg webkit widgets \
		xml xmlpatterns \
		buildtools_build linguisttools_build qmake_build \
		imageformats_run
CMAKE_ARGS=	-DUSE_SYSTEM_LIBS:BOOL=ON \
		-DINSTALL_BUNDLED_DICTS:BOOL=OFF
USE_LDCONFIG=	${PREFIX}/lib/sigil

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/sigil/*.so

.include <bsd.port.mk>
