#include<stdio.h>


struct employee
{
    int id;
    int salary;
    char name[20];
    // string name;

};




int main(){
struct employee programmer;
int a=4444;
char b;

programmer.id=45;
programmer.salary=1000;
// printf("enter your id");
// scanf("%d",programmer.id);
// printf("enter your salary");
// scanf("%d",programmer.salary);
printf("enter your name");
gets(programmer.name);
printf(" id is :%d",programmer.id);
printf(" \nname is %s",programmer.name);
printf(" \n%d",a);


    return 0;
}