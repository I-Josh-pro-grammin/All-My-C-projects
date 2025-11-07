#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
  char fname[81];
  char buffer[101];
  char currentaddress[201]="";
  FILE *instream;
  int first = 1;
  printf("Address file: ");
  scanf("%80s", fname);

  if((instream = fopen(fname, "r"))==NULL){
    printf("Unable to open file %s!", fname);
    exit(-1);
  }

  /* Read a line */
  while(fgets(buffer, sizeof(buffer)-1, instream)){
    if(buffer[0] == '*'){  /* End of address */
       printf("%s\n", currentaddress); /*Print address */
       strcpy(currentaddress, "");  /* Reset address to ""*/
       first = 1;
    }else{
      /* Add comma (if not first entry in address) */
      if (first) first = 0;else strcat(currentaddress,",");
      /* Add line (minus newline) to address */
      strncat(currentaddress,buffer, strlen(buffer)-1);
    }
  }
  fclose(instream);
}
