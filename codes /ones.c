#include <stdio.h>

#define SIZE 8

int main()
{
    char binary[SIZE + 1], onesComp[SIZE + 1];
    int i, error=0,carry;

    printf("Enter %d bit binary value: ", SIZE);
    
    /* Input binary string from user */
    gets(binary);

    /* Store all inverted bits of binary value to onesComp */
    for(i=0; i<SIZE; i++)
    {
        if(binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            onesComp[i] = '1';
        }
        else
        {
            printf("Invalid Input");
            error = 1;

            /* Exits from loop */
            break;
        }
    }

    /* Marks the end of onesComp string */
    onesComp[SIZE] = '\0';

   printf("One's complement of %d is %d",binary, onesComp);
   for(int i=SIZE -1;i>=0;i++){
    if(onesComp[i]=='1' && carry=1){
        
    }
   }

    return 0;
}