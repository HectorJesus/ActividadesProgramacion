#include <stdio.h>

int factorial(int i) {

   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}

int  main(int argc, char const *argv[]) {
   int i = atoi(argv[1]);
   printf("Factorial de %d es %d\n", i, factorial(i));
   return 0;
}
