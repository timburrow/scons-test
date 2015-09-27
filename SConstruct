# Test building
import sys
import os

platform = sys.platform

# Set bash environmental variable. These are read in using the darwin.py when needed to set the build environment
# Set this to the SDK. XCode 7 needs MacOSX10.11.sdk, Xcode 6.x needs MacOSX10.10.sdk
# export OSX_SDK='/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.11.sdk'
# Choose your C compiler: cc is clang, gcc is /vnmr/gcc/bin/gcc (gcc 4.9.3)
# export CC=cc
# Choose your FORTRAN compiler: g77 or gfortran
# export F77=gfortran
# set a path to the compiler; this will be prepended to the PATH. For example, /vnmr/gcc/bin or /usr/local/bin
# export OSX_GCC_PATH=/vnmr/gcc/bin

buildList=['src']
for i in buildList:
   SConscript(os.path.join(i, 'SConstruct'), variant_dir = 'build')
