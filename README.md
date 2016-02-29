# OSHChip_Unix_Toolchain
Tools to let you build projects for OSHChip within the Unix/Linux OS Environment

# Installation
## Ubuntu 
If you're running Ubuntu you can use ``Setup_Scripts/Ubuntu_SetupToolchain.sh``
Simply:
```
$ cd Setup_Scripts
$ sh Ubuntu_SetupToolchain.sh

```

It will download Nordics SDK install it in SDK directory and configure it to work with OSHChip.

You can change the SDK localization but then you'll have to change the SDK_ROOT constant in the makefiles to compile examples.

## Other distros
To download the SDK you can use only ``Setup_Scripts/DownloadSDK.sh`` to download the SDK and then manually
1. Install GNU ARM toolchain (for example under ArchLinux the package is named ``arm-none-eabi-gcc``).
2. Configure toolchain's localization, version and prefix appropiately in ``SDK/components/toolchain/gcc/Makefile.posix``

# Building the examples
Every example has its own makefile so you simply enter to an example directory and type ``make`` to build.