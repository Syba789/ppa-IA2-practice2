#include<stdio.h>
int input_side()
{
  int k;
  scanf("%d",&k);
  return k;
}
int check_scalene(int a,int b,int c)
{
  int isscalene;
  if(a!=b && a!=c && b!=c)
  isscalene=1;
  return isscalene;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  printf("triangle is scalene\n");
  else
  if(isscalene!=1)
  printf("triangle is not scalene\n");
  }
  int main()
  {
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);  
    return 0;
  }

