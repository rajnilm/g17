#include <stdio.h>

int main() {
    // Write C code here
  int s=1 , sum =0 , n=0 , target_sum=120 ;
  while(sum !=target_sum){
      sum=s*3+sum;
      s=s*3;
      n=n+1;
  }
  n=n-1;
  printf("The value of n is %d " , n);
    return 0;
}
