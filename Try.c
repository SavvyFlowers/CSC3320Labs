int main(int argc, char *argv[])
{
   FILE *FPTR;
   FPTR=fopen("program.txt","a+");
   if(FPTR==NULL){
      printf("Error!");
#include <stdio.h>
#include <stdlib.h>  /* For exit() function */

      exit(1);
   }
   fprintf(FPTR,"program is written");
   printf("program is written in program.txt");
   fclose(FPTR);
   return 0;
}
