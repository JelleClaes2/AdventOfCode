#include <stdio.h>

int main(){
    FILE *fptr;

    char oponnent=0;//A=Rock,B=Paper,c=Sicor
    char me=0;//X=Rock,Y=Paper,c=Sicor
    int gameState=0;//2 if won, 1 if draw,0 is lost
    char str[5];
    int score=0;

    fptr = fopen("C:\\msys64\\home\\Jelle Claes\\Day2_2.txt","r");
     if(fptr == 0){
        printf("Error! opening file");
     }
      while(fgets(str,5,fptr) !=0){
          oponnent = str[0];
          me = str[2];

          //printf("%c ",oponnent);
          //printf("%c ",me);

          if(me=='X'){
              gameState = 0;//lose
          } else if(me=='Y'){
              gameState = 1;//draw
          } else{
              gameState = 2;//win
          }

          if(me == 'X'){
              if(oponnent=='A'){
                  score += 3;
              } else if(oponnent=='B'){
                  score += 1;
              } else{
                  score += 2;
              }
          } else if(me == 'Y'){
               if(oponnent=='A'){
                  score += 1;
              } else if(oponnent=='B'){
                  score += 2;
              } else{
                  score += 3;
              }
          } else if(me == 'Z'){
               if(oponnent=='A'){
                  score += 2;
              } else if(oponnent=='B'){
                  score += 3;
              } else{
                  score += 1;
              }
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