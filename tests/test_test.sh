#1/bin/sh

touch main.cpp
test -e /main.cpp
test -f /main.cpp
test -d /main.cpp
test -ef /main.cpp
test -ed /main.cpp
test -df /main.cpp
test -edf /main.cpp
test -fde /main.cpp 
test -def /main.cpp
mkdir temp
rm main.cpp
test -e /temp
test -f /temp
test -d /temp
cd temp
touch main.cpp
cd -
test -e /temp/main.cpp
test -f /temp/main.cpp
test -d /temp/main.cpp
cd temp
rm main.cpp
cd -
rm -rf temp
