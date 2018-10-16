#include <stdio.h>

int Add(int number){
  int sum=0;
  for (size_t i = 0; i <= number; i++) {
    if (i % 3 == 0|| i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}

int Multply(int number){
  int sum = 0;
  for (size_t i = 0; i <= 10; i++) {
    if (i % 3 == 0|| i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}

int main(int argc, char const *argv[]) {
  int answere = 0;
  int number = 0;
  int sum = 0;

  do {
    printf("Select ADD(1) or Multiply(2)\n");
    scanf("%d",&answere);
  } while(answere != 1 && answere != 2);

  do {
    printf("Select a Number in the range(1-100)\n");
    scanf("%d",&number );
  } while(number < 1 || number > 100);

  if (answere == 1) {
    sum = Add(number);
  }

  else if(answere == 2){
    sum = Multply(number);
  }

  printf("The result is %d\n",sum );
  return 0;
}
