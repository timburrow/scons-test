# Test building
import sys
import os

platform = sys.platform
# use clang, removed fortran, testing how to use a relative path to a dynamic library
# export OSX_SDK='-sdk macosx'

SConscript('lib/SConstruct', variant_dir = 'build/lib') 
SConscript('src/SConstruct', variant_dir = 'build')
