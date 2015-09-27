# Test building
import sys
import os

platform = sys.platform

largeFileFlags = '-DHAVE_LARGEFILE_SUPPORT -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE'
env = Environment(CCFLAGS    = '-O2 -Wall -m32 ' + largeFileFlags,)
env.PrependENVPath('PATH', '/vnmr/gcc/bin')
#print env.Dump()
#env.Prepend(PATH='/usr/local/bin')

print env["ENV"]

# Set this to the SDK. XCode 7 needs MacOSX10.11.sdk, Xcode 6.x needs MacOSX10.10.sdk
OSX_SDK = '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.11.sdk'
# Choose your C compiler: cc is clang, gcc is /vnmr/gcc/bin/gcc (gcc 4.9.3)
OSX_CC = 'cc'
# set a path to the compiler; this will be prepended to the PATH. For example, /vnmr/gcc/bin or /usr/local/bin
OSX_PATH = '/vnmr/gcc/bin'

print OSXsysroot

buildList=['src']
for i in buildList:
   SConscript(os.path.join(i, 'SConstruct'), variant_dir = 'build', exports = 'OSX_CC OSX_SDK OSX_PATH')
