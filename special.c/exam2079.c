#include <stdio.h>

int main() {
   char ch;
   int num, fac=1, exit = 0;

   while(exit == 0) {
   printf("A. Odd or Even\nB. Positive or Negative\nC. Factorial\nD. Exit\n");
   
   printf("Enter a Choice: ");
   scanf("%c", &ch);

   if (ch != 'D' && ch != 'd') {
   printf("Enter a number: ");
   scanf("%d", &num);
   }

   if (ch == 'a' || ch == 'A') {
      if (num % 2 == 0) {
         printf("%d is Even.", num);
      } else {
         printf("%d is Odd", num);
      }
   } else if (ch == 'b' || ch == 'B') {
      if (num >= 0) {
         printf("%d is Positive.", num);
      }  else {
         printf("%d is Negative", num);
      }
   } else if (ch == 'c' || ch == 'C') {
      for(int i=1; i<=num; i++) {
         fac *= i;
      }
      printf("The Factorial of %d is %d", num, fac);
      fac = 1;
   } else if (ch == 'd' || ch == 'D') {
      exit = 1;
   }

   printf("\n");

   }
   return 0;
}