#include<stdio.h>
#include<string.h>
char* ones_func(char smaller[]){
    int length_smaller=strlen(smaller);
    for(int i=0;i<length_smaller;i++){
        if(smaller[i]=='1'){
            smaller[i]='0';
        }
        else{
            smaller[i]='1';
        }
    }
    return smaller;
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
    char larger[100],smaller[100];
    char ones_smaller[100],temp[100];
    char added_to_larger[100];
    char final[100];
    char oneArray[100]={'0','0','0','1'};
    int count;
    printf("Enter the larger number:");
    scanf("%s",larger);
    printf("Enter the smaller number:");
    scanf("%s",smaller);
    strcpy( ones_smaller,ones_func(smaller));
    strcpy(added_to_larger,addBinary(larger,ones_smaller));
    int final_length=strlen(added_to_larger);
    if(added_to_larger[0]=='1'){
        for (int i = 0; i < final_length-1; i++) {
            temp[i]=added_to_larger[i+1];
        }
        strcpy(final,addBinary(temp,oneArray));
        printf("%s",final);
    }
    else{
        printf("The answer is a %s",added_to_larger);
    }
    printf("\n__Submitted By Ujjwal Puri__\n");
}


