#!/bin/sh


exit
id && exit
hostname && exit
exit && id
mkdir test && rmdir test && exit
touch test.txt && rm test.txt && exit
exit || hostname
exit || id
echo "hi" && echo "hi again" && echo "bye" && exit
echo "hi"; exit
hostname && echo "hi" && exit
exit || echo "hi" || echo "hi"
(exit && echo hi) && (echo yes && echo no) || (echo fail && id)
(exit && echo A) || (echo yes && echo no) || (echo fail && id)
(exit && echo B) && (echo yes && echo no) && (echo fail && id)
touch temp.cpp
(exit && echo D) && (echo yes && echo no) || (test -e /temp.cpp)
([ -edf /temp.cpp] && id) && (exit && echo hi) || (echo pass && echo fail)
rm temp.cpp

