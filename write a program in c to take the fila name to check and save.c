#include<stdio.h>
int main(){
    char file_name[100];
    char user_data[100];
    printf("Enter the file name:\n");
    gets(file_name);
    FILE *fp;
    fp=fopen(file_name,"a");
    if(fp !=NULL){
        printf("FILE FOUND!\n");
        printf("Enter something to be saved in file!\n");
        gets(user_data);
        fprintf(fp,"%s",user_data);
        printf("Data saved in file!");
        fclose(fp);
    }else{
        printf("file not found!\n");
    }
}
