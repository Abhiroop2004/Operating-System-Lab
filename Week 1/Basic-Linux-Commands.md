# BASICS OF UNIX COMMANDS

## Aim:
To study the basics of UNIX

### Unix
It is a multi-user operating system. It was developed at AT & T Bell Industries, USA in 1969.

### Linux
Linux is similar to UNIX, which was created by Linus Torualds. All UNIX commands work in Linux. Linux is open-source software. Its main feature is coexisting with other OS, such as Windows and UNIX.

### Structure of a Lunix System
It consists of three parts.
UNIX kernel: The kernel is the core of the UNIX OS. It controls all tasks, schedules all Processes, and carries out all the OS's functions.
- Shells: Shell is the command interpreter in the UNIX OS. It accepts commands from the user and analyses and interprets them
- Tools and Applications

### Commands

1. `date` Command
   – used to check the date and time
   ```sh
    Sun Nov 17 07:14:34 IST 2024                                                                                            
    root@DESKTOP-L3EPDNV:~# date +%m                                                                                        
    11                                                                                                                      
    root@DESKTOP-L3EPDNV:~# date +%y                                                                                        
    24                                                                                                                      
    root@DESKTOP-L3EPDNV:~# date +%h                                                                                        
    Nov                                                                                                                    
    root@DESKTOP-L3EPDNV:~# date +%d                                                                                        
    17                                                                                                                      
    root@DESKTOP-L3EPDNV:~# date +%H                                                                                        
    07                                                                                                                      
    root@DESKTOP-L3EPDNV:~# date +%M                                                                                        
    15                                                                                                                      
    root@DESKTOP-L3EPDNV:~# date +%S                                                                                        
    42   
    ```
2. `cal` Command
   – used to display the calendar
   ```sh
    root@DESKTOP-L3EPDNV:~# cal                                                                                                
    November 2024                                                                                                        
    Su Mo Tu We Th Fr Sa                                                                                                                    
    1  2                                                                                                     
    3  4  5  6  7  8  9                                                                                                    
    10 11 12 13 14 15 16
    17 18 19 20 21 22 23                                                                                                    
    24 25 26 27 28 29 30                                                                                                                          
   ```
2. `Echo` Command
   – used to print the message on the screen.
   ```sh
   root@DESKTOP-L3EPDNV:~# echo "Hello World"
   Hello World  
   ```
4. `ls` Command
   – used to list the files. Your files are kept in a directory.
   ```sh
   root@DESKTOP-L3EPDNV:/mnt/c# cd Users                                                                                                                                                                                         root@DESKTOP-L3EPDNV:/mnt/c/Users# ls                                                                                                                                                                                         'All Users'   Default  'Default User'   Hp   Public   desktop.ini                                                                                                                                                             root@DESKTOP-L3EPDNV:/mnt/c/Users# 
   ```

6. `Man` Command
   – used to provide manual help on every UNIX command
   ```
   root@DESKTOP-L3EPDNV:~# man cat
   ```
8. `Who` and `Whoami` Command
   ```sh
   root@DESKTOP-L3EPDNV:/mnt/c# who                                                                                                                                                                                              root     pts/1        2024-11-17 07:13                                                                                                                                                                                        root@DESKTOP-L3EPDNV:/mnt/c# whoami                                                                                                                                                                                           root
   ```
   
9. `uptime` `uname` `hostname` Commands
    ```sh
    root@DESKTOP-L3EPDNV:/mnt/c# uptime                                                                                                                                                                                           08:13:35 up  1:00,  1 user,  load average: 0.00, 0.01, 0.00
    root@DESKTOP-L3EPDNV:/mnt/c# uname
    Linux
    root@DESKTOP-L3EPDNV:/mnt/c# hostname
    DESKTOP-L3EPDNV
    ```
10. `bc` Best Command Calculator
    ```sh
    root@DESKTOP-L3EPDNV:/mnt/c# bc                                                                                                                                                                                               bc 1.07.1                                                                                                                                                                                                                     Copyright 1991-1994, 1997, 1998, 2000, 2004, 2006, 2008, 2012-2017 Free Software Foundation, Inc.                                                                                                                             This is free software with ABSOLUTELY NO WARRANTY.                                                                                                                                                                            For details type `warranty'.                                                                                                                                                                                                  10*6/5                                                                                                                                                                                                                        12                                                                                                                                                                                                                            sqrt(196)                                                                                                                                                                                                                     14                                                                                                                                                                                                                            2^5<5^2                                                                                                                                                                                                                       0                                                                                                                                                                                                                             2^5>5^2                                                                                                                                                                                                                       1                                                                                                                                                                                                                             for(i=-5;i<5;i=i+1)i                                                                                                                                                                                                          -5                                                                                                                                                                                                                            -4                                                                                                                                                                                                                            -3                                                                                                                                                                                                                            -2                                                                                                                                                                                                                            -1                                                                                                                                                                                                                            0                                                                                                                                                                                                                             1                                                                                                                                                                                                                             2                                                                                                                                                                                                                             3                                                                                                                                                                                                                             4                                                                                                                                                                                                                             quit
    ```
