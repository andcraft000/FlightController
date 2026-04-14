@echo off
REM batch script
cd ..
"cmake --build ."
cd Debug
./sim.exe