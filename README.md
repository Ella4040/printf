# Printf Team Project

As widely acknowledged, cooperation holds great significance in education, technology, and personal life. Despite our awareness of its importance, it is often tempting to prioritize our individual productivity over actively involving our partner.

With the intention of ensuring our responsibility and active involvement, this group project will emphasize a significant requirement for equal contribution.

## Table of Contents

- [Team Members](#team-members)
- [Project Duration](#project-duration)
- [Project Description](#project-description)
- [Resources](#resources)
- [Compilation](#compilation)
- [Tasks Details](#tasks-details)

## Team members :
    Khaoula Nakkach and Dossou Sourou Ella Dossou

**Cohort** : 15 SE ALX program

**Project Duration:**
- Start date : 23 June 2023
- End date : 28 June 2023

## Project description :

We'll start first by explaining printf function in C language, it's a function from the C standard library "stdio.h" and it can allow formatting the output in numerous ways thanks to the format specifiers :

    - %d : for printing integers
    - %f : for printing floating-point numbers
    - %c : for printing characters
    - %s : for printing strings
    - %p : for printing memory addresses
    - %x : for printing hexadecimal values

Our objective for this project is to establish a GitHub repository named "_ printf" and systematically complete all the assigned tasks in accordance with the specified requirements. The primary aim is to develop a function that closely resembles the printf function, enabling it to perform similar tasks. To ensure accuracy and reliability, we will incorporate various tests to cover possible cases and subsequently upload them to our project repository under the folder "test".


## Resources

- [Secrets of printf](https://www.academia.edu/10297206/Secrets_of_printf_)
- [GeeksforGeeks - printf in C](https://www.geeksforgeeks.org/printf-in-c/)

## Compilation

Our code is compiled this way :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
## Tasks details:

This project consists of several tasks that need to be completed (2 mondatory tasks and 14 advanced tasks). The tasks are as follows:

### Task 0

**Description:** I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life.

**Requirements:**
- Implement a function that produces output according to a format.
- Prototype: `int _printf(const char *format, ...)`.
- Handle the following conversion specifiers: `%c`, `%s`, `%%`.

### Task 1

**Description:** Education is when you read the fine print. Experience is what you get if you don't.

**Requirements:**
- Handle the following conversion specifiers: `%d`, `%i`.

### Task 2

**Description:** With a face like mine, I do better in print.

**Requirements:**
- Handle the following conversion specifier: `%b` (the unsigned int argument is converted to binary).

### Task 3

**Description:** What one has not experienced, one will never understand in print.

**Requirements:**
- Handle the following conversion specifiers: `%u`, `%o`, `%x`, `%X`.

### Task 4

**Description:** Nothing in fine print is ever good news.

**Requirements:**
- Use a local buffer of 1024 characters to minimize calls to `write`.

### Task 5

**Description:** My weakness is wearing too much leopard print.

**Requirements:**
- Handle the following conversion specifier: `%S` (print non-printable characters).

### Task 6

**Description:** How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print.

**Requirements:**
- Handle the following conversion specifier: `%p` (print memory addresses).

### Task 7

**Description:** The big print gives and the small print takes away.

**Requirements:**
- Handle the following flag characters for non-custom conversion specifiers: `+`, `(space)`, `#`.

### Task 8

**Description:** Sarcasm is lost in print.

**Requirements:**
- Handle the following length modifiers for non-custom conversion specifiers: `l`, `h`
- Conversion specifiers to handle: `d`, `i`, `u`, `o`, `x`, `X`

### Task 9

**Description:** Print some money and give it to us for the rain forests.

**Requirements:**
- Handle the field width for non-custom conversion specifiers

### Task 10

**Description:** The negative is the equivalent of the composer's score, and the print the performance.

**Requirements:**
- Handle the precision for non-custom conversion specifiers

### Task 11

**Description:** It's depressing when you're still around and your albums are out of print.

**Requirements:**
- Handle the `0` flag character for non-custom conversion specifiers

### Task 12

**Description:** Every time that I wanted to give up, if I saw an interesting textile, print whatever, suddenly I would see a collection.

**Requirements:**
- Handle the `-` flag character for non-custom conversion specifiers

### Task 13

**Description:** Print is the sharpest and the strongest weapon of our party.

**Requirements:**
- Handle the following custom conversion specifier: `%r` (prints the reversed string)

### Task 14

**Description:** The flood of print has turned reading into a process of gulping rather than savoring.

**Requirements:**
- Handle the following custom conversion specifier: `%R` (prints the rot13'ed string)

### Task 15

**Description:** *

**Requirements:**
- Everything above work together
