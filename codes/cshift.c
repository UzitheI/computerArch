#include<stdio.h>
#include<string.h>

void circ_right_shift(char binarystring[]){
    int length=strlen(binarystring);
    char reserved=binarystring[length-1];
    for(int i=length-1;i>0;i--){
        binarystring[i]=binarystring[i-1];
    }
    binarystring[0]=reserved;
    printf("The string becomes %s",binarystring);
}

void circ_left_shift(char binarystring[]){
    int length=strlen(binarystring);
    char reserved=binarystring[0];
    for(int i=0;i<length;i++){
        binarystring[i-1]=binarystring[i];
    }
    binarystring[length-1]=reserved;
    printf("The string becomes %s",binarystring);
}

int main(){
    char binarystring[100];
    printf("Enter the binary string;\n");
    scanf("%s",binarystring);
    int str_length=strlen(binarystring);
    int choice;
    printf("Enter the choice that you want to choose:\n Press 1 for left circular shift and Press 2 for right circular shift\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        circ_left_shift(binarystring);
        break;
    
    case 2:
        circ_right_shift(binarystring);
        break;
    default:
        printf("choose a correct option\n");
        break;
    }
}
