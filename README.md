# C Code with Double Free Potential

This repository contains a C code example demonstrating a potential double free error.  The code allocates memory dynamically, copies data to it, frees the memory, and then attempts to access the freed memory.

## The Bug
The core issue lies in freeing the memory pointed to by `ptr` using `free(ptr)` and then subsequently accessing the elements of the `arr` array in the for loop which may now point to freed memory. This leads to undefined behavior.

## Solution
The solution involves preventing access to the freed memory.  The solution example removes the access to the freed memory.  Always ensure you don't use memory after freeing it.

## How to Run
1. Clone the repository.
2. Compile the code using a C compiler (like GCC):
   ```bash
   gcc bug.c -o bug
   gcc bugSolution.c -o bugSolution
   ```
3. Run the executable:
   ```bash
   ./bug
   ./bugSolution
   ```