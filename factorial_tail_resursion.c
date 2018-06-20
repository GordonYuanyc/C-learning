#include <stdio.h>

int fact_tail_recursion(int num,int tail);

int main(){
  int n;
  int result;
  int tail = 1;

  printf("Enter a number: ");
  scanf("%d",&n);
  result = fact_tail_recursion(n,tail);

  printf("The answer is: %d",result);
}

int fact_tail_recursion(int num,int tail){
  if(num == 1){
    return tail;
  }
  else{
    int n = num - 1;
    int t = tail;
    int tl = fact_tail_recursion(n,t);
    return num*tl;
  }
}
