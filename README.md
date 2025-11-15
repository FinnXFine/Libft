# Libft

A custom C library developed as part of the **42 Network** curriculum.
This project re-implements essential standard library functions and introduces useful data structures and utilities that serve as a foundation for future 42 projects.

---

## 📌 Table of Contents

* [About the Project](#about-the-project)
* [Features](#features)
* [Project Structure](#project-structure)
* [Compilation](#compilation)
* [Usage](#usage)
* [Bonus Part](#bonus-part)
* [Testing](#testing)
* [Author](#author)

---

## 📖 About the Project

**Libft** is your first step in the 42 journey. The goal is to code your own library from scratch, understanding low-level manipulation, memory handling, and data structures.

Everything is written in **pure C**, following strict coding standards and designed for reusability.

---

## ✨ Features

### Mandatory Functions

* Character checks and transformations (`ft_isalpha`, `ft_tolower`, ...)
* String manipulation (`ft_strlen`, `ft_strjoin`, `ft_split`, ...)
* Memory handling (`ft_memset`, `ft_memcpy`, `ft_calloc`, ...)
* Conversions (`ft_atoi`, ...)
* File descriptor utilities (`ft_putchar_fd`, `ft_putstr_fd`, ...)

### Bonus Functions

* **Linked list** utilities:

  * Create nodes
  * Add to front/back
  * Delete nodes
  * Iterate and map lists

---

## 📁 Project Structure

```
|-- libft/
|   |-- src/
|   |   |-- ctype/*.c
|   |   |-- string/*.c
|   |   |-- memory/*.c
|   |   |-- list/*.c (bonus)
|   |
|   |-- includes/
|   |   |-- libft.h
|   |
|   |-- Makefile
```

---

## 🛠️ Compilation

To compile the library:

```
make
```

To compile the bonus part:

```
make bonus
```

To clean object files:

```
make clean
```

To clean everything:

```
make fclean
```

To recompile from scratch:

```
make re
```

This will generate `libft.a` which you can link in other projects.

---

## ▶️ Usage

To use **libft** in another project:

```c
#include "libft.h"
```

And in your compilation command:

```
gcc main.c -L. -lft
```

Make sure `libft.a` is present in your directory.

---

## 🎯 Bonus Part

The bonus part adds support for **linked lists (`t_list`)**.
Includes:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

---

## 🧪 Testing

You can use:

* **Tripouille’s tester**
* **Francinette**
* **libft-unit-test**

Clone tester:

```
git clone https://github.com/Tripouille/libftTester.git
cd libftTester
make && ./libftTester
```

---

## 👤 Author

**Redouane Hssayn (Finn)**
Student at **1337 - 42 Network**

If you like the project, feel free to ⭐ it on GitHub!
