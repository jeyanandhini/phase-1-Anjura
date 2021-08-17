# Decision Control Structure

In order to perform different sets of actions depending on the circumstances, C consists of three major decision making instructions.
They are:

    if statement
    
    if-else statement
    
    switch statement
    
There exists a forth one that uses conditional operators; somewhat less important.

# The if Statement

Syntax: 

    if (condition)
         statement;
       
If the condition is true, then the statement is executed.

If the condition is false, then the statement is not executed and the program skips past it.

We express the condition using relational operators.

In C, a non-zero value is considered to be true, whereas a 0 is considered to be false.

There can be multiple statements that are to be executed if the expression following *if* is satisfied, then, the statements are to be placed within a pair of brackets.

    if (condition)
        {
            statement 1;
            statement 2;
            .
            .
        }
         
 # The if-else Statement
 
 Syntax:
 
     if (condition)
       {
         statements;
       }    
     else
       {
          statements;
       }
       
If there is only one statment to be executed in each of  the *if* and *else*, then we can drop the braces.

# Nested if-elses

Syntax:
    
    if (condition1)
      {
         if (condition2)
             statements;
             
         else
            {
               statements;
            }
        }
     else 
       statement;

We can write an entire *if-else* construct within the body of the *if* statement or the body of an *else* statement. This is called 'nesting' of *ifs*

There are many ways that nesting of *if* can be done.
