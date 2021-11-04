 <h1 align="center"> Dry run using functions </h1> 
 
 As the name suggests, we use functions and the procedural execution of them to find the basic condition and then get the output accordingly.
 
 Please refer to the picture while reading the explanation.
## Explanation:

 ![image](https://user-images.githubusercontent.com/85027663/140314568-6e1190c8-538f-4482-9196-62b8dde8bbfb.png)

When we first start with the function `f(5)`, we don't know the basic condition. So we just keep executing it to find the basic condition.

As `f(5)` is being executed, it calls `f(n-1)` i.e, `f(4)`, denoted by the black arrow. The function `f(5)` is on hold until `f(4)` is completely executed. `f(4)` calls for `f(3)` and `f(4)` is on hold,
`f(3)` calls `f(2)`, `f(2)` calls `f(1)`, `f(1)` calls `f(0)`, and all these are denoted by the black arrows.

But, when we reach `f(0)`, we find that the execution just goes on and on. So, we need a condition that will retrun back to `f(1)` without printing `0`.

So, we introduce the condition,
   
    if(n==0)
    return;
    
And, the execution of `f(0)` is done and it returns to `f(1)` and then we print `1` and it returns to `f(2)`, `f(2)` to `f(3)` after printing `2`, `f(3)` to `f(4)`, `f(4)` to `f(5)` and all the function calls are executed and we return back to the main function,
which are denoted by the green arrows.
