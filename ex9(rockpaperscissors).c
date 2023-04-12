#include<stdio.h>
int generaterand(int n){
srand(time(NULL));
return rand()%n;
}
int main(){
int choice;
char name[100];
int cs=1,ps=1;
printf("Enter player name:\n");
scanf("%s",&name);
printf("Enter 0 for rock,1 for paper and 2 for scissors:\n");
scanf("%d",&choice);
printf("Your choice is:%d\n",choice);
printf("Computer is:%d\n",generaterand(3));
if (choice==0&&generaterand(3)==0){
    printf("It's a tie\n");
}
else if(choice==0&&generaterand(3)==1){
    printf("Computer wins\n");
}
else if(choice==0&&generaterand(3)==2){
    printf("%s wins\n",name);
}
else if (choice==1&&generaterand(3)==0){
    printf("%s wins\n",name);
}
else if(choice==1&&generaterand(3)==1){
    printf("It's a tie\n");
}
else if(choice==1&&generaterand(3)==2){
    printf("Computer wins\n");
}
else if (choice==2&&generaterand(3)==0){
    printf("Computer wins\n");
}
else if(choice==2&&generaterand(3)==1){
    printf("%s wins\n",name);
}
else if(choice==2&&generaterand(3)==2){
    printf("It's a Tie\n");
}
}
