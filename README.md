# **PizzaCompiler** 🍕  
*A Custom Compiler Inspired by C Language*

## **Overview**  
PizzaCompiler is a mini-compiler designed to process a custom programming language inspired by the core features of C. Built using **Flex** and **Bison**, it supports lexical analysis, syntax parsing, and basic computation with some unique features. 🍕✨

---

## **Features**  
- **Token Generation**: Custom tokens like `MAINPIZZA`, `CHEESE`, and `LOOPFOR`.  
- **Context-Free Grammar**: Syntax rules to parse and process code.  
- **Built-in Math Operations**: Includes trigonometric, logarithmic, and prime-checking functions.  
- **Simple Control Structures**: Conditional statements, loops, and switch-case equivalents.  

---

## **Getting Started**  
### **Prerequisites**  
- Flex  
- Bison  
- GCC  

### **How to Run**  
1. Compile the code:  
   ```bash
   bison -d filename.y  
   flex filename.l  
   gcc lex.yy.c filename.tab.c -o PizzaCompiler

2. Run the compiler:
   ./PizzaCompiler
3. Write and process code in the custom language!

## **Sample Code**

#include <topping.h>
mainpizza {
  cheese x = 10;
  loopfor (x = 0, x <= 10, x++) {
    print(x);
  }
}

