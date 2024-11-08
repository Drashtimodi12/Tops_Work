// file handling in c 
#include<stdio.h>
int main(){
    char str[50];
    printf("Enter string:");
    gets(str);
    FILE *ptr;
    ptr=fopen("C:\\TOPS\\C Program\\File_Handling\\data.txt","w+");
    if(ptr==NULL){
        printf("File not created.");
    }
    else{
        printf("File created.");
        fprintf(ptr,"%s",str);
    }
    fclose(ptr);
    printf("Data inserted successfully.");
}