#include<stdio.h>
#include<string.h>
struct employee
{
    char name[30];
    int id;
    float salary;
};

struct employee input()
{
    struct employee a;
    printf("Enter name,id and salary of employee:");
    scanf("%d",&a.id);
    fflush(stdin);
    fgets(a.name,30,stdin);
    a.name[strlen(a.name)-1]='\0';
    scanf("%f",&a.salary);
    return a;
}
int main()
{
  struct employee a;
  a=input();

  printf("\n");
  return 0;
}

