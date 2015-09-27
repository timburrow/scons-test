# SCONS TEST #

Just a small project to test how scons works and, secondarily, to test the install of gcc (in /vnmr/gcc).

See the <a href='https://github.com/timburrow/gcc-4.9.3-OSX-vnmr-gcc-'>gcc-4.9.3-OSX-vnmr-gcc-</a> repository for gcc

To install SConstruct, down download the latest version from <a hrefp='http://scons.org/download.php'>Scons.org</a> and set setup.py. 
```
curl -sO 'http://prdownloads.sourceforge.net/scons/scons-2.4.0.tar.gz'
tar -xzvf scons-2.4.0.tar.gz
cd scons-2.4.0
sudo python setup.py install --standard-lib
```

Set the SDK in the top level SConstruct file (you need Xcode installed for the SDK) by setting OSXsysroot

Set whether gcc or llvm/clang (cc) is used to compile the C file by setting OSXCC

Tim Burrow 2015-September
