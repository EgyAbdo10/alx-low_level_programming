#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
unsigned int binary_to_uint(const char *b);
int _log(int base, int num);
int power(int num, int exp);
void print_binary(unsigned long int n);
int _putchar(char c);
#endif