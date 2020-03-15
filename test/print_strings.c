#include "holberton.h"


void printString(char *s)
{
  while(*s) {
     putchar(*s);
     s++;
  }
}