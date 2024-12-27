#include <stdio.h>
#include<string.h>
int main()
{
  char employee_name[20];
  int days_worked;
  float rate_perday;
  float total_salary;
  printf("employee_name:",employee_name);
  scanf("%s\n",&employee_name);
  printf("days_worked:",days_worked);
  scanf("%d\n",&days_worked);
  printf("rate_perday:",rate_perday);
  scanf("%f\n",&rate_perday);
  total_salary=days_worked*rate_perday;
  printf("total salary is:%f",total_salary);
  scanf("%f\n",&total_salary);
  return 0;
}
    
