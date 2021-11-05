 <h1 align="center"> Dry run using Stack concept </h1> 
 
 Whenever a function is called, it will be alloted a stack frame of memory. And, when all the statements in the function are executed, then the memory is popped/wiped out.
 We will do the dry run according to this concept.
 
 Refer to the picture while reading the explanation.
 
### Explanation:

![image](https://user-images.githubusercontent.com/85027663/140482478-9b5bdbd2-4c2c-467d-9e2e-1d924332969d.png)

When the function `f(5)` is called, a stack frame of memory is alloted to it, which is shown in the picture with the red box.

As the execution of `f(5)` is being done, it calls `f(4)` denoted by the green arrow, so another stack of memory is alloted to funtion `f(4)`. `f(4)` calls `f(3)`, `f(3)` calls `f(2)`, `f(2)` calls `f(1)` and `f(1)` calls `f(0)`.
We observe that the execution just goes on.

We need a base condition, and we don't have to print `0` to reach our target, so we come with the condition, 

    if(n==0)
    return;

It returns to the function `f(1)` shown using the black arrow. The stack memory of `f(0)` is popped off. The statements in the function `f(1)` are executed and it prints `1` and then this function's memory is popped off, it returns to `f(2)` denoted by the black arrow.
Then, statements in `f(2)` are executed and it prints `2` and the memory is popped. This goes on until the execution of all the functions is done.
