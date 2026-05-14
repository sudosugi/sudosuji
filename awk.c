AWK scripting 

 
Example 1: Simple Program
#!/bin/bash
echo "Welcome to Linux Shell Scripting"
echo "My name is Joshua"
✅
 Output:
Printed using ChatGPT to PDF, powered by PDFCrowd HTML to PDF API. 1/3
Welcome to Linux Shell Scripting
My name is Joshua
📌
 Example 2: Using Variables
#!/bin/bash
name="Joshua"
echo "Hello $name"
✅
 Output:
Hello Joshua
📌
 Example 3: Taking User Input
#!/bin/bash
echo "Enter your name:"
read name
echo "Welcome $name"
📌
 Example 4: If Condition
#!/bin/bash
echo "Enter a number:"
read num
if [ $num -gt 10 ]
then
    echo "Number is greater than 10"
else
    echo "Number is less than or equal to 10"
fi
📌
 Example 5: Loop (For Loop)
#!/bin/bash
for i in 1 2 3 4 5
do
    echo "Number: $i"
done
📌
 Example 6: While Loop
#!/bin/bash
count=1
while [ $count -le 5 ]
do
    echo "Count: $count"
    count=$((count + 1))
done