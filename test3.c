#include <stdio.h>

// int factorial(int n)
// {
//     int a = 1;
//     while (n > 0)
//     {
//         a = a * n;
//         n--;
//     }
//     return a;
// }

int recFactorial(int n){
    if (n==1)
    {
        return 1;
    }
    else
    return n*recFactorial(n-1);
    

}
int main()
{
//    int c= factorial(5);
   int d=recFactorial(5);
//    printf("%d\n",c);
   printf("%d",d);
    return 0;
}