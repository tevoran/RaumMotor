#!/bin/bash
#installing all dependencies on Gentoo

USE="git subversion" sudo emerge -qa sys-devel/gcc sys-devel/make dev-util/cmake layman
sudo layman -a darthgandalf-overlay 
sudo emerge -qa dev-util/emscripten
