 <h1 align="center"> Recursions 🔄 </h1> 
 
 ### Defintion: The process in which a function calls itself is Recursion.
 
 I'm sure that the definition itself explains what is the basic idea of recursions is, but it isn't as easy as it sounds and at the same time, it ain't impossible.
 This concept turns difficult if we don't spend enough time and if we don't do it the right way. So, a thorough revision is a must while learning Recursions.
 
 Recursions can be compared to the Principle of Mathematical Induction. We assume the condition is true for `n` and then prove it for `n+1` and then we check it for `n=1` 
 and then conclude that the formula is correct.  
 We assume in-order to check/test the validity of the formula. And, then we prove it!
 
 The problems can also be done using loops and recursions but they aren't the same.
 
 ----
 ### Terms we would be using:
 #### - Target - A function that gives us the desired output.
 #### - Assumption - The formula which we assume is true to solve the problem and beleive that it is true! for sure!
 #### - Base condition - The condition where all the recursive calls end/return after execution.
 #### - Dry run - It literally means a rehearsal of a performance or procedure before the real one. So, it is the execution that we do by ourselves to find teh basic condition and get the target!.
 
 We do dry runs through three methods in recursions:
  - [Dry run using functions](https://github.com/cleanhand/phase-1-Anjura/blob/main/Concepts/Recursions/Dry%20run%20using%20functions.md)
  - Dry run using stack.
  - Dry run by making trees.

 ----
 ### The procedure that we will follow:
 1. Know the target. A function that gives us the desired output.
 2. Assume a condition based on the target that we have.
 3. Then, we combine the target and the assumption to write a function that works for a specific case.
 4. We generalize the function so that it works for any case.
 5. Then, we change the generalized solution to a programmable code.
 6. We do the dry run for the code we wrote and then come up with the base condition accordingly.
 7. Once we find the basec condition, we do another dry run and make sure the whole code works.

----
 
### An example to understand our procedure:
 Program: To print 1 to 6
 
 First, our target is to print- `1 2 3 4 5 6`.

This can be done using loops too but we will focus on doing it using recursion

So, we have set our target(T), and let's say our assumption(A) is that the function f(5) prints `1 2 3 4 5` and we believe in this assumtion.

T = f(6) = 1 2 3 4 5 6

A = f(5) = 1 2 3 4 5

If we combine T and A, we observe that the target,

    T = f(6) = A 
               print 6
        
    i.e, T = f(6) = 1 2 3 4 5 6
    
This case is only for `n=6`. Let's generalize the function so that it works for `n`
  
    f(n) = f(n-1)
           print n
           
Now, let's change this function into a programmable code.

    f(n)
    {
      //base condition
      f(n-1);
      printf("%d", n);
    }
       
Once we do the dry run, we find out that the base condition.

Here the base condition is,

    if(n==0)
    return;

Then the code is: 
   
      f(n)
      {
         if(n==0)
         return;
         
         f(n-1);
        printf("%d", n);
      }
  
And, there it is! The function that prints 1 to n. We just need to call this function and it prints the desired output. 

👉 [The code](https://github.com/cleanhand/phase-1-Anjura/blob/main/Problems/Recursions/toPrint1ton.c)
