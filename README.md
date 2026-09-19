# C-Lab

> **My C Programming Laboratory.**
> 学习 C，理解计算机如何工作。

[![Language](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_%28programming_language%29)
[![Platform](https://img.shields.io/badge/Platform-Linux%20%7C%20macOS%20%7C%20Windows-lightgrey.svg)](https://github.com/YEXIAONAN/C-Lab)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

---

## 📖 About

**C-Lab** 是我的个人 C 语言学习与实验仓库。

这个项目用于记录从 C 语言基础语法，到指针、内存管理、文件操作，再到数据结构与实际项目开发的完整学习过程。

这里不仅保存最终代码，也会记录学习过程中遇到的问题、实验结果、踩过的坑以及对底层原理的理解。

> 不追求“把代码写出来”，而是尝试理解**代码为什么这样运行**。

---

## 🎯 Goals

* 掌握 C 语言核心语法
* 理解指针、内存与数据结构
* 熟悉 GCC / Clang 编译工具链
* 掌握基本的 Linux / Unix C 开发环境
* 培养良好的代码组织与调试习惯
* 通过实际项目理解 C 语言
* 为后续学习 **操作系统、计算机网络、Linux、系统编程** 打下基础

---

## 🗂️ Repository Structure

```text
C-Lab/
│
├── README.md
├── LICENSE
│
├── 01-basics/
│   ├── hello.c
│   ├── variables.c
│   └── operators.c
│
├── 02-control-flow/
│   ├── if.c
│   ├── switch.c
│   └── loop.c
│
├── 03-functions/
│   ├── functions.c
│   └── recursion.c
│
├── 04-arrays/
│   ├── array.c
│   └── matrix.c
│
├── 05-pointers/
│   ├── pointer.c
│   └── pointer_array.c
│
├── 06-strings/
│   ├── string.c
│   └── string_functions.c
│
├── 07-struct/
│   ├── struct.c
│   └── linked_list.c
│
├── 08-file/
│   ├── file_read.c
│   └── file_write.c
│
├── 09-memory/
│   ├── malloc.c
│   ├── calloc.c
│   └── free.c
│
├── 10-data-structures/
│   ├── stack/
│   ├── queue/
│   └── linked-list/
│
├── exercises/
│   ├── basic/
│   ├── algorithm/
│   └── practice/
│
├── projects/
│   └── ...
│
└── notes/
    ├── pointers.md
    ├── memory.md
    └── debugging.md
```

目录会随着学习进度持续调整。

---

## 🧭 Learning Roadmap

### Phase 1 — C Basics

* [ ] Hello World
* [ ] Variables & Constants
* [ ] Data Types
* [ ] Operators
* [ ] Input / Output
* [ ] Conditional Statements
* [ ] Loops
* [ ] Functions

### Phase 2 — Core C

* [ ] Arrays
* [ ] Strings
* [ ] Pointers
* [ ] Pointer Arithmetic
* [ ] Structures
* [ ] Enumerations
* [ ] Unions
* [ ] Preprocessor

### Phase 3 — Memory & Files

* [ ] Stack & Heap
* [ ] `malloc`
* [ ] `calloc`
* [ ] `realloc`
* [ ] `free`
* [ ] File I/O
* [ ] Binary Files
* [ ] Memory Debugging

### Phase 4 — Data Structures

* [ ] Linked List
* [ ] Stack
* [ ] Queue
* [ ] Hash Table
* [ ] Tree
* [ ] Graph
* [ ] Sorting Algorithms
* [ ] Searching Algorithms

### Phase 5 — System Programming

* [ ] GCC / Clang
* [ ] Makefile
* [ ] Linux C Development
* [ ] POSIX API
* [ ] Processes
* [ ] Threads
* [ ] Inter-Process Communication
* [ ] Socket Programming

### Phase 6 — Projects

通过实际项目检验学习成果。

```text
Learning
   ↓
Practice
   ↓
Experiment
   ↓
Project
   ↓
Review
   ↓
Refactor
```

---

## 🔬 Lab Rules

C-Lab 不只是代码堆放仓库，因此遵循以下原则：

### 1. 代码必须能够运行

提交代码前至少进行一次本地编译和运行测试。

```bash
gcc main.c -o main
./main
```

或：

```bash
clang main.c -o main
./main
```

### 2. 不盲目复制代码

可以使用搜索引擎、官方文档和 AI 辅助学习，但必须理解代码。

> **能运行 ≠ 学会。**

### 3. 记录问题

遇到有价值的问题，尽可能记录到 `notes/`。

例如：

```text
为什么数组名有时候表现得像指针？
为什么 sizeof(pointer) 和 sizeof(array) 不一样？
malloc 分配的内存到底在哪里？
free 之后为什么不能继续使用指针？
```

### 4. 保留实验代码

一些看起来“不规范”的代码也可以保留。

因为：

> **错误本身也是学习过程的一部分。**

---

## 🧪 Compilation

推荐使用 GCC 或 Clang。

### GCC

```bash
gcc main.c -o main
./main
```

### Clang

```bash
clang main.c -o main
./main
```

### 开启警告

推荐学习阶段使用：

```bash
gcc -Wall -Wextra -Wpedantic main.c -o main
```

通过编译器主动发现问题，而不是等程序崩溃之后再找原因。

---

## 🔧 Development Environment

主要开发环境：

* macOS
* Linux
* Windows

主要工具：

* GCC
* Clang
* Git
* GitHub
* VS Code / Vim
* GDB

---

## 📚 Learning Resources

学习过程中优先参考：

* C Language Standard
* GCC Documentation
* Clang Documentation
* Linux Man Pages
* 官方技术文档
* 可靠的技术书籍与课程

AI 可以用于：

* 解释概念
* 分析报错
* 辅助 Debug
* 生成练习题
* 检查代码设计

但不把 AI 生成的代码直接当成自己的知识。

---

## 🔄 Git Workflow

每完成一个具有独立意义的功能或实验，就进行一次提交。

推荐：

```bash
git add .
git commit -m "feat: add pointer basic examples"
git push
```

Commit 示例：

```text
feat: add array exercises
feat: add pointer examples
fix: fix string input bug
docs: update pointer notes
refactor: improve linked list implementation
```

---

## 💡 Philosophy

> **计算，为了无法计算的时间。**

学习 C 语言并不是为了记住多少个关键字。

真正重要的是逐渐理解：

```text
Source Code
     ↓
Compiler
     ↓
Assembly
     ↓
Machine Code
     ↓
Memory
     ↓
CPU
     ↓
Operating System
     ↓
Computer
```

当开始理解这些东西之间是如何连接起来的时候，C 语言才真正开始变得有意思。

---

## 👤 Author

**Waiting**

GitHub: [YEXIAONAN](https://github.com/YEXIAONAN)

---

## 📄 License

This project is licensed under the MIT License.
