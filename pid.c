// A PID is a unique number given to every process by the operating system.
// Every process is created by another process (except the first system process).

// getpid() → gives program’s process ID
// getppid() → gives PID of the process that started your program


#include <stdio.h>
#include <unistd.h>

int main() {
    
    printf("PID: %d\n", getpid()); // PID of the current process
    printf("PPID: %d\n", getppid()); // PID of the process that started your program
    
    return 0;
}


// Parent could be:
// terminal, another program, shell, system service

// system
//   |
// terminal
//   |
// your program