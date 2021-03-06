# **_Static and Dynamic memory allocation_**
----
## Memory allocation

π  Memory allocation is the process by which computer programs are asssigned with memory space.

π  It is done either before or at the time of the execution of the program.

----
## Static memory allocation

π   Static memory allocation is the aloocation of memory at compile time, before the program is executed.

π   The address can be found using the `address of` operator and can be assigned to a pointer.

π   The variables get allocated permanently, till the program executes or function call finishes.

π   It uses stack.

π   We cannot re-use the memory.

π   Once allocated, the memory size cannot be changed.

## Dynamic memory allocation

π  Dynamic memory allocation is the process of assigning the memory during the run time or the execution time.

π  The memory space is allocated by using the `calloc()` and `malloc()` functions when the value is returned by functions and assigned to pointers.

π  Variables get allocated only if the program unit gets active.

π  It uses heaps.

π  We can re-use the memory and can be freed when not required.

π  When the memory is allocated, the memory size can be changed.

π  While allocating memory on heap we need to delete the memory manually as memory is not freed(deallocated) by the compiler itself even if the scope of allocated memory finishes

### Why do we need another allocation method when the static memory allocation does what is required?
 
π  Not being able to allocate memory during run time prevents flexibility and compromises with space efficiency. 

π  Specially, those cases where the input isnβt known beforehand, we suffer in terms of inefficient storage use and lack or excess of slots to enter data

π  At this time, dynamic memory allocation comes into picture as it allocates the memory during the run time which enables us to use as much storage as we want, without worrying about any wastage.
 
π  [Source 1](https://www.geeksforgeeks.org/what-is-dynamic-memory-allocation/)

π  [Source 2](https://www.geeksforgeeks.org/difference-between-static-and-dynamic-memory-allocation-in-c/)

π  [Source 3](https://en.wikipedia.org/wiki/Static_variable#:~:text=In%20general%2C%20static%20memory%20allocation,as%20required%20at%20run%20time.)
