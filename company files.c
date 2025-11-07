#include <stdio.h>
#define baseSalary 2000;
int main(){
  double devNum;
  double monthlyIncome;
  double healthInsurance=100;
  double transportAllowance=100;
  printf("enter the income this month:");
  scanf("%f\n",&monthlyIncome);
  printf("enter the number of developers this month:");
  scanf("%f\n", &devNum);
  float monthlyIncomeBonus=(monthlyIncome*7/100)/devNum;
  float developerGrossSalary=monthlyIncomeBonus+baseSalary+healthInsurance+transportAllowance;
  float tax=developerGrossSalary*15/100;
  printf("\n");
  printf("Your gross salary is: %f\n", developerGrossSalary);
  printf("The total tax for developer is: %f", tax);

}
