Programming is like building a multilingual puzzle.
# Master Guidebook - Keeping track of my utilities

1. helper.c
	- holds function definitions that I'll always need to compile
		- like _putchar

2. compile script 
	- compiles a list of c files with full warnings
	- helper.c is automatically compiled as well
	- output is "compost" executable

3. add_header script
	- adds a function prototype to holberton.h
compiling everything into compost lets me test task-files without needing to worry about github clean up, because compost has been added to .gitignore 
	- I can compile and test my task c files, or my personal c files 
	- hello.c and helpers.c would be personal c files which aid in development

