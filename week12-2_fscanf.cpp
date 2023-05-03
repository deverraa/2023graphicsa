#include<stdio.h>
int main()
{
    FILE * fin = fopen("file.txt","r");

    char line[50];
    fscanf(fin,"%s",line);
    printf("從檔案中讀到: %s\n",line);

    fscanf(fin,"%s",line);
    printf("從檔案中讀到: %s\n",line);

}
