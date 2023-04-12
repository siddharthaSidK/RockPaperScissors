#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generaterand(int n){
srand(time(NULL));
return rand()%n;
}
int greater(char c1,char c2){
if(c1==c2){
    return -1;
}
else if((c1=='r')&&(c2=='s')){
    return 1;
}
else if((c2=='r')&&(c1=='s')){
    return 0;
}
else if((c1=='p')&&(c2=='r')){
    return 1;
}
else if((c2=='p')&&(c1=='r')){
    return 0;
}
else if((c1=='s')&&(c2=='p')){
    return 1;
}
else if((c2=='s')&&(c1=='p')){
    return 0;
}
}
int main(){
int playerscore=0,compscore=0,temp;
char playerchoice,compchoice;
char arr[]={'r','p','s'};
for(int i=0;i<3;i++){
    printf("Player's turn:\n");
    printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
    scanf("%d",&temp);
    getchar();
    playerchoice=arr[temp-1];
    printf("Player chose:%c\n",playerchoice);
    printf("Computer's turn:\n");
    printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
    temp=generaterand(3)+1;
    compchoice=arr[temp-1];
    printf("Computer chose:%c\n",compchoice);
    if(greater(compchoice,playerchoice)==1){
        compscore+=1;
        printf("CPU got a point\n");
    }
    else if(greater(compchoice,playerchoice)==-1){
        compscore+=1;
        playerscore+=1;
        printf("It's a draw\n");
    }
    else{
        playerscore+=1;
        printf("You got a point\n");
    }
    printf("You:%d\nCPU:%d\n",playerscore,compscore);
    if(playerscore>compscore){
        printf("You win the game\n");
    }
    else if(playerscore<compscore){
        printf("Computer win the game\n");
    }
    else{
        printf("It's a draw\n");
    }
}
}
