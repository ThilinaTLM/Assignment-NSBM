This program is somewhat more complicated than the programs you have written so far, in that we are going to use many of the ideas we have discussed in class to write this.

To make the task easier for you, We have split the program deliverables  into different sections, And then finally asked you to use those separate sections in one program.

Make sure you split your code into functions. DO NOT put all your code in the main program. We will deduct marks.

Lecturer will advise in class on how to split this code into functions.

---

Description of the full program:

Write a program, to read in a comma separated set of  Name,address,IDnumber from a file, and store these data, a row at a time, each in a separate C 'structure' that has the following format:

struct person{
	char name[100];
	char address[100];
	char IDnumber[20];
	int  age;
}

Now use a Sort routine and Sort these C structures by the 'name' field, and re-write the sorted data, in comma separated form (in same form as the input file) back to a new file.

You should try to use the command line arguments to determine what the input file and the output file are. We will discuss command line arguments in class. 

---

# section 1:

First write code to read the input file and the output file from the command line arguments. Then open a file pointer (fp1) for the input file as follows:

fp1=fopen(file1, "r");

then open a file pointer for the output file for writing:

fp2=fopen(file2, "w");

now using fp1, read the input file using ch=fgetc(fp1);
and in the same loop write to the output file using fputc(fp2,ch);
fputc() is similar to putchar() we discussed before, but writes to a file pointer, rather than just writing to stdout.

---

# section 2:

modify the code you wrote in section 1 to detect a '\n' (newline) and also  detect ',' (comma). Do this in a switch statement.

assume your input file looks like the following

Name of person,Address of person,Alphanumeric ID
Name2,Address2,ID2,21
Name3,Address3,ID3,23

now declare a 'struct'ure in your code as follows:

struct person{
	char name[100];
	char address[100];
	char IDnumber[20];
	int  age;
}

copy each row (until the '\n') into a separate copy of the
structure above.

It is suggested that you create an  array of structures, as above, of say 100 size, and store the data you  read-in, in each array location. 

TIPS and Requirements:

section 2 code should be able to print out each array node from index 0
to final filled index.

---

# section 3:

use a sort routine. (does not need to be efficient) to sort the array in ascending order, and when sorted, re-write the sorted data, back in comma separated form to the output file.

---

Make sure to submit 3 separate source files. 1 each for each section, so that we can determine how you progressed. we do not need executable files. just make sure your code compiles, before submitting. multiple submission links will be provided. Grading will be on final link, for all parts. But if you have not submitted part1 and part2 on it's due date, only submit part3 you will loose marks.