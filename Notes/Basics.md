# 🔵 Structure
Just like C, C++ has a base structure for every code to work (at least at the start). Here are some important bits:

1. `#include <iostream>`: This includes the standard C++ library for Input Output stream. 
2. `std::cout`: `std` refers to the standard C++ library - this piece of code utilizes the standard output to show some string - usually the terminal. 
3. `using namespace std`: Brings all names from the standard library (std) namespace into the current scope. 
	- This makes so is not required to used `std::` to call std functions
	- This may also cause conflicts with other libraries that use the same function names
	- It works just like python's `import ... *`

## 🔷 Compiling and Executing

#### Compile
To compile a code in C++ use
```bash
g++ file.cpp -o output_file_name.out
```
Every time you change your code you'll need to recompile it.
#### Run
Once your code is compiled, you may run it using (bash)
```bash
./output_file_name.out
```

## 🔷 Constant Variables
In `C++` we do have a type that is constant. The use of this type is highly advisable for two reasons:
1. **Improve readability**: Its easier to read your code if you know what is supposed to be constant and what's not.
	- in this sense, it also improves your work with team mates, it works just like a *promise* of "this is not supposed to change". 
2. **Maintainability**: `Const` (like other keywords) are very useful to make your code cleaner and easier to maintain, after all you're not going to remember all of your code forever. 

It is indeed possible to **bypass** a `const` variable and change its value, even though it's not advisable.

**NAMING**: By convention, constant variables are written all in capital letters

### 🔹 `Mutable`
That is another keyword. Entities that are declared mutable are allowed to be changed by `const` methods.

### 🔹 Pointers
The `const` keyword can affect pointers in two different ways

#### 1. Before the `*`:
If you use `const` before in `*` in the pointer declaration it'll make so the content of the pointer cannot be changed.
```c++
// memory alloc
const int* ptr = new int;

// raises error
*ptr = 2;

cout << *ptr;
```

#### 2. After the `*`: 
It makes so the pointer can only point to same memory space, you can change the pointers content but not where it points to.
```c++
int a = 2;

// memory alloc
int* const ptr = new int;

// raises error
*ptr = (int*)&a;

cout << *ptr;
```


## 🔷 Real Numbers
Real numbers (floating point numbers) in C++ aren't very different from other languages, this said, let's talk about some important aspects:

#### 1. Operations with mixed variables
An operation with only integers will exclusively return a integer.
- For example, a division of only integers value is, by definition, a integer division

To solve this "problem" you just need to make one of the operation's elements a real number (you may even multiply by 1.0).


#### 2. Printing decimal places
We can set the precision of a `cout` output with 
```c++
cout.precision(number)
```
this will make so every floating point number is printed in scientific notation with that number of elements

**OBS**: If you want to specify only the number of decimal places, you must also use
```c++
cout << fixe1d;
```
before the `cout` you want it to affect.


# 🔵 Good Practices

### 🔹 If statements
In long conditions or in long chained if statements its usually a good practice to **improve readability**, to put the condition out of the if statement and use a `boolean` variable instead, for example:

```c++
bool maior = a > b

if (maior){cout << "maior";}
else {cout << "menor";}
```


