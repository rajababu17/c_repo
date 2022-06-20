// // 




#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int i = 4;
//     double d = 4.0;
//     char s[] = "HackerRank ";
//     int a;
//     double b;
//     char c[100];
    
//     scanf("%d",&a);
//     scanf("%lf",&b);
//     fflush(stdin);
//     scanf("%[^\n]%*c",c);
//     // fgets(c, 100, stdin);
//     // fgets(c, 100, stdin);
//     printf("%d\n",i+a);
//     printf("%.1lf\n",d+b);
//     // c=strcat(c,s)
//     printf("%s %s",s,c );

//     return 0;
// }
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char c;
    char ch[100];
    char sent[100];
    scanf("%c",&c);
    fflush(stdin);
    scanf("%s",ch);
    fflush(stdin);
    gets(sent);
    printf("%c",c);
    printf("\n%s",ch);
    printf("\n%s",sent);
    
    return 0;
}