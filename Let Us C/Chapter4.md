# The Case Control Structure

In C programming, we encounter situations where we need to select between a number of alternatives which is much complicated than just mere selection between two alternatives. For this, C provides a special control statement/instruction.

# Switch-case

Syntax:

     switch (choice)
      {
          case constant 1: statement;
                             break;
          case constant 2: statement;
                             break;
          case constant 3: statement;
                             break;
          default: statement;
       }

If we don’t  use break in-between the cases, then, the statements in the following cases will be executed as-well until a break statement is encountered or until the end of the switch.

We can use char values in the constants in the cases.
 
If we need to execute a common set of statements for multiple cases. Then, we can use the common statements for the multiple cases.

For example:
 
     switch (choice)
       {
           case 1:
           case 11:
                       statements;
                        break;
           case 2:
           case 22:
                       statements;
                        break;
           default: statement;
       }

Even if there are multiple statements in the case there is no need to enclose them in braces.

If there is no case matching with our choice, then the default statement will be executed.

We can use only *int* and *char* constants. *float* is not allowed.

*switch* works faster than an equivalent *if-else* ladder. This is because generates a jump table for a switch during compilation. So, during execution, the compiler just refers to the jump table and decides which case to be executed whereas in the *if-else* the conditions are evaluated during the execution and if the condition is complex, it might take a lot of time.

# goto keyword

A keyword that is to be AVOIDED!, at all costs. As the name suggests, it is used to get a certain point in our code but it makes the flow of code uncertain.

The usage of goto keyword makes the programmer unsure of how we got to a  certain point in our code and is one of the reason that programs become unreliable and unreadable.

# exit () 

The exit() function is a standard library function which terminates the execution of the program.
