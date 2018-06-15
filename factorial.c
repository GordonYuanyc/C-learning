#include <stdio.h>

void main(){
  int result = 1;
  int n;
  int i;

  printf("Enter an integer: ");
  scanf("%d",&n);

  for(i = n; i > 0; i--){//think about why I cannot use n in the loop condition
    result *= i;
  }

  printf("The factorial is: %d",result);
}
