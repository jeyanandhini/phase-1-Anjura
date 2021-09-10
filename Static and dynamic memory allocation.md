# **_Static and Dynamic memory allocation_**
----
## Memory allocation

👉  Memory allocation is the process by which computer programs are asssigned with memory space.

👉  It is done either before or at the time of the execution of the program.

----
## Static memory allocation

💠  Static memory allocation is the aloocation of memory at compile time, before the program is executed.

💠  The address can be found using the `address of` operator and can be assigned to a pointer.

💠  The variables get allocated permanently, till the program executes or function call finishes.

💠  It uses stack.

💠  We cannot re-use the memory.

💠  Once allocated, the memory size cannot be changed.

## Dynamic memory allocation

🍀  Dynamic memory allocation is the process of assigning the memory during the run time or the execution time.

🍀  The memory space is allocated by using the `calloc()` and `malloc()` functions when the value is returned by functions and assigned to pointers.

🍀  Variables get allocated only if the program unit gets active.

🍀  It uses heaps.

🍀  We can re-use the memory and can be freed when not required.

🍀  When the memory is allocated, the memory size can be changed.

🍀  While allocating memory on heap we need to delete the memory manually as memory is not freed(deallocated) by the compiler itself even if the scope of allocated memory finishes

### Why do we need another allocation method when the static memory allocation does what is required?
 
🍂  Not being able to allocate memory during run time prevents flexibility and compromises with space efficiency. 

🍂  Specially, those cases where the input isn’t known beforehand, we suffer in terms of inefficient storage use and lack or excess of slots to enter data

🍂  At this time, dynamic memory allocation comes into picture as it allocates the memory during the run time which enables us to use as much storage as we want, without worrying about any wastage.
 
