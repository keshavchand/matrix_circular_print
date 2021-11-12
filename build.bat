@echo off

set optimizations=
::/O2
mkdir build
pushd build
:loop
pwd
cl /Zi /FC /nologo ..\make_matrix.c
make_matrix.exe > ../matrix.c
cl /Zi /FC /nologo  ..\main.c
::&& payoff.exe
clear
::GOTO loop
popd 
