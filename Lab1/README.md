# C Compilation Pipeline – Lab Report


---

# Objective

- To understand the different stages involved in the compilation of a C program.
- To analyze how source code is transformed into an executable file.
- To learn the role of preprocessing, compilation, assembly, and linking in the C compilation process.
- To use GCC commands for observing intermediate compilation outputs.

---

# Introduction

The C Compilation Pipeline is the sequence of steps through which a C source program is converted into an executable machine-level program. A compiler does not directly convert source code into executable code in a single step. Instead, the process is divided into multiple stages for efficiency and modularity.

The GNU Compiler Collection (GCC) is commonly used in Linux and VS Code environments to compile C programs. Understanding the compilation pipeline helps programmers debug errors, optimize programs, and understand low-level execution.

---

# Theory

The C compilation process consists of four major stages:

## 1. Preprocessing

The preprocessor handles all preprocessor directives such as:

- `#include`
- `#define`
- `#ifdef`

It removes comments and expands macros before passing the code to the compiler.

### Command

```bash
gcc -E program.c -o program.i
```

### Output

A preprocessed file with `.i` extension.

---

## 2. Compilation

In this stage, the compiler converts the preprocessed C code into assembly language.

The compiler checks:

- Syntax errors
- Semantic errors
- Type checking

### Command

```bash
gcc -S program.i -o program.s
```

### Output

Assembly language file with `.s` extension.

---

## 3. Assembly

The assembler converts assembly code into machine-level object code.

### Command

```bash
gcc -c program.s -o program.o
```

### Output

Object file with `.o` extension.

---

## 4. Linking

The linker combines object files and required libraries to generate the final executable file.

### Command

```bash
gcc program.o -o program
```

### Output

Executable file.

---

# Compilation Pipeline Diagram

```text
Source Code (.c)
       │
       ▼
Preprocessor
       │
       ▼
Preprocessed File (.i)
       │
       ▼
Compiler
       │
       ▼
Assembly Code (.s)
       │
       ▼
Assembler
       │
       ▼
Object File (.o)
       │
       ▼
Linker
       │
       ▼
Executable File
```

---

# Algorithm / Procedure

1. Write a C program in VS Code.
2. Save the file with `.c` extension.
3. Open the terminal in VS Code.
4. Execute preprocessing using GCC.
5. Compile the preprocessed file into assembly code.
6. Assemble the assembly code into an object file.
7. Link the object file to generate the executable.
8. Run the executable file and observe the output.

---

# Sample Program

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

---

# Commands Used

## Preprocessing

```bash
gcc -E hello.c -o hello.i
```

## Compilation

```bash
gcc -S hello.i -o hello.s
```

## Assembly

```bash
gcc -c hello.s -o hello.o
```

## Linking

```bash
gcc hello.o -o hello
```

## Execution

```bash
./hello
```

---

# Observation

| Stage | Input File | Output File | Purpose |
|-------|------------|-------------|----------|
| Preprocessing | `.c` | `.i` | Expands macros and headers |
| Compilation | `.i` | `.s` | Converts code to assembly |
| Assembly | `.s` | `.o` | Produces machine object code |
| Linking | `.o` | Executable | Creates runnable program |

---

# Result

The C program was successfully compiled through all stages of the compilation pipeline using GCC in VS Code, and the executable program produced the expected output.

---

# Advantages of Compilation Pipeline

- Improves modularity of compilation.
- Makes debugging easier.
- Enables code optimization.
- Supports reusable object files and libraries.

---

# Conclusion

The experiment successfully demonstrated the complete C Compilation Pipeline using GCC. The stages of preprocessing, compilation, assembly, and linking were studied in detail. Understanding these stages helps programmers gain deeper knowledge of how high-level C code is transformed into executable machine code.

---
