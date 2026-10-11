@echo off
cd /d %~dp0

echo ===== Building: main.c + snake.c =====
gcc -std=c11 -Wall -Wextra main.c snake.c -o snake.exe

if %errorlevel% neq 0 (
    echo.
    echo ===== BUILD FAILED - read the errors above =====
    pause
    exit /b 1
)

echo.
echo ===== Build OK, running snake.exe =====
echo.
snake.exe
echo.
pause
