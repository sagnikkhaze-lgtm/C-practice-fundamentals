//shoping cart program

#include <stdio.h>

int main(void)
{
    char item[50];
    double price;
    int quantity;

    printf("What did you buy? ");
	fgets(item, sizeof(item),stdin);

    printf("How many did you buy? ");
    scanf("%d", &quantity);

    printf("What was the price? ");
	scanf("%lf", &price);

    printf("%i %s cost %.2f each. T otal: %.2f\n",quantity, item, price, quantity * price);

    
}
