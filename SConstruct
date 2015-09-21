# Test building
import sys

platform = sys.platform

largeFileFlags = '-DHAVE_LARGEFILE_SUPPORT -D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE'
env = Environment(CCFLAGS    = '-O2 -Wall -m32 ' + largeFileFlags,)
env.PrependENVPath('PATH', '/vnmr/gcc64/bin')
if (platform == 'darwin'):
      env.PrependENVPath('PATHOSX', '/vnmr/gcc64/bin')
      sysroot = '/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.11.sdk'
      env.Replace(CC='gcc')
      env.Replace(FORTRAN='gfortran')
      env.Append(CPPDEFINES = 'MACOS', CPPFLAGS = ' -arch i386',
        LINKFLAGS = ' -arch i386 ', FORTRANFLAGS = ' -m32 ')

env.Program(target='test', source=['test.c','output.f'])

#      env.Append(CPPDEFINES = 'MACOS', CPPFLAGS = ' -arch i386  -isysroot ' + sysroot,
