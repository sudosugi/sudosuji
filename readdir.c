// struct dirent - Structure that stores info about each file.
// readdir(dir) - read one file from directory
// d_name - store the file name


#include <stdio.h>
#include <dirent.h>

int main() {

    DIR *dir;
    struct dirent *entry;

    dir = opendir(".");

    if (dir == NULL) {
        printf("Cannot open directory\n");
        return 1;
    }

    printf("Files in directory:\n");

    // Loop through all files in the directory
    while ((entry = readdir(dir)) != NULL) { // readdir() reads one entry at a time
        printf("%s\n", entry->d_name);  // d_name stores the file name
    }

    closedir(dir);

    return 0;
}