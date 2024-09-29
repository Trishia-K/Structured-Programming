#include<stdio.h>

int main()
{
  int n1, n2, n3;
  printf("Enter the numbers : ");
  scanf("%d %d %d", &n1, &n2, &n3);
  if(n1 > n2)
  {
    if(n1 > n3)
    {
      printf("[if inside if] %d is greater", n1);
    }
    else
    {
      printf("[else inside if] %d is greater", n3);
    }
  }
  else
  {
    if(n2 > n3)
    {
      printf("[if inside else] %d is greater", n2);
    }
    else
    {
      printf("[else inside else] %d is greater", n3);
    }
  }
}