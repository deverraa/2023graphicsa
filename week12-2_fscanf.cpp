#include<stdio.h>
int main()
{
    FILE * fin = fopen("file.txt","r");

    char line[50];
    fscanf(fin,"%s",line);
    printf("�q�ɮפ�Ū��: %s\n",line);

    fscanf(fin,"%s",line);
    printf("�q�ɮפ�Ū��: %s\n",line);

}
