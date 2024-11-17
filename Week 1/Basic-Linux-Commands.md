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
   3. `Echo` Command
      ```sh
      root@DESKTOP-L3EPDNV:~# echo "Hello World"
      Hello World  
      ```
