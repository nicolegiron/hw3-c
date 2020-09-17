// Author: Nicole Giron nqg5259@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(n){
  if (n == 0){
    return 0;
  } else {
    return (n % 10) + digit_sum(n/10);
  }
}

void run(){
  char *num = readline("Enter an int: ");
  int n = atoi(num);
  printf("sum of digits %d is %d.\n", n, digit_sum(n));
}

int main(void) {
  run();
}