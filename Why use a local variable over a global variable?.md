##  Local Variable

* Local Variable is defined as a type of variable declared within a function.
* It is created when the function starts execution and lost when the functions terminate.

##  Global Variable

* A Global Variable in the program is a variable defined at the start and can be accessed by any function defined in the program.
* It is created before the program's global execution starts and lost when the program terminates.

# **_Why use a local variable over a global variable?_**

* When the value of the local variable is modified in one function, the changes are not visible in another function.
* When the value of the global variable is modified in one function changes are visible in the rest of the program.
* This may give unpredictable results in multi-tasking environments.
* You can give local variables the same name in different functions because they are only recognized by the function they are declared in.
* Local variables are deleted as soon as any function is over and release the memory space which it occupies.


[Source](https://www.guru99.com/local-vs-global-variable.html)
