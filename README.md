# ⚡ C Programming Repository

[![Language: C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Compiler: GCC / Clang](https://img.shields.io/badge/Compiler-GCC%20%2F%20Clang-brightgreen?style=for-the-badge)](https://gcc.gnu.org/)
[![Platform: Cross-Platform](https://img.shields.io/badge/Platform-macOS%20%7C%20Linux%20%7C%20Windows-blue?style=for-the-badge)](https://github.com/sagnikkhaze-lgtm)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)](LICENSE)

A curated collection of practical **C programs**, practice exercises, algorithms, interactive games, and data structure implementations. This repository covers fundamental and intermediate C programming concepts including pointers, dynamic memory allocation, file I/O, structures, string manipulation, and math operations.

---

## 📑 Table of Contents

- [Overview](#-overview)
- [Repository Index](#-repository-index)
- [Programs Deep Dive](#-programs-deep-dive)
  - [🎮 Interactive Games & Simulations](#-interactive-games--simulations)
  - [🧮 Calculators & Mathematical Utilities](#-calculators--mathematical-utilities)
  - [📦 Data Structures, Enums & Custom Types](#-data-structures-enums--custom-types)
  - [💾 Memory Management & File I/O](#-memory-management--file-io)
  - [🔍 Utilities & Format Specifiers](#-utilities--format-specifiers)
- [How to Compile and Run](#-how-to-compile-and-run)
- [Core Concepts Covered](#-core-concepts-covered)
- [Author](#-author)

---

## 🚀 Overview

This repository is organized to serve as both a personal code archive and a quick-reference guide for key C programming techniques. Each program is self-contained, easily compilable with standard compilers (`clang` or `gcc`), and demonstrates focused programming patterns.

---

## 📂 Repository Index

| Category | File Name | Key Concepts | Description |
| :--- | :--- | :--- | :--- |
| **Games** | [`guess_game.c`](guess_game.c) | `arrays`, `getchar()`, `toupper()`, loops | 5-question multiple-choice trivia quiz with input buffer clearing and scoring. |
| **Games** | [`random_funct.c`](random_funct.c) | `rand()`, `srand()`, `time.h`, `while` | Number guessing game (50–100) with proximity hints ("close", "too high/low"). |
| **Games** | [`madlibs.c`](madlibs.c) | `fgets()`, `string.h`, newline stripping | Interactive Mad Libs word story generator with safe string handling. |
| **Math** | [`calculator.c`](calculator.c) | `while`, `switch`, state persistence | Continuous CLI calculator supporting multi-step chained operations and division-by-zero checks. |
| **Math** | [`math_functions.c`](math_functions.c) | `math.h`, `sqrt()`, `pow()`, `round()` | Comprehensive demonstration of C standard library math functions. |
| **Math** | [`difference.c`](difference.c) | Ternary operator `?:`, arithmetic | Computes the non-negative absolute difference between two user inputs. |
| **Math** | [`product.c`](product.c) | Standard I/O, multiplication | Simple integer multiplication and result formatting. |
| **Math** | [`program2.c`](program2.c) | Standard I/O, `scanf`, `printf` | Two-number product calculator demonstrating integer multiplication. |
| **Data Structures** | [`struct_try.c`](struct_try.c) | `struct`, `typedef`, `strcpy`, memory | Student record data structure with member initialization and string modification. |
| **Data Structures** | [`struct_cars.c`](struct_cars.c) | `typedef struct`, custom types | Vehicle data model definition representing model, year, and price. |
| **Data Structures** | [`enums.c`](enums.c) | `typedef enum`, constants | Rock-Paper-Scissors enumeration type mapping named constants to integers. |
| **Memory & I/O** | [`mallocfunct.c`](mallocfunct.c) | `malloc()`, `free()`, pointer hygiene | Dynamic array allocation on the heap, null checking, and memory release. |
| **Memory & I/O** | [`file_functions.c`](file_functions.c) | `fopen()`, `fprintf()`, `fgets()`, `system()` | Writes formatted data to disk (`kasam.txt`), reads it back via buffer, and runs shell commands. |
| **Utilities** | [`shoppingcart.c`](shoppingcart.c) | `fgets()`, formatted floats | Shopping cart billing tool calculating item cost, quantity, and total price. |
| **Utilities** | [`prog2.c`](prog2.c) | `%x` format specifier, two's complement | Hexadecimal representation of signed negative integers. |
| **Utilities** | [`question_solving.c`](question_solving.c) | Hexadecimal I/O, bitwise representation | Demonstrates hexadecimal format specifiers and integer bit patterns. |

---

## 🔍 Programs Deep Dive

### 🎮 Interactive Games & Simulations

#### 1. Trivia Quiz Game (`guess_game.c`)
- **Concepts**: Multi-dimensional string arrays, character parsing, input buffer flushing.
- **Highlights**: Features a dedicated buffer-clearing loop `while ((temp = getchar()) != '\n' && temp != EOF)` to avoid newline carryover during `scanf("%c")`, plus case-insensitive evaluation using `toupper()`.
- **Compile & Run**:
  ```bash
  clang guess_game.c -o guess_game && ./guess_game
  ```

#### 2. Number Guessing Game (`random_funct.c`)
- **Concepts**: Random number generation with `rand()`, time-based seeding with `srand(time(NULL))`, proximity calculations.
- **Highlights**: Generates a random number in the range `[50, 100]` and provides feedback on whether the user's guess is too high, too low, or within 10 units of the target.
- **Compile & Run**:
  ```bash
  clang random_funct.c -o random_funct && ./random_funct
  ```

#### 3. Mad Libs Story Generator (`madlibs.c`)
- **Concepts**: String input with `fgets()`, newline trimming with `adj1[strlen(adj1) - 1] = '\0'`, string formatting.
- **Highlights**: Prompts the user for adjectives, verbs, and nouns, sanitizes the trailing newlines, and weaves them into a customized narrative.
- **Compile & Run**:
  ```bash
  clang madlibs.c -o madlibs && ./madlibs
  ```

---

### 🧮 Calculators & Mathematical Utilities

#### 4. Continuous CLI Calculator (`calculator.c`)
- **Concepts**: Stateful loops, boolean flags, conditional flow, division-by-zero protection.
- **Highlights**: Operates like a real calculator by taking two initial operands on the first run, and chaining subsequent operations using the accumulated total (`b = t`).
- **Compile & Run**:
  ```bash
  clang calculator.c -o calculator && ./calculator
  ```

#### 5. Math Functions Showcase (`math_functions.c`)
- **Concepts**: `<math.h>` integration, floating-point arithmetic.
- **Highlights**: Applies multiple operations to a single input: `sqrt()`, `pow()`, `fabs()`, `floor()`, `ceil()`, and `round()`.
- **Compile & Run**:
  ```bash
  clang math_functions.c -o math_functions -lm && ./math_functions
  ```

#### 6. Absolute Difference (`difference.c`)
- **Concepts**: Ternary operator `(condition ? expr1 : expr2)`, concise conditional logic.
- **Highlights**: Computes `|a - b|` without needing conditional branches or external libraries.
- **Compile & Run**:
  ```bash
  clang difference.c -o difference && ./difference
  ```

---

### 📦 Data Structures, Enums & Custom Types

#### 7. Student Records & Structs (`struct_try.c`)
- **Concepts**: `struct` definition, `typedef`, structure initialization, string assignment with `strcpy()`.
- **Highlights**: Demonstrates creating custom records containing multiple types (`char[]`, `int`, `float`, `bool`) and zero-initializing structures (`student s3 = {0};`).
- **Compile & Run**:
  ```bash
  clang struct_try.c -o struct_try && ./struct_try
  ```

#### 8. Enumerations (`enums.c`)
- **Concepts**: `enum` declaration, `typedef enum`, integer constant mapping.
- **Highlights**: Creates a `pick` enumeration (`ROCK = 0`, `PAPER = 1`, `SCISSORS = 2`) to make code self-documenting.
- **Compile & Run**:
  ```bash
  clang enums.c -o enums && ./enums
  ```

---

### 💾 Memory Management & File I/O

#### 9. Dynamic Heap Allocation (`mallocfunct.c`)
- **Concepts**: Heap memory allocation with `malloc()`, `sizeof` operator, dynamic sizing, memory deallocation with `free()`, dangling pointer prevention.
- **Highlights**: Dynamically sizes an array based on runtime user input, validates memory availability (`if (grade == NULL)`), and safely sets pointer to `NULL` after freeing.
- **Compile & Run**:
  ```bash
  clang mallocfunct.c -o mallocfunct && ./mallocfunct
  ```

#### 10. File Writing and Reading (`file_functions.c`)
- **Concepts**: `FILE` pointers, `fopen()` modes (`"w"`, `"r"`), `fprintf()`, `fgets()`, `fclose()`, `system()`.
- **Highlights**: Writes text records to an external file (`kasam.txt`), closes the handle, reopens it in read mode, and streams the file contents back into stdout using a memory buffer.
- **Compile & Run**:
  ```bash
  clang file_functions.c -o file_functions && ./file_functions
  ```

---

### 🔍 Utilities & Format Specifiers

#### 11. Shopping Cart Calculator (`shoppingcart.c`)
- **Concepts**: Reading mixed inputs (`fgets` + `scanf`), floating-point currency formatting.
- **Highlights**: Calculates receipt totals from item description, unit price, and quantity.
- **Compile & Run**:
  ```bash
  clang shoppingcart.c -o shoppingcart && ./shoppingcart
  ```

#### 12. Hexadecimal Format Specifiers (`prog2.c` & `question_solving.c`)
- **Concepts**: Signed integer storage, hexadecimal representation (`%x`), two's complement bit patterns.
- **Highlights**: Explores how negative integers like `-9` are formatted in hexadecimal (`0xfffffff7`).
- **Compile & Run**:
  ```bash
  clang prog2.c -o prog2 && ./prog2
  ```

---

## 🛠 How to Compile and Run

### Single File Compilation
You can compile any C program using either `clang` (default on macOS) or `gcc` (Linux / MinGW):

```bash
# Using Clang
clang -Wall -Wextra program_name.c -o program_name
./program_name

# Using GCC (with math library if required)
gcc -Wall -Wextra program_name.c -o program_name -lm
./program_name
```

### Batch Syntax / Compile Check
To verify that all C programs in this directory compile cleanly:

```bash
for file in *.c; do
  echo "Compiling $file..."
  clang -fsyntax-only -Wall -Wextra "$file"
done
```

---

## 🧠 Core Concepts Covered

```
C Programming Concepts
├── Control Flow
│   ├── while, for loops
│   ├── switch / case statements
│   └── Ternary operator (?:)
├── Memory & Pointers
│   ├── Dynamic allocation (malloc)
│   ├── Memory cleanup (free)
│   └── Pointer hygiene (NULL assignment)
├── Data Types & Structures
│   ├── Structs (typedef struct)
│   └── Enums (typedef enum)
├── File Handling & I/O
│   ├── Safe string input (fgets)
│   ├── Buffer management (getchar loop)
│   └── File streaming (fopen, fprintf, fgets, fclose)
└── Standard Libraries
    ├── <stdio.h>
    ├── <stdlib.h>
    ├── <string.h>
    ├── <math.h>
    ├── <time.h>
    ├── <ctype.h>
    └── <stdbool.h>
```

---

## 👤 Author

- **Sagnik Nag** ([@sagnikkhaze-lgtm](https://github.com/sagnikkhaze-lgtm))
- College: *St. Xavier's College, Kolkata*

---

## 📄 License

This repository is licensed under the [MIT License](LICENSE). Feel free to use, modify, and learn from this code.
