# Memory allocation

https://en.wikipedia.org/wiki/C_dynamic_memory_allocation
https://www.gnu.org/software/libc/manual/html_node/Memory-Allocation-and-C.html

1. Static memory allocation
2. Automatic memory allocation
3. Dynamic memory allocation

## Static memory allocation

Static allocation is what happens when you declare a static or global variable. Each static or global variable defines one block of space, of a fixed size. The space is allocated once, when your program is started (part of the exec operation), and is never freed.

* Faster allocation execution than dynamic.

## Automatic memory allocation

Automatic allocation happens when you declare an automatic variable, such as a function argument or a local variable. The space for an automatic variable is allocated when the compound statement containing the declaration is entered, and is freed when that compound statement is exited.

## Dynamic memory allocation

Memory is more explicitly (but more flexibly) managed, typically by allocating it from the free store (informally called the "heap").

C dynamic memory allocation functions are defined in stdlib.h header.
* malloc
```c
ptr = (castType*)malloc(byteSize);
```
* realloc
```c
ptr = realloc(ptr, byteSize);
```
* calloc
```c
ptr = (castType*)calloc(n, elementSize);
```
* free
```c
free(ptr);
```

# code
* Dynamic memory allocation for an integer variable
* Dynamic memory allocation for an array
* Static memory allocation for an array
