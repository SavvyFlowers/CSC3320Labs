#include <stdio.h>

void split_time(long total_sec, int*, int*, int*);

int main(){

     int n,hr,min,sec;
     hr = 0;
     min = 0;
     sec = 0;
     printf("Enter seconds:");
     scanf("%d", &n);
     
     split_time(n,&hr,&min,&sec);

     printf("Converted format: %d hour %d mins %d secs", hr,min,sec);

     return 0;

}

void split_time(long total_sec, int *hr, int *min, int *sec) {

    *sec = total_sec % 60;
    *min = total_sec / 60;
    *hr = *min / 60;
    *min = *min % 60;

} 
