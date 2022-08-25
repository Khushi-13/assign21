#include<stdio.h>
struct employee
{
    char name[30];
    int id;
    int salary;
};

int main()
{
  struct employee a[5],temp;
  int i,j;
  for(i=0;i<3;i++)
    {
  printf("Enter name of employee\n");
  fflush(stdin);
  fgets(a[i].name,30,stdin);
  printf("Enter employee id\n");
  scanf("%d",&a[i].id);

  printf("Enter employee salary\n");
  scanf("%d",&a[i].salary);
    }

  for(i=0;i<2;i++)
  {
      for(j=i;j<3;j++)
      {
          if(strcmp(a[i].salary,a[j].salary)>0)
          {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
          }
      }
  }
  for(int i=0;i<3;i++)
  {
      printf(" name=%s  id=%d salary=%d ",a[i].name,a[i].id,a[i].salary);
  }
return 0;
}


