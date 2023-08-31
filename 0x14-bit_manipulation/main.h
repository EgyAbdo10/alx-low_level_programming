#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
unsigned int binary_to_uint(const char *b);
int get_exp(int num, int exp);
int my_strlen(const char *str);
void print_binary(unsigned long int n);
int get_log(int number, int base);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
#endif
