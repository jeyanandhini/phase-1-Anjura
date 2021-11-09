 <h1 align="center"> Function calls </h1> 
 
 ## What does '*calling* a function' mean?

- It means that we are passing the control to another function. The other function executes the set of statements that it contains and when all the statements are done, the control returns back to `main` function.
So, `main` is said to be the `calling` function and the other function is said to be the `called` function.

So, we can say that:
	
  i. Every C program consists of at-least one function.
  
ii. If the program contains only one function, then it will be main()
  
iii. Program execution starts from main(), so if a program contains more than one function, then one of them will be main().

iv. Number of functions that can be added to a program - no limit.

- A function gets called when the function name is followed by a semicolon.

- A function is defined when the function name is followed by a pair of braces which contain one or more statements.

- A function can be called from any other function, any number of times. Even main() can be called from other functions. Note that a function cannot be defined in another function.

- The order in which the functions are called and the order in which they are defined doesn't have to be the same. But, the same order makes the program easier to understand.

- A function can call itself and the process is called *recursion*

----
## Passing values between functions

We need to communicate between the 'calling' and the called function and this can be done using arguments/parameters.

Let's take an example for our better understanding.

     main()
      {
          int a, b, sum;

            printf ("\n Enter the numbers");
            scanf ("%d %d", &a, &b);
 
             sum = add( a, b );
              printf ("\n Sum = %d", sum);
       }

       add (int x, int y)
         {
              int d;
                d = x+ y;
               return d;
         }

The variables *a*, *b* are called the `actual arguments` and the variables are called `formal arguments`.  In the `add()` function, the values of *a*, *b* get collected in the variables *x* and *y*.

Even if we use a and b in the `add()` function too, the compiler would still treat them as different variables because they are in different functions.

----

## Function calls
Arguments can generally passed to functions in two ways:
 
    a. Sending the values of the arguments (Call by value)
 	b. Sending the addresses of the arguments (Call by reference)
 
### Call by Value

 - Whenever a function is called, we pass the *values* of variables to the called function. This kind of function call is known as *call by value*
It means that we are passing the values of variables to the called function.

         Example:  sum = add (a, b);

- The changes made to the formal arguments in the called function have no effect on the values of actual arguments in the calling function.

### Call by reference

 - In this method (call by reference) the addresses of actual arguments in the calling function are copied into formal arguments of the called function.
This means that using these addresses we would have an access to the actual arguments and hence we would be able to manipulate them.

         Example: sum = add (&a, &b);
   The arguments will change in the function as -
   
         add (int *x, int *y)
         {
              int d;
              d = *x+ *y;
              return d;
         }
	      
 - We generally use call by value in C programming but if we want it, we can always achieve it through call by reference.

