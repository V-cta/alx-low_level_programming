#include "main.h"
#include<stdio.h>
/**
 *main - Entry point
 *Description 'adress and size of the memory to print'
 *Return: Always 0 (Success)
 */
 void simple_print_buffer(char *buffer, unsigned int size)
 {
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}
