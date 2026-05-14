txt editor

1.VI editor

 1. Modes of vi Editor
vi works in 3 modes:
1. Command Mode (default)
2. Insert Mode (for typing)
3. Last Line Mode (for saving/quitting)

2. Basic Commands
 Open a file
vi file.txt

 Insert Mode (type text)
Command Action
i Insert before cursor
a Insert after cursor
o New line below
➡
 Press Esc to come back to command mode

 Save & Exit
Command Action
:w Save
:q Quit
:wq Save & quit
:q! Quit without saving


 Delete Commands
Command Action
x Delete one character
dd Delete entire line
d$ Delete till end of line

 Copy & Paste
Command Action
yy Copy line
p Paste


 Undo / Redo
Command Action
u Undo
Ctrl + r Redo


2. Nono editor

1. open a file

nano file.txt

2. saving a file 

ctrl + O 
enter

3. save and exit 

ctrl + O 
enter
ctrl + X

4. delete a line

ctrl + K

5. exit 

ctrl + X 

3. Stream editor 

📄 Input File (data.txt)
apple
banana
apple juice
grapes
✅ Command
sed 's/apple/orange/g' data.txt
📤 Output
orange
banana
orange juice
grapes
🔹 Example with File Update
sed -i 's/apple/orange/g' data.txt

👉 -i → edits the file directly

🔹 Another Example (Delete lines)
sed '/apple/d' data.txt


