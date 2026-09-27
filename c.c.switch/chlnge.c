#include <stdio.h>
int main() 
{
  int choice = 1;
    
    switch (choice) {
    case 1:
      printf(" i eat rice");
      break;

    case 2:
      printf(" i eat burger");
      break;

    default:
      printf("Invalid choice");
  }

  return 0;
}
