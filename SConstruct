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

sysroot = '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.10.sdk'
print sysroot

buildList=['src']
for i in buildList:
   SConscript(os.path.join(i, 'SConstruct'), variant_dir = 'build', exports = 'sysroot')
