# Generic Pointers

👉 When a variable is declared as being a pointer to type void, it is known as a generic pointer.

👉 All the pointers; irrespective of the type, require same amount of memory because they all store address. So, why do we need different data types?

### why do we need the different data types?

👉 Because while dereferencing the pointer i.e, while finding the value at the address stored in the pointer,
we need to know the size of memory being pointed to, and that comes from the data types.

### Dereferencing of a generic pointer

👉 Generic pointer cannot be directly dereferenced.

👉 We need to typecast it to relevant data type before dereferencing.

### Why use a generic pointer?

👉 It is useful when we want a pointer to point to data of different types at different times.
