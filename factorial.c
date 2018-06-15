#include <stdio.h>

void main(){
  int result = 1;
  int n;

//  printf("%d",result);
  printf("Enter an integer: ");
  scanf("%d",&n);

  for(int n; n > 0; n = n - 1){
    result = result + n;
  }

  printf("The factorial is: ");
  printf("%d",result);
}
