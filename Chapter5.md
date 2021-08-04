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

There can be many number of arguments but the order and the number of the actual and formal arguments must be the same; always.

