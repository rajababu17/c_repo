#include<stdio.h>
void fibbo(int count){
int n1=0,n2=1,n3,i;
  printf("%d %d ",n1,n2);
  for(i=2;i<=count-1;i++)
  {
   n3=n1+n2;
   printf(" %d ",n3);
   n1=n2;
   n2=n3;
   
  }

}
int main()
{
int input;
printf("\n\n Number of fabonicce series you want to print : ");
scanf("%d",&input);
fibbo(input);




  return(0);
}