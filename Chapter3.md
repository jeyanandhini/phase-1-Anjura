# The loop control structure

In programming, we often need to perform a certain action multiple times and sometimes, including subtle variations in the details each time. 

This is where we need "loops".

# What are loops?

 The repetition of the statements or some portion of the program for a certain number of times or until some condition is being satisfied is called loop. This repetition is done through a loop control statement.

Three ways by which we can repeat a part of a program:
    
    i. For statement
    
    ii. While statement
    
    iii. Do-while statement

# While Loop:

Syntax:
    
     while(condition)
     {
        statements;
        increment/decrement;
     }

As long as the condition is true all the statements will be executed repeatedly.
If the condition is false, the control passes to the rest of the program after the while loop.
 
We must use a condition that will eventually turn out to be false, otherwise the loop will be executed forever, indefinitely.

The increment (++) or the decrement (--) operators can be used. Compound assignment operators such as +=, -=, /=, %= can be used as well.

# For Loop:

Syntax:
  
      for (initialization; condition; increment/decrement)
        {
         statements;
        }

 The for loop specifies that we can initialize, check the condition, increment/decrement the value of the variable in a single line. Semicolons are used to separate them.

Steps in which the for loop is executed:
	   
     i. Initialization of the variable.
     
     ii. The condition is checked. If true, the body of the loop is executed.
     
     iii. Then, the value of the variable gets incremented/decremented.

In the second step, if the condition is false, the control is passed to the rest of the program after the *for* loop.

Multiple variables can be initialized; incremented/decremented too but there should only be one condition.

# Nesting of loops

We know that *if* statements can be nested, in the same way, *while* and *for* statements can also be nested.

A *for* loop can occur within a *while* loop or vice-versa.

# Break Statement

The *break* keyword allows us to jump out of a loop instantly. When *break* is encountered in any loop, the control passes to the first statement after the loop.

# Continue Statement

The *continue* keyword allows us to pass the control to the start of the loop, bypassing the statements in the loop which have not been executed yet.

# Do-while Loop:

Syntax:

     do
       {
           statements;
        }
     while(condition);

The difference between *while* and *do -while* loop is that the way of execution.
The *while* loop checks the condition first and then, executes the statements whereas the *do-while* loop checks the condition after the statements are executed. This means that the *do-while* will execute the statements at-least once.

A break takes you out of the *do-while* bypassing the condition. A continue sends you straight to the condition at the end of the loop.
