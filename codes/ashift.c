#include<stdio.h>
#include<string.h>
void shift_left(char binarystring[]) {
    int length = strlen(binarystring);
    char sign_bit = binarystring[0];
    for (int i = 0; i < length - 1; i++) {
        binarystring[i] = binarystring[i + 1];
    }
    binarystring[length - 1] = '0';
    printf("The string after arithmetic left shift is %s", binarystring);
}

void shift_right(char binarystring[]) {
    int length = strlen(binarystring);
    char sign_bit = binarystring[0];
    for (int i = length - 1; i > 0; i--) {
        binarystring[i] = binarystring[i - 1];
    }
    for(int i=length-1;i<0;i++){
        binarystring[i]=binarystring[0];
    }
    
    // Print the result
    printf("The string after arithmetic string right is %s", binarystring);
}

int main(){
    char binarystring[100];
    printf("Enter the binary string;\n");
    scanf("%s",binarystring);
    int str_length=strlen(binarystring);
    int choice;
    printf("Enter the choice that you want to choose:\n Press 1 for left shift and Press 2 for right shift\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        shift_left(binarystring);
        break;
    
    case 2:
        shift_right(binarystring);
        break;
    default:
        printf("choose a correct option\n");
        break;
    }
}
