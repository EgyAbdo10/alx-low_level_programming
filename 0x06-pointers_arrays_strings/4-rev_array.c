#include "main.h"
void reverse_array(int *a, int n)
{
int holder;
int i = 0;
int len = n;
n -= 1;
while (i < (len / 2))
{
holder = a[i];
a[i] = a[n];
a[n] = holder;
i++;
n--;
}
}
