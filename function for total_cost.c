#include<stdio.h>
double total_cost(int quantity, double unit_cost);
void main(){
    int quantity;
    double unit_cost;
    printf("enter quantity:");
    scanf("%d",&quantity);
    printf("enter unit cost:");
    scanf("%lf",&unit_cost);
    double result = total_cost(quantity, unit_cost);
    printf("total cost: %.2f\n", result);
}
double total_cost(int quantity,double unit_cost){
          double taxRate=0.05;
          double sub_total;
          sub_total = quantity * unit_cost;
          return(sub_total + sub_total * taxRate);
    }
