#include "stdio.h"

int main()
{
  int num1;
  int num2;
  char oper;
  
  printf("Введите первое число:");
  scanf("%d" ,&num1);
  printf("Введите второе число:");
  scanf("%d" ,&num2);
  printf("Введите операцию:");
  scanf(" %c" ,&oper);
  if (oper == '+')
  {
    int result = num1 + num2;
    printf("%d\n", result);
  }
  else if (oper == '-')
  {
    int result = num1 - num2;
    printf("%d\n", result);
  }
  
  else if (oper == '*')
  {
    int result = num1 * num2;
    printf("%d\n", result);
  }
  
  else if (oper == '/')
  {
    int result = num1 / num2;
    printf("%d\n", result);
  }
  else
  {
    printf("Операция неверна!");
  }
  return 0;
}
