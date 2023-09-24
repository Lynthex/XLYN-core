#!/bin/bash
echo -e "\033[0;32mHow many CPU cores do you want to be used in compiling process? (Default is 1. Press enter for default.)\033[0m"
read -e CPU_CORES
if [ -z "$CPU_CORES" ]
then
	CPU_CORES=1
fi

# Entering directory
	cd Lynthex

# Compile dependencies
	cd depends
	make -j$(echo $CPU_CORES) HOST=x86_64-pc-linux-gnu 
	cd ..

# Compile
	./autogen.sh
	CONFIG_SITE=$PWD/depends/x86_64-w64-linux/share/config.site ./configure --prefix=/ --enable-cxx --enable-static --disable-shared --disable-debug --disable-tests --disable-bench --with-pic
	make -j$(echo $CPU_CORES) HOST=x86_64-pc-linux-gnu
	cd ..
