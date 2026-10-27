# Assignment 10: Implementation of Class Template and Function Template in C++

## About the Program

This C++ program demonstrates **templates** (generic programming). A template is a blueprint that lets us write code once and use it with many data types. The letter `T` is a placeholder for the data type, and the compiler replaces it with `int`, `float`, `char`, etc. when the code is used.

| Type | Name in the code | What it does |
|---|---|---|
| Function Template | `maxOf(T a, T b)` | Returns the bigger of two values |
| Function Template | `swapValues(T &a, T &b)` | Swaps two values |
| Class Template | `Calculator<T>` | Finds the sum and product of two values |

## Program Flow

1. **Function Template `maxOf`:** Called with `int`, `float` and `char` values. The compiler automatically creates a separate version for each type.
2. **Function Template `swapValues`:** Swaps the two integers `x` and `y` and shows them before and after the swap.
3. **Class Template `Calculator`:** `Calculator<int>` is used for the integers and `Calculator<float>` is used for the decimal numbers. Each shows its sum and product.

## Function Template vs Class Template

| Point | Function template | Class template |
|---|---|---|
| Used for | A generic function | A generic class |
| Type is decided | Automatically from the arguments | By the programmer, inside `< >` |
| Call / object | `maxOf(10, 20)` | `Calculator<int> c1(10, 20);` |

## Files

| File | Description |
|---|---|
| `assi10.cpp` | C++ source code |
| `README.md` | Project description |

## How to Compile and Run

Requirement: a C++ compiler (g++) or Visual Studio Code with a C++ setup.

```bash
g++ assi10.cpp -o assi10
./assi10
```

On Windows PowerShell use `.\assi10` to run.

## Sample Input and Output

**Input:**

```
10 20
1.5 2.5
```

**Output:**

```
Enter two integers: Enter two decimal numbers: 
--- 1. Function Template : maxOf ---
Bigger int   = 20
Bigger float = 2.5
Bigger char  = z

--- 2. Function Template : swapValues ---
Before swap: x = 10, y = 20
After swap : x = 20, y = 10

--- 3. Class Template : Calculator ---
Int Calculator   -> Sum = 30, Product = 200
Float Calculator -> Sum = 4, Product = 3.75
```

## Test Cases

| Test Case | Input | Expected Result |
|---|---|---|
| 1 | `10 20` and `1.5 2.5` | Bigger int 20, float 2.5, char z; swap gives x = 20, y = 10; Int sum 30, product 200; Float sum 4, product 3.75 |
| 2 | `7 3` and `2.5 4` | Bigger int 7, float 4, char z; swap gives x = 3, y = 7; Int sum 10, product 21; Float sum 6.5, product 10 |

## Important Points

- In a function template, both arguments must be of the same type because both use `T`.
- For a class template, the data type must be written inside `< >` when the object is created.
- The operators used inside a template (like `>`, `+` and `*`) must be supported by the data type used.
- Templates reduce code repetition, because the logic is written only once.

## Learning Outcomes

- Write a function template using `template <class T>`.
- Call the same function template with `int`, `float` and `char` values.
- Write a class template and create objects like `Calculator<int>` and `Calculator<float>`.
- Explain the benefits of templates over writing many overloaded functions.

## Repository Details

- **Repository:** https://github.com/YOUR_USERNAME/Assignment10
- **Branch:** main
