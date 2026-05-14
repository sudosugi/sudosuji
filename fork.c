// System call allows a program to request a service from the kernel
// Fork will create a new process (child) from an existing process (parent)
// After calling fork(): Two processes run the same code

// After fork() is executed:
// The child process becomes a copy of the parent process
// Both processes continue executing from the next line after fork()
// fork will return some special value if it is 0 then it is child, if > 0 then it is parent, if < 0 then fork is not executed

// unistd.h is a header file in C used mainly in UNIX/Linux systems.
// It provides declarations for many system calls and low-level operating system functions.
// unistd.h lets your C program communicate directly with the operating system.

#include <stdio.h>
#include <unistd.h>

int main() {
	
    // child process execute the if block
    if(fork() == 0) {
        printf("This is CHILD process\n");
    }

    // parent process execute the else block
    else {
        printf("This is PARENT process\n");
    }

    printf("PID: %d\n", getpid());

    return 0;
}


    //     Parent Process
    //           |
    //        fork()
    //       |    |
    //   Parent   Child



