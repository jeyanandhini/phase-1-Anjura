# **_Relevance of zero-indexing_**

* Arrays are designed initiating at 0 as the natural position to start accessing the array contents.
* The name given to an array is essentially a pionter, referencing to a meomory location. This means the index is an offset.
* The expression `array[n]` refers to a memory location n-elements away from the starting element
* Then `array[0]` denotes that the first element of the array is exactly contained in the memory location that array refers (0 elements away).
* So, 0-based index allows `array[index]` to be implemented as `*(array + index)`.
* If index were 1-based, compiler would need to generate `*(array + index - 1)`, and this "-1" would hurt the performance.
* Rather than subtracting 1, you should use the address of the array-1 as the base address. That eliminates the runtime subtraction.
* So, extra instructions are not needed.

[Source](https://developerinsider.co/why-does-the-indexing-of-array-start-with-zero-in-c/)

