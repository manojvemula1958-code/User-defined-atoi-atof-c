# User-defined-atoi-atof-c
Implementation of user defined atoi and atof function
# Custom atoi() and atof() in C

## Objective

This project implements user-defined versions of the standard
atoi() and atof() functions without using the built-in conversion
functions.

## Features

- Converts numeric strings to integers
- Converts numeric strings to floating-point values
- Handles positive and negative signs
- Handles leading spaces and tabs
- Stops conversion when an invalid character is encountered
- Handles decimal numbers

## Functions

### my_atoi()

Converts a numeric string into an integer.

### my_atof()

Converts a numeric string into a floating-point value.

## Test Cases

| Input | Function | Expected Output |
|------|----------|----------------|
| 123 | my_atoi() | 123 |
| -123 | my_atoi() | -123 |
| +123 | my_atoi() | 123 |
| 0 | my_atoi() | 0 |
| 123.45 | my_atof() | 123.45 |
| -45.67 | my_atof() | -45.67 |
| 123abc | my_atoi() | 123 |

## Technologies

- C Programming
- Pointers
- Strings
- Functions

## Conclusion

The project demonstrates the implementation of string-to-number
conversion using C programming without using the standard atoi()
and atof() functions.
