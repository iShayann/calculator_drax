#include <stdio.h>
#include <stdlib.h>
int main()
{
    int no,no1,choice;
    printf("Enter the number:");
    scanf("%d",&no);
    printf("Enter the other number:");
    scanf("%d",&no1);
    printf("1.ADD\n");
    printf("2.SUBSTRACT\n");
    printf("3.DIVIDE\n");
    printf("4.MULTIPLY\n");
    printf("5.Exit the calculator\n");
    printf("Enter the choice:");
    scanf("%d",&choice);
    printf("Result: ");
    switch(choice)
    {
        case 1:
        printf("%d\n",no+no1);
        break;
        case 2:
        printf("%d\n",no-no1);
        break;
        case 3:
        printf("%d\n",no/no1);
        break;
        case 4:
        printf("%d\n",no*no1);
        break;
        case 5:
        printf("\n\nPlease wait...\n\nExitted successfully");
        exit(0);
        break;
        default:
        printf("INVALID CHOICE!\n");
        printf("ENTER AGAIN\n");
        main();
    }
    main();
    return 0;
}