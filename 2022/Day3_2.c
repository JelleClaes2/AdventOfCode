#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *fptr;

    int stringLengt=0;
    char str[100];
    char sack1[50];
    char sack2[50];
    char letterSack1=0;
    char letterSack2=0;
    int sum=0;


    fptr = fopen("C:\\msys64\\home\\Jelle Claes\\Day3_2.txt","r");
    if(fptr == 0){
        printf("Error! opening file");
    }
    while(fgets(str,100,fptr) != 0){
        stringLengt=strlen(str);
        if(str[stringLengt-1] == '\n')
            stringLengt--;
        if(stringLengt % 2 == 1)
        {
            printf("%s !!!\n", str);
            return( 1 );
        }
        for(int i=0; i<stringLengt/2;i++){
//            printf("str: %d\n",str[i]);
            sack1[i]=str[i];
//            printf("sack1: %c\n",sack1[i]);
        }
        sack1[stringLengt/2] = '\0';
        for(int i=stringLengt/2;i<stringLengt;i++){
            sack2[i-stringLengt/2]=str[i];
//            printf("str: %d\n",str[i]);
//            printf("sack2: %c\n",sack2[i]);

        }
        sack2[stringLengt/2] = '\0';
//        printf("%s = %s - %s\n", str, sack1, sack2);

        for(int i=0;i<strlen(sack1);i++){
            letterSack1 = sack1[i];
            for(int j=0;j<strlen(sack2);j++){
                letterSack2 = sack2[j];
                if(letterSack1==letterSack2){
                    if(islower(letterSack1)>0){
                        sum = sum +(letterSack1 - 'a'+1);
                    }else {
                        sum = sum +(letterSack1 - 'A'+27);
                    }
                    i = strlen(sack1);
                    break;
                }
            }
        }
    }
    printf("%d is de totale som",sum);
    return 0;
}
