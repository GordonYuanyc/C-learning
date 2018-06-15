#include <stdio.h>

int calculate_fact(int num,int result);

int main(){
  int n;
  int result=1;

  printf("Enter a number: ");
  scanf("%d",&n);
  result = calculate_fact(n,result);
  printf("The answer is: %d",result);
}

int calculate_fact(int num,int result){
  int re = result;
  if (num = 1){
    return num*re;
  }
  else{
    re = calculate_fact(num--,result);
    return num*re;
  }
}
