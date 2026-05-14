//linkali comm

General Purpose Commands
date
shows the current date with day, month, time and the year
date +%m
month number
date +%h
month name
date +%y
last 2 digits of year
date +%H
hours
date +%M
minutes
date +%S
seconds
echo "message"
print message on screen
cal [month] [year]
show the calendar
bc -l
calculator (press Ctrl + C to exit)
who
show the list of users
whoami
show the login user
clear
clear the terminal screen
man [command]
provide manual for a command
-------------------------------------------------------------------------------------------------------------

Directory Commands
pwd
shows the current working directory
mkdir [directory name]
create a directory
cd [directory name]
move inside a directory
cd ..
move back to parent directory
ls
list all files and directories
ls -l
list files and directories with details
ls -a
list all hidden files and folders
rmdir [directory name]
delete a directory (only if it is empty)
-------------------------------------------------------------------------------------------------------------

File Commands
touch [file name]
create an empty file
cat [filename]
display the content of a file
head [filename]
display first 10 lines of a file
tail [filename]
display last 10 lines of a file
cp [source file] [destination file]
copy content of source file to destination file
rm [filename]
remove or delete a file

mv [old file name] [new file name]
rename a file
mv [filename] [path]
move file to a new location
file [filename]
display the type of file
wc -l [filename]
display number of lines
wc -c [filename]
display number of characters
wc -w [filename]
display number of words
-------------------------------------------------------------------------------------------------------------

File / Directory Permissions
d - directory
r - read
w - write
x - execute
- - no permission
- rw- r-- r-- - type user group other

chmod symbols
u - user
g - group
o - other
a - all
chmod a+rwx file.txt
give read, write, execute permission to all

chmod u-rw file.txt
remove read and write permission from user

Octal Method
0 - no permission
1 - execute
2 - write
3 - write and execute
4 - read
5 - read and execute
6 - read and write
7 - read, write and execute

chmod 777 filename
000 - no permission for user, group and other
777 - full permission to user, group and other
