#include <stdio.h>
#include "module.h"

extern int num;

int main() {
   // printf() displays the string inside quotation
   printf("Hello, World! C code work\n");
   int val = function();
   printf("%d", val);
   printf("\n");
   printf("%d", num);
   printf("\n");
   return 0;
}