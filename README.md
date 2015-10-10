# SCONS TEST #

Just a small project to test how scons works and, secondarily, to test the install of gcc (in /vnmr/gcc).

See the <a href='https://github.com/timburrow/gcc-4.9.3-OSX-vnmr-gcc-'>gcc-4.9.3-OSX-vnmr-gcc-</a> repository for gcc

To install SConstruct, down download the latest version from <a hrefp='http://scons.org/download.php'>Scons.org</a> and run setup.py:

```
curl -sO 'http://prdownloads.sourceforge.net/scons/scons-2.4.0.tar.gz'
tar -xzvf scons-2.4.0.tar.gz
cd scons-2.4.0
sudo python setup.py install
```

If necessary, set the SDK by setting the bash environment variable OSX_SDK
```
export OSX_SDK='/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.11.sdk'
```

Set CC and F77 to override whether gcc or llvm/clang (cc) is used to compile the C file and FORTRAN files:

```
export CC=cc # Use cc (clang)
export CC=gcc # Use gcc (if installed and on the PATH
export F77=gfortran # use gfortran
export F77=g77 # use g77
```


Tim Burrow 2015-September
