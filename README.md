# csc415-p1

## Student's info:
 
 ||||
 | ------------- |-------------| -----|
 | 1. | Student's Name | Ilya Kopyl |

## Short description of the program
Functionally, the program inserts the student's name into a string template, and then prints that string to the standard output.

To achieve this, I used the system call `write()` to output a given string to a console, and a function `sprintf()` to format the string (primarily to insert a name to the specified string template).

Other things that I used in this project: since I didn't want to have the length of the char array `out` (that would store the formatted string) to be arbitrarily determined and hard-coded, I implemented a fuction `mystrlen()` that counts the number of characters in a given char array. I used that function to dynamically determine the size of the array `out`. While implementing that function I allowed myself to leverage some pointers arithmetic to count the number of elements in the array.


## Building Instructions
Run the following in the project directory:
```bash
$ make
```
This would execute `gcc -I -Wall hello_world.c -o hw`.

To clean the target (to delete the previously compiled build), run the following command:
```bash
$ make clean
```

## Run Instructions
Execute the following in the project directory:
```bash
$ ./hw
```

As a result, the following message will display: `CSC 415, This program written by Ilya Kopyl!!!`

