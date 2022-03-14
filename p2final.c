#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  return n;
}
int is_composite(int n)
{

  int composite=0;
  for(int i =2; i<=n/2;i++)
  {
    if(n%i == 0)
    {
      composite=1;
      break;
    }
  }
  return composite;
}
void output(int n, int composite)
{
  if(composite == 0)
  
    printf("%d is not a composite number\n", n);
  }
  else
  {
    printf("%d is a composite number\n", n);
  }
}
int main()
{
  int n,composite=0;
  n = input_number();
  composite=is_composite(n);
  output(n, composite);
  return 0;
}