# CS219-Programming-Assignment-2 - Junichiro Durroh

You must run this code by 
- unzipping the folder
- open the program in GitHub Codespaces, launch terminal, and use "cd" command to change folder to the file location
- type "make" in terminal to activate makefile and create all files needed
- type "./programmingproj2" in terminal to start program

For this assignment, I once again worked with "uint32_t" as it was something I used on the previous assignment and I chose to build off my previous program to avoid any potential issues. The program reads the text file, storing the operation, and both the first operand and the second. However, the operation differs as its read and stored as soon as the file is opened, while the file storing operands is done in each specific bitwise arithmetic statement. This is done due to the fact that the NOT operation only uses one operand instead of two, so having there be a neverending loop of the file reading for three strings instead of two would cause the wrong strings to be stored in the wrong objects once the program reaches the NOT arithmetic, and as a result, messes up the storage of values for every operation thereafter. Using the conversion method from the previous assignment, the operands are then converted and put into registers r1 and r2 respectively. It then does the bitwise arithmetic specific to the operation, saves that in r3 and outputs the whole equation, from operation, to operands, to result. It does this for each bitwise operation/shift, outputting the hexadecimal value of each operation.