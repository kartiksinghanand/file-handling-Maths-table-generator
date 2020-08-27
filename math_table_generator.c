#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *ptr;
    int num;
    printf("Enter the number of which you want to generate the table: ");
    scanf("%d",&num);
    ptr=fopen("Maths tables.txt","w");
    for(int i=0;i<10;i++)
    {
        fprintf(ptr,"%d X %d = %d\n",num,i+1,num*(i+1));     
    } 
    fclose(ptr);
    return 0;
}
