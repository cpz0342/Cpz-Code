:loop
 rand.exe
 baoli.exe > b.out
 std.exe > c.out
 fc b.out c.out
 if not errorlevel 1 goto loop
pause
