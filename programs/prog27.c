#include<stdio.h>
// print a pyramid of '*' in 6 rows.

int main() {
   int i, space, k = 0;
   for (i = 1; i <= 6; ++i, k = 0) {
      for (space = 1; space <= 6 - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}
