# 🌟Functions and Pointers

We rely on many people to get things done in our life. We cannot do all the stuff all by ourselves.
In the same way, a computer program cannot complete all the tasks by itself, so it requests or calls other program-like entities called functions. 

# ✨Function

It is a block of statements that perform a specific task. A C program is a collection of these functions.
main() is a function and through it, we can call other functions.

# ⭐What does '*calling* a function' mean?

It means that we are passing the control to another function. The other function executes the set of statements that it contains and when all the statements are done, the control returns back to *main* function.

So, main() is said to be the 'calling' function and the other function is said to be the 'called' function.

So, we can say that:
i. Every C program consists of at-least one function.
  
ii. If the program contains only one function, then it will be main()
  
iii. Program execution starts from main(), so if a program contains more than one function, then one of them will be main().

iv. Number of functions that can be added to a program - no limit.

✨ A function gets called when the function name is followed by a semicolon.

✨ A function is defined when the function name is followed by a pair of braces which contain one or more statements.

✨ A function can be called from any other function, any number of times. Even main() can be called from other functions. Note that a function cannot be defined in another function.

✨ The order in which the functions are called and the order in which they are defined doesn't have to be the same. But, the same order makes the program easier to understand.

✨ A function can call itself and the process is called *recursion*

# ⭐Why should we use functions?

By writing functions, we can avoid the hassle of rewriting the same code multiple times.

It becomes easier to write programs and to keep track of what is being done.

# ⭐Passing values between functions

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
                d = x+y;
               return d;
         }

The variables a, b are called the 'actual arguments' and the variables are called 'formal arguments'. 
In the add() function, the values of a, b get collected in the variables x and y.

Even if we use a and b in the add() function too, the compiler would still treat them as different variables because they are in different functions.

There are two methods using which you can declare the *formal* arguments.

i. Kernighan and Ritchie (K&R) method.
         
        example:    add (x, y)
                    int x, y;

ii.    ANSI method.
    
         example:    add (int x, int y)

There can be many number of arguments but the order and the number of the actual and formal arguments must be the same; always.

# ✨return statement

The return statement immediately transfers the control back to the *calling* program when it is executed.  It returns the value present in the braces after the return statement, to the calling program. This means that it returns the value of the variable in the braces ( ) of the return statement in the called function.

The scope of a variable is local to the function in which it is defined.

Any number of return statements can be used in a function and there is no need for the return statement to be present at the end of the called function. It can be used anywhere in the function. 

A function can return only one value at a time.

Even if the value of the formal argument is changed in the called function, it doesn't reflect in the calling function. This means that only a photo copy of the values in actual argument are into formal arguments.

# ⭐Calling Convention

It is the order in which the arguments are passed to a function when a function call is encountered.

The arguments might be passed from left to right or from right to left but C language follows the second order. The arguments in C are passed from right to left.

# ⭐Function Declaration and Prototypes

Any function in C by default returns an int value. If we want the function to return a value other than int, we need to mention that in the calling function as well as in the called function.

For example: float square (float);

This statement means that the function receives a *float* and returns a *float*

This statement is called the *prototype declaration* of the function. We do the prototype declaration in the *main()* because we call it from the *main* function. 
Declaring once at the start of the program is enough and the function can be called by functions other than *main* function as well.

If we want the called function return no value, then we can use the keyword *void*.

#  ✨Intro to Pointers

When we declare/initialize a variable, the computer reserves a memory location and stores the value of the variable in this location.

Example:      int i = 7;

   Here,
   
           location name - i
           value at the location - 7
           location number/memory location - 67850 (some random whole number)

i's address in memory is a number.

'&' is the *address of* operator. The expression *&i* returns the address of the variable i.

'*' is the *value at address* operator. 

'%u' is the *format specifier* for printing an unsigned integer.

If we go by the definition of the above expressions, we can easily understand and solve pointers.
           
Example:   
     
       main ()
         {
            int i = 3, *j, **k ; 

            j = &i ;
            k = &j ;   
            /* j stores the address of i* 
                             and k stores the address of j */ 
           
           printf ( "\nAddress of i = %u", &i ) ; 
            // '&i' means address of (i) which is some random whole number
          
            printf ( "\nAddress of i = %u", j ) ;
             // '%u' is used to print the unsigned integer j
          
            printf ( "\nAddress of i = %u", *k ) ; 
             /* '*k' means the value at (k) and k is the address of j.
                  so,  '*k' can be written as '*(&j)' which is value at address of j,
                  which is ultimately the address of i. */
           
           printf ( "\nAddress of j = %u", &j ) ;
           printf ( "\nAddress of j = %u", k ) ; 

           printf ( "\nAddress of k = %u", &k ) ; 
           // address of k will be a random whole number

           printf ( "\nValue of j = %u", j ) ;
           printf ( "\nValue of k = %u", k ) ; 
          // value of j is the address of i and the value of k is the address of j 
         
           printf ( "\nValue of i = %d", i ) ; 
           printf ( "\nValue of i = %d", * ( &i ) ) ; 
           // '*(&i)' means the value at(the address of i) which is the value of i

           printf ( "\nValue of i = %d", *j ) ; 
           // '*j' means the value at j i.e, value at (the address of i)… which is the value of i
          
           printf ( "\nValue of i = %d", **k ) ; 
          /* '**k' means the value at {value at (address of j)}
              value at the address of j is address of i and value at the address of i is the value of i */
         }
  
A simple presentation:

         location name                 i                  j                  k
      
         Value at the location         3                65524                 65522 

         location number             65524              65522                 65520

From the presentation; we can write the output of the program

 output: 
            
            Address of i = 65524
            Address of i = 65524
            Address of i = 65524
            Address of j = 65522
            Address of k = 65520
            Value of j = 65524 
            Value of k = 65522 
            Value of i = 3 
            Value of i = 3 
            Value of i = 3 
            Value of i = 3 

We can conclude that 'i' is an ordinary integer, 'j' is a pointer to an int (integer pointer) and 'k' is a pointer to an integer pointer.

# ✨Function calls

Arguments can generally passed to functions in two ways:
 
a. Sending the values of the arguments (Call by value)

b. Sending the addresses of the arguments (Call by reference)
 
# ✨Call by Value

Whenever a function is called, we pass the *values* of variables to the called function. This kind of function call is known as *call by value*
It means that we are passing the values of variables to the called function.

Example:  sum = add (a, b);

The changes made to the formal arguments in the called function have no effect on the values of actual arguments in the calling function.

# ✨Call by reference

In this method (call by reference) the addresses of actual arguments in the calling function are copied into formal arguments of the called function.
This means that using these addresses we would have an access to the actual arguments and hence we would be able to manipulate them.

We generally use call by value in C programming but if we want it, we can always achieve it through call by reference.

# ✨Recursion

The process of defining something in terms of itself is known as recursion.

In C, a function can call itself. It is called a *recursive* function if a statement within the body of a function call for the same function.

Recursion is difficult to understand, but in some cases offer a better solution than loops. 
