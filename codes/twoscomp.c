/*
take 1's complement first
shift it using a new array 
take 2's complement by adding 1
add the larger number and the 2's complement

*/

#include<stdio.h>
#include<string.h>
char* twos_func(int SIZE,char binary[SIZE]){ 
    char onesComp[SIZE], twosComp[SIZE];
    int i, carry=1;

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
    }
    onesComp[SIZE] = '\0';
    printf("The ones complement is %s",onesComp);
    /*
     * Add 1 to the ones complement
     */
    for(i=SIZE-1; i>=0; i--)
    {
        if(onesComp[i] == '1' && carry == 1)
        {
            twosComp[i] = '0';
        }
        else if(onesComp[i] == '0' && carry == 1)
        {
            twosComp[i] = '1';
            carry = 0;
        }
        else
        {
            twosComp[i] = onesComp[i];
        }
    }
    twosComp[SIZE] = '\0';

    printf("Original binary = %s\n", binary);
    printf("Ones complement = %s\n", onesComp);
    printf("Twos complement = %s\n", twosComp);

    return strdup(twosComp);
}
char *addBinary(char* a,char* b){
    int len1=strlen(a);
    int len2=strlen(b);
    int carry =0;
    int maxSize=len1>len2?len1:len2;
    char result[maxSize+2];
    int index=0; 

    for (int i=len1-1,j=len2-1;i>=0 || j>=0|| carry>0;i--,j--){
        int bitA=i>=0 ?a[i]-'0':0;
        int bitB=j>=0 ?b[j]-'0':0;
        int sum= bitA + bitB+ carry;
        result[index]=sum%2 + '0';
        carry=sum/2;
        index++;
    }
result[index]='\0';

int start =0;
int end=index-1;
while(start<end){
    char temp= result[start];
    result[start]=result[end];
    result[end]=temp;
    start++;
    end--;
}
return strdup(result);
}
int main(){
    char larger[100],smaller[100],final[100];
    char twoscomp[100],temp[100];
    printf("Enter larger binary string:");
    scanf("%s",larger);
    printf("Enter smaller binary string:");
    scanf("%s",smaller);
    int len=strlen(smaller);
    strcpy(twoscomp,twos_func(len,smaller));
    // printf("%s",twoscomp);
    strcpy(final,addBinary(larger,twoscomp));
    // printf("%s",final);
    int final_length=strlen(final);
    if(final[0]=='1'){
        for(int i=0;i<final_length-1;i++){
            temp[i]=final[i+1];
        }
    }
    printf("\nthe final answer is %s",temp);
}