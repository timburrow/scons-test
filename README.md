# SCONS TEST #

AA small test to check how scons links on OS X


To install SConstruct, down download the latest version from <a hrefp='http://scons.org/download.php'>Scons.org</a>. 
```
curl -sO 'http://prdownloads.sourceforge.net/scons/scons-2.4.0.tar.gz'
tar -xzvf scons-2.4.0.tar.gz
cd scons-2.4.0
sudo python setup.py install
```



```
export CC=cc # Use cc (clang)
export CC=gcc # Use gcc (if installed and on the PATH
scons
./build/test
otool -L build/test
```

At this point, the library link is relative to build, so 
```
cd build
./test
```
fails because the library cannot be found!

Tim Burrow 2016-July
