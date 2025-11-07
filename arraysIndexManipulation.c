#include <stdio.h>
const CITY = 2;
const WEEK = 7;
/*int main (){
 int arr[3][5]={
 {1,2,3,4,5},
 {6,7,9,10,11},
 {12,13,14,15,16}
 };
printf("%d", arr[1][3]);
}*/

int main(){
    int temperature[CITY][WEEK];
  for (int i = 1; i <= CITY; i++){
    for(int j = 1; i <= WEEK; j++){
        printf("CITY: %d DAY: %d = ", i, j);
        scanf("%d", &temperature[i][j]);
    }
  };
  printf("\nDisplaying values: \n\n");
  for (int i = 1; i <= CITY; i++){
    for(int j = 1; i <= WEEK; j++){
        printf("CITY: %d DAY: %d  =  %d", i, j, temperature[i][j]);
    }
  }
  return 0;
}


