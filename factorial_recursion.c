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
  // printf("num is: %d",num);
  int k = num;
  int re = result;
  if (k == 0){
    return result;
  }
  else{
    //re = calculate_fact(num--,result);
    //printf("re is : %d",re);
    //printf("num-- is: %d",num--);
    int id = k-1;
    return k*calculate_fact(id,result);
  }
}
