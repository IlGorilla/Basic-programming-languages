@echo off

:menu  
choice /C snf /M "Bla bla bla"
if %errorlevel1% == 1 goto si
if %errorlevel1% == 2 goto no
if %errorlevel1% == 3 goto forse

:forse 
echo.
echo Forse 
pause>nul 
goto menu

:no
echo.
echo No
pause>nul 
goto menu

:si
echo.
echo Si
pause>nul 
goto menu