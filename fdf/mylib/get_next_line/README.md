# Introduction

This projects is about creating a function that, allows to read a line ending with a newline character ('\n') from a file descriptor, without knowing its size beforehand. One of the goal of this project is to learn a highly interesting new concept in C programming: static variables, and to gain a deeper understanding of allocations, whether they happen on the stack memory or in the heap memory, the manipulation and the life cycle of a buffer, the unexpected complexity implied in the use of one or many static variables.

# Mandatory

Calling the function get_next_line in a loop will then allow the user to read the text available on the file descriptor one line at a time until the end of it. It has to behave well both on external files and standard input. The function should return the line that has just been read. If there is nothing else to read or if an error has occurred it should return NULL. The mandatory part must deal with at least one file descriptor at a time, and can have more than one static variable.
