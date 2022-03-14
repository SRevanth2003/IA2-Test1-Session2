#include<stdio.h>
int input_side()
{
  int a;
  printf("Enter the sides of the triangle: ");
  scanf("%d", &a);
  return a;
}
int check_scalene(int a, int b, int c)
{
  int isscalene;
  if(a!=b && b!=c && c!=a)
  {
    return isscalene;
  }
}
void output(int a, int b, int c, int isscalene)
{
  if(a!=b && b!=c && c!=a)
  {
    printf("The Triangle is Scalene\n");
  }
  else
  {
    printf("The Triangle is not Scalene\n");
  }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a, b, c);
  output(a, b, c, isscalene);
  return 0;
}