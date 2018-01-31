@echo off
set path=%path%;D:\AVRTOOLS\WinAVR\bin;D:\AVRTOOLS\WinAVR\utils\bin;
del *.o
make -f LedTest.mak
pause
