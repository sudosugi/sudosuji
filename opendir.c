#include <stdio.h>
#include <dirent.h>   // for DIR, opendir, closedir

int main() {

    DIR *dir;

    dir = opendir(".");  // opendir() opens a directory. "." means the current directory

    if (dir == NULL) {   // if opendir() fails, it returns NULL
        printf("Failed to open directory\n");
        return 1;        // exit program with error code
    }

    printf("Directory opened successfully!\n"); // directory opened

    closedir(dir);       // close the directory

    return 0;
}