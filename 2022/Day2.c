#include <stdio.h>

int main(){
    FILE *fptr;

    char oponnent=0;//A=Rock,B=Paper,c=Sicor
    char me=0;//X=Rock,Y=Paper,c=Sicor
    int gameState=0;//2 if won, 1 if draw,0 is lost
    char str[5];
    int score=0;

    fptr = fopen("C:\\msys64\\home\\Jelle Claes\\Day2.txt","r");
     if(fptr == 0){
        printf("Error! opening file");
     }
      while(fgets(str,5,fptr) !=0){
          oponnent = str[0];
          me = str[2];

          //printf("%c ",oponnent);
          //printf("%c ",me);

          if((oponnent=='A' && me=='X') || (oponnent=='B' && me=='Y') || (oponnent=='C' && me=='Z')){
              gameState = 1;//draw
          } else if((oponnent=='A' && me=='Y') || (oponnent=='B' && me=='Z') || (oponnent=='C' && me=='X')){
              gameState = 2;//won
          } else{
              gameState = 0;//los
          }

          if(me == 'X'){
              score += 1;
          } else if(me == 'Y'){
              score += 2;
          } else if(me == 'Z'){
              score += 3;
          }

          if(gameState == 2){
              score += 6;
          } else if(gameState == 1){
              score += 3;
          } else if(gameState == 0){
              score += 0;
          }
          //printf("%d ",gameState);
          //printf("%d\n",score);
      }

    printf("my total score =%d",score);
}