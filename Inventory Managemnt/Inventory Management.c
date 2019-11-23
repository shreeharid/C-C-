#include<stdio.h>
FILE *p; //pointer for FILE defined
struct inventory{
    int asset_no;
    char name[10];
    float price;
}; //structure inventory defined
int main()
{
    struct inventory i;
    char choice;
    int loop;
    p=fopen("Inventory.txt","w"); //File open
    if(p==NULL)
    {
        printf("FILE DOESNOT EXIST\n");
    }
    do
    {
        printf("Enter the asset number :");
        scanf("%d",&i.asset_no);
        fprintf(p,"Asset Number : %d\n",i.asset_no); //print in file
        printf("Enter the asset name :");
        getchar();
        scanf("%s",&i.name);
        fprintf(p,"Asset Name : %s\n",i.name); //print in file
        printf("Enter the asset price :");
        scanf("%f",&i.price);
        fprintf(p,"Asset Price : %.2f\n",i.price); //print in file
        printf("Do you want to add another asset :");
        getchar();
        scanf("%c",&choice); //ask for choice
        if(choice=='y'||choice=='Y')
        {
            loop=1;
        }
        else
        {
            loop=0;
        }
    }while(loop);
    printf("*******Thank You********"); //end message
}
