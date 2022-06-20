#include<stdio.h>

long long  factorial(int n){
    if(n<=1)
    return 1;
    else
    return n*factorial(n-1);
}


int main(){

long  long int fact;
int input;
printf("\n\nEnter the number you want to factorial of : ");
scanf("%d",&input);

fact=factorial(input);
printf("\nThe factorial of %d is %lld\n ",input,fact);




    return 0;
}