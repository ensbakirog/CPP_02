# C++ - Module 02

> **Topics:** Ad-hoc Polymorphism, Operator Overloading, Orthodox Canonical Class Form  
> **Standard:** C++98 – Introduction to Object-Oriented Programming

---

## 🧭 Purpose

This module introduces the fundamentals of object-oriented programming in C++. It focuses on **ad-hoc polymorphism**, **operator overloading**, and the **Orthodox Canonical Form (OCF)** of classes. It serves as a foundation for mastering C++ and building clean, maintainable architectures.

---

## 🗂️ Contents

1. [Introduction](#introduction)  
2. [General Rules](#general-rules)  
3. [New Rules](#new-rules)  
4. [ex00 – First Canonical Class](#ex00--first-canonical-class)  
5. [ex01 – Towards a More Useful Fixed-Point Class](#ex01--towards-a-more-useful-fixed-point-class)  
6. [ex02 – Now We’re Talking](#ex02--now-were-talking)  
7. [ex03 – BSP (Binary Space Partitioning)](#ex03--bsp-binary-space-partitioning)  
8. [Submission and Evaluation](#submission-and-evaluation)

---

## Introduction

This module marks your first real step into Object-Oriented Programming using the natural evolution of C: C++. For clarity and consistency, the C++98 standard is used. Mastering these fundamentals is essential before moving on to modern C++ paradigms.

---

## General Rules

- Compiler: `c++`  
- Flags: `-Wall -Wextra -Werror -std=c++98`  
- STL usage is forbidden (allowed only in Modules 08 and 09).  
- Functions like `printf`, `malloc`, `free` are not allowed.  
- All classes must follow the **Orthodox Canonical Form**.  
- No memory leaks should be present.  
- Code readability is strongly encouraged (no enforced coding style).

---

## New Rules

Every class must implement the following:

- Default constructor  
- Copy constructor  
- Copy assignment operator  
- Destructor  

Class code must be split into `.hpp/.cpp` files and use include guards to prevent multiple inclusion.

---

## ex00 – First Canonical Class

Defines a basic `Fixed` class representing a fixed-point number. Implements:

- `getRawBits()` and `setRawBits()`  
- Canonical form: constructor, copy constructor, assignment operator, destructor  

Focuses on memory handling and class structure.

---

## ex01 – Towards a More Useful Fixed-Point Class

Enhances the `Fixed` class with:

- Constructors from `int` and `float`  
- Conversion methods: `toFloat()`, `toInt()`  
- Overload of the stream insertion operator (`<<`)  

Enables meaningful value representation and conversion.

---

## ex02 – Now We’re Talking

Extends the class with:

- Comparison operators: `>`, `<`, `>=`, `<=`, `==`, `!=`  
- Arithmetic operators: `+`, `-`, `*`, `/`  
- Increment/decrement operators (prefix and postfix)  
- Static `min()` / `max()` functions  

At this point, your fixed-point class behaves like a fully-featured numeric type.

---

## ex03 – BSP (Binary Space Partitioning)

Optional geometry exercise:

- A `Point` class (immutable `Fixed` x and y values)
- `bsp()` function to determine if a point lies inside a triangle

This is a practical introduction to 2D geometry and computational space partitioning.

---

## Submission and Evaluation

- Project directories: `ex00/`, `ex01/`, `ex02/`, `ex03/`  
- Required files: `Makefile`, `main.cpp`, class definition/implementation files  
- Each exercise must be independently compilable.  
- You are encouraged to write your own tests.  
- Evaluation is done directly from your Git repository.

---

## 📌 Notes

- **No STL usage is allowed throughout this module.**  
- Functions should be clearly tested.  
- Division-by-zero crashes are acceptable.  
