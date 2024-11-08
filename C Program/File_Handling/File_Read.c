// to read data from file.
#include<stdio.h>
int main(){
    char str[100];
    FILE *p;
    p=fopen("C:\\TOPS\\C Program\\File_Handling\\data.txt","r+");
    if(p==NULL){
        printf("File not found.");
    }
    else{
        printf("File found and data are:\n");
        while(fgets(str,100,p)!=NULL){
            printf("%s",str);
        }
    }
}