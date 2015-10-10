# SCONS TEST #

Just a small project to test how scons works and, secondarily, to test an install of gcc (in /usr/local/) compiling and linking C and FORTRAN code.

See the <a href='https://github.com/timburrow/gcc-5.2-OSX'>gcc-5.2-OSX</a> repository for a tar archive of gcc that includes, or use any gcc that includes C and FORTRAN.

To install SConstruct, down download the latest version from <a hrefp='http://scons.org/download.php'>Scons.org</a>. 
```
curl -sO 'http://prdownloads.sourceforge.net/scons/scons-2.4.0.tar.gz'
tar -xzvf scons-2.4.0.tar.gz
cd scons-2.4.0
sudo python setup.py install
```

Set the SDK in the top level SConstruct file (you need Xcode installed for the SDK) by setting OSXsysroot

Set CC and F77 to override whether gcc or llvm/clang (cc) is used to compile the C file and FORTRAN files:

```
export CC=cc # Use cc (clang)
export CC=gcc # Use gcc (if installed and on the PATH
export F77=gfortran # use gfortran
export F77=g77 # use g77 
```

Tim Burrow 2015-October
