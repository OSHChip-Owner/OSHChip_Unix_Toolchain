#!/bin/sh
# OSHChip SDK download script for Ubuntu.
# Pawel Kazimierowicz <pawel@kazimierowicz.eu>
# 

# Specify SDK directory
SDK_DIRECTORY=../SDK
# Specify SDK version
SDK_VERSION=11.0.0-2.alpha_bc3f6a0

# Please do not touch anything below unless you know what you're doing
mkdir $SDK_DIRECTORY
cd $SDK_DIRECTORY
SDK_URL=http://developer.nordicsemi.com/nRF5_SDK/nRF5_SDK_v$(echo $SDK_VERSION | cut -d \. -f 1).x.x/nRF5_SDK_$SDK_VERSION.zip
echo $SDK_URL
wget -c `echo $SDK_URL` # Continue in case of process restart
unzip nRF5_SDK_$SDK_VERSION.zip
#rm nRF5_SDK_$SDK_VERSION.zip

echo Copying additional files...
cp ../SDK_Additional_Files/Makefile.posix $SDK_DIRECTORY/components/toolchain/gcc/Makefile.posix
cp ../SDK_Additional_Files/boards.h $SDK_DIRECTORY/examples/bsp/
cp ../SDK_Additional_Files/oshchip.h $SDK_DIRECTORY/examples/bsp/