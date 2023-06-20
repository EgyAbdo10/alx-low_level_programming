#include "stdio.h"
/**
 * _islower - alpha
 * Return - void
 */
int _islower(int c)
{
    int i;
    for (i = 97; i < 123; i++)
    {
        if (i == c)
        {
            return (1);
        }
    }
    return (0);
}
