#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    FILE *fptr;

    int number=0;
    int temp=0;
    int bigestNumber=0;
    char str[10];
    fptr = fopen("C:\\msys64\\home\\Jelle Claes\\Day1.txt","r");
    if(fptr == 0){
        printf("Error! opening file");
    }
    while(fgets(str,10,fptr) !=0){
        //printf("%s",str); print heel de file
        if(strcmp(str,"\n")==0){
            temp = 0;
        } else {
            temp += atoi(str);
            if(temp>bigestNumber){
                bigestNumber = temp;
            }
        }
    }

    printf("bigestnumber: %d",bigestNumber);
}