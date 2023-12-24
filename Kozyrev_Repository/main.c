/* main.c */
#include <stdio.h>
#include "askname.h"
int main(int argc, char **argv)
{
 char first[255], last[255];
 askname(first, last);
Методические указания к лабораторной работе №2 24
по курсу «Технологии разработки программного обеспечения»
 printf("Hello, %s %s!\n", first, last);
 return 0;
}
