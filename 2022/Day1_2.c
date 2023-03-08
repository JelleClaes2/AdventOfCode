#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    FILE *fptr;

    int number=0;
    int temp=0;
    int bigestNumber1=0;
    int bigestNumber2=0;
    int bigestNumber3=0;
    int total=0;
    char str[10];
    fptr = fopen("C:\\msys64\\home\\Jelle Claes\\Day1_2.txt","r");
    if(fptr == 0){
        printf("Error! opening file");
    }
    while(fgets(str,10,fptr) !=0){
        //printf("%s",str); print heel de file
        if(strcmp(str,"\n")==0){
            temp = 0;
        } else {
            temp += atoi(str);
            if(temp>bigestNumber1){
                bigestNumber3=bigestNumber2;
                bigestNumber2=bigestNumber1;
                bigestNumber1 = temp;
            } else if(temp>bigestNumber2){
                bigestNumber3=bigestNumber2;
                bigestNumber2=temp;
            } else if(temp>bigestNumber3){
                bigestNumber3=temp;
            }
        }
    }
    total = bigestNumber1+bigestNumber2+bigestNumber3;
    printf("bigestnumber1: %d\n",bigestNumber1);
    printf("bigestnumber2: %d\n",bigestNumber2);
    printf("bigestnumber3: %d\n",bigestNumber3);
    printf("total: %d",total);
}