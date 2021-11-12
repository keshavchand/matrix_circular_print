@echo off

set optimizations=
::/O2
mkdir build
pushd build
:loop
pwd
python ../make_matrix.py > ../matrix.c
cl /Zi /FC /nologo  ..\main.c
::&& payoff.exe
clear
::GOTO loop
popd 
