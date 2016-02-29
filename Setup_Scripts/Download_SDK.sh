#!/bin/sh
# OSHChip SDK download script for Ubuntu.
# Pawel Kazimierowicz <pawel@kazimierowicz.eu>

# Specify SDK directory
SDK_DIRECTORY=../SDK
# Specify SDK version
SDK_VERSION=11.0.0-2.alpha_bc3f6a0

REPO_DIR=`pwd`/..

echo Downloading SDK...
mkdir $SDK_DIRECTORY
cd $SDK_DIRECTORY
SDK_URL=http://developer.nordicsemi.com/nRF5_SDK/nRF5_SDK_v$(echo $SDK_VERSION | cut -d \. -f 1).x.x/nRF5_SDK_$SDK_VERSION.zip
wget -c `echo $SDK_URL` # Continue in case of process restart
unzip nRF5_SDK_$SDK_VERSION.zip
rm nRF5_SDK_$SDK_VERSION.zip

echo Copying additional files...
cp $REPO_DIR/SDK_Additional_Files/Makefile.posix $SDK_DIRECTORY/components/toolchain/gcc/Makefile.posix
cp $REPO_DIR/SDK_Additional_Files/boards.h $SDK_DIRECTORY/examples/bsp/
cp $REPO_DIR/SDK_Additional_Files/oshchip.h $SDK_DIRECTORY/examples/bsp/