#include<stdio.h>
#include<stdlib.h>
void additem();//function declaration of add item
void deleteitem();//function declaration of delete item
void bill_info();//declaration of bill_info
void display();//

int stock[5][3]={{0,0,0},{1,10,100},{2,12,200},{3,14,150},{4,21,250}};//array of stocks present
typedef struct{
                int code;
                int quantity;
                float cost;
              }cart; //structure cart
cart c[10];
int inum=0;
float total=0;

int main()
{
    int i,j,n,choice;
    printf("*********SHOPING CART*********");
    do{
        printf("\n\nItem code\tQuantity\tPrice\n");//cart menu display
        for(i=1;i<5;i++)
        {
            for(j=0;j<3;j++)
                printf("%d\t\t",stock[i][j]);
            printf("\n");
        }
    printf("\nPlease enter your choice:");
    printf("\n\n 1: add item \n 2:delete item\n 3:display info\n 4:leave cart:\n"); //get choice from user
    scanf("%d",&choice);

    switch(choice)//switch of choice
    {
        case 1:additem();
            break;
        case 2:deleteitem();
            break;
        case 3:display();
            break;
        case 4: exit(0);
            break;
        default:printf("INCORRECT CHOICE\nPlease enter the correct choice\n");
    };
    }while(1);
    return 0;
}
void additem() //definition of additem
{
    printf("\nEnter the code and quantity of the item to be added to your cart:");
    scanf("%d %d",&c[inum].code,&c[inum].quantity);
    if(c[inum].quantity<stock[c[inum].code][1])//check for quantity availability
    {
        c[inum].cost=c[inum].quantity*stock[c[inum].code][2];//calculate cost
        printf("\n the item with code%d is added to the cart\n", c[inum].code);
        printf("\n item code\t quantity\tcost\n");
        printf("%d\t\t%d\t\t%0.2f",c[inum].code,c[inum].quantity,c[inum].cost);
        stock[c[inum].code][1]=stock[c[inum].code][1]-c[inum].quantity;//update quantity
        inum++;
        bill_info();//update stock array
    }
    else//executes when quantity is not sufficient
    {
        printf("\nStock does not has sufficient quantity\n");

    }
    return;
}

void deleteitem() //definition of deleteitem
{
    if(inum>0)//check for item in stock is purchased or not
    {
        printf("\n last item from your cart deleted\n");
        inum--;
        stock[c[inum].code][1]=stock[c[inum].code][1]+c[inum].quantity;//delete item
        bill_info();
    }
    else
        printf("\nItem is not added to cart for deletion\n");
    return;
}
void bill_info() //definition of bill_info
{
    int i;
    total=0;
    printf("\n there are %d items in your cart...\n\n",inum);
    for(i=0;i<inum;i++)
        total=total+c[i].cost;
    return;
}

void display() //definition of display
{
    int i;
    printf("\n there are %d items in your cart...\n\n",inum);
    printf("\n item code\tquantity\tamount\n");

    for(i=0;i<inum;i++)
        printf("\n%d\t\t%d\t\t%5.2f",c[i].code,c[i].quantity,c[i].cost);
    printf("\n\n\n\t\t\tGrand total is:%5.2f\n",total);
    return;
}
