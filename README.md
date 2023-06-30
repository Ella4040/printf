# Printf team project

## Team members :
    Khaoula Nakkach and Dossou Sourou Ella Dossou

Cohort : 15 SE ALX program

- Starting date : 23 June 2023
- Ending date : 28 June 2023

As widely acknowledged, cooperation holds great significance in education, technology, and personal life. Despite our awareness of its importance, it is often tempting to prioritize our individual productivity over actively involving our partner.

With the intention of ensuring our responsibility and active involvement, this group project will emphasize a significant requirement for equal contribution.

## This project description :

We'll start first by explaining printf function in C language, it's a function from the C standard library "stdio.h" and it can allow formatting the output in numerous ways thanks to the format specifiers :

    - %d : for printing integers
    - %f : for printing floating-point numbers
    - %c : for printing characters
    - %s : for printing strings
    - %p : for printing memory addresses
    - %x : for printing hexadecimal values

Our objective for this project is to establish a GitHub repository named "_ printf" and systematically complete all the assigned tasks in accordance with the specified requirements. The primary aim is to develop a function that closely resembles the printf function, enabling it to perform similar tasks. To ensure accuracy and reliability, we will incorporate various tests to cover possible cases and subsequently upload them to our project repository under the folder "test".


Some helpful resources :

    - https://www.academia.edu/10297206/Secrets_of_printf_
    - https://www.geeksforgeeks.org/printf-in-c/

Our code is compiled this way :

{$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c}

The number of tasks :
    - 2 Mondatory tasks
    - 14 advanced tasks

## Tasks details:

*Task 0* : I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life.
    Requirements :
        - a function that produces output according to a format.
        - prototype : int _ printf(const char * format, ...);
        - It has to handle the following conversion specifiers:
            * c
            * s
            * %

---

*Task 1* : Education is when you read the fine print. Experience is what you get if you don't
    Requirements :
        - It has to handle the following conversion specifiers:
            * d
            * i

---

*Task 2* : With a face like mine, I do better in print
    Requirements :
        - It has to handle the following conversion specifiers:
            * b : the unsigned int argument is converted to binary

---

*Task 3* : What one has not experienced, one will never understand in print
    Requirements :
        - It has to handle the following conversion specifiers:
            * u
            * o
            * x
            * X
---


*Task 4* : Nothing in fine print is ever good news
    Requirements :
        - Use a local buffer of 1024 chars in order to call write as little as possible.

---

*Task 5* : My weakness is wearing too much leopard print
    Requirements :
        - It has to handle the following conversion specifiers:
            * S

---

*Task 6* : How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
    Requirements :
        - It has to handle the following conversion specifiers:
            * p

---

*Task 7* : The big print gives and the small print takes away
    Requirements :
        - It has to handle the following flag characters for non-custom conversion specifiers:
            * +
            * (space)
            * #

---

*Task 8* : Sarcasm is lost in print
    Requirements :
        - It has to handle  the following length modifiers for non-custom conversion specifiers:
            * l
            * h
        - Conversion specifiers to handle: d, i, u, o, x, X

---

*Task 9* : Print some money and give it to us for the rain forests
    Requirements :
        - It has to handle the field width for non-custom conversion specifiers.

---

*Task 10* : The negative is the equivalent of the composer's score, and the print the performance
    Requirements :
        - It has to handle the precision for non-custom conversion specifiers.

---

*Task 11* :  It's depressing when you're still around and your albums are out of print
    Requirements :
        - It has to handle the 0 flag character for non-custom conversion specifiers.

---

*Task 12* : Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
    Requirements :
        - It has to handle - flag character for non-custom conversion specifiers.

---

*Task 13* : Print is the sharpest and the strongest weapon of our party
    Requirements :
        - It has to handle  the following custom conversion specifier:
            * r : prints the reversed string

---

*Task 14* : The flood of print has turned reading into a process of gulping rather than savoring
    Requirements :
        - It has to handle the following custom conversion specifier:
            * R: prints the rot13'ed string

---

*Task 15* : *
    Requirements :
        - All the above options work well together.
