0x12. C - Singly linked lists
================

-   By Julien Barbier, co-founder & CEO

Concepts
--------

*For this project, we expect you to look at this concept:*

-   [Group Projects](https://intranet.alxswe.com/concepts/120)

Background Context
------------------

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif)

*^ In this picture, [Kris](https://alx-intranet.hbtn.io/rltoken/pSPZEmqi5O8ZoeLM5-65WA "Kris"), and [Jul](https://alx-intranet.hbtn.io/rltoken/X_vDffLlUpbtqnubfnQx8Q "Jul")*

Resources
---------

**Read or watch**:

-   [Linked Lists](https://intranet.alxswe.com/rltoken/joxg32-tt4lUh8Afgst8tA "Linked Lists")
-   [Google](https://intranet.alxswe.com/rltoken/USaZbNdfcuIFII-K2YPsKQ "Google")
-   [Youtube](https://intranet.alxswe.com/rltoken/epKUCIcoA6XaN1T3Vtr_9w "Youtube")

**Learning Objectives**:

-   `At the end of this project, you are expected to be able to explain to anyone, without the help of Google`
------------

### General

-   When and why using linked lists vs arrays
-   How to build and use linked lists

### Copyright - Plagiarism


-   You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
-   You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
-   You are not allowed to publish any content of this project.
-   Any form of plagiarism is strictly forbidden and will result in removal from the program.

### Requirements

**General**

-   Allowed editors: vi, vim, emacs
-   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-   All your files should end with a new line
-   A README.md file, at the root of the folder of the project is mandatory
-   Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
-   You are allowed to use _putchar
-   You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
-   In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
-   Don’t forget to push your header file
-   All your header files should be include guarded



More Info
---------
**General**

```
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

-   Code writing by Mohamed Lamari @noisefunny
-   [Instagram](https://www.instagram.com/noisefunny/)
