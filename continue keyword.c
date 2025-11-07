#include <stdio.h>

int main(){
  int iNum, nSum;
  for(iNum=1, nSum=0; iNum<20; iNum++){
    if (iNum % 2){
      printf("iNum %% 2 = %d (skipped)\n", iNum %2);
      continue;
     }
     nSum = nSum + iNum;
     printf("iNum %% 2 = %d (summed up), nSum = %d\n", iNum % 2, nSum);
  }
  return 0;
}
