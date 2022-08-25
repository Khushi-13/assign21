#include<stdio.h>

struct employee
{
    char name[30];
    int id;
    int salary;
};

int main()
{
  struct employee a;
  printf("Enter name of employee\n");
  gets(a.name);

  printf("Enter employee id\n");
  scanf("%d",&a.id);

  printf("Enter employee salary\n");
  scanf("%d",&a.salary);

  printf(" %s, %d, %d ",a.name,a.id,a.salary);

  return 0;
}


