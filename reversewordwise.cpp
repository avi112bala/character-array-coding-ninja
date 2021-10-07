#include<string.h>
void reverseStringWordWise(char input[]) {
    // Write your code here
int len;
    len=strlen(input);
    int start=0,end=len-1;
    while(start<end){
        char temp=input[end];
        input[end]=input[start];
        input[start]=temp;
        start++;
        end--;
    }
    int i=0;
    while(input[i]!='\0'){
        start=i;
        while(input[i]!='\0' &&  input[i]!=' '){
            i++;

        }
        end=i-1;
        while(start<end){
             char temp=input[end];
        input[end]=input[start];
        input[start]=temp;
        start++;
        end--;
        }
        i++;
    }
}
