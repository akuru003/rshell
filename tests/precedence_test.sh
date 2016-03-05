#!/bin/sh

(echo A && echo B) || (echo C && echo D)
(echo A || echo B) && (echo C && echo D)
(hostname && id) || (echo hi)
(echo hi) && (hostname && id)
(echo A && echo B && echo C) || (echo E && echo F && echo G)
touch temp.cpp
([ -edf /temp.cpp ] && test -edf /temp.cpp) && (id && hostname)
(id && hostname) || (echo hi && echo feas) && (echo yes && echo ssd)
(ls && ls -lt) && (test -edf /temp.cpp && id) && (hostname && id)
(ls && pwd) && (id && hostname) && (echo hi && echo yes) && (echo d && id)
(ls || pwd) || (id || hostname) || (echo hi || echo yes) || (echo d || id)
(ls || pwd) && (id && hostname) || (echo hi || echo yes) || (echo d || id)
(test -edf /temp.cpp && id) || ( [ -df /temp.cpp ] && id) && (id || hostname)
(git status && git log) && (test -edf /temp.cpp && id) && (git log && git hostname)
