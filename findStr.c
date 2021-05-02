#include<stdio.h>
#include<string.h>

char* strcpy(char* strDest, const char* strSrc);

int main() {
    char* temp;
    char* smallest_word = "A";
    char* largest_word = "A";
   

    while(strlen(temp) != 4){
	printf("Enter word:");
        scanf("%s",&temp);
        if(strcmp(temp,smallest_word) < 0)
	    strcpy(smallest_word,temp);
        if(strcmp(temp, largest_word) > 0)
           strcpy(largest_word,temp);
	}
    printf("Smallest word: %s", smallest_word);
    printf("Largest word: %s", largest_word);
}

char* strcpy(char* strDest, const char* strSrc) {

    strDest =(char*) strSrc;
    return strDest;
 
}
