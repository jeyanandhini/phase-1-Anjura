# What happens when a C program is compiled?

When a C program file is compiled and executed, teh compiler genrates files with the same name as of the program but using different extensions.

# What are the processes/steps included?

i. Every C program is saved with *'.c'* extension. This is done so that the compiler can understand that it is a C program file.
   This file is called the source file which conatins the code of the program.
   
ii. Now, when we compile the file, the compiler looks for errors. If there are no errors, then the file is stored as a *'.obj'* file with the same name.
    This *'.obj'* file is not executable.
    
iii. The process is now taken over by the linker which gives a *'.exe'* file and it is executable.
     
   The definitions of the functions are stored in their respective library.
   
   The linker links the object files to the library functions thus making a *'exe'* file in an executable format.
   
iv. The loader will then load the executable file for the execution.
