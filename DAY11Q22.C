/*Write a program to find profit or loss percentage given cost price and selling price*/

#include <stdio.h>

int main()
{
    int cp, sp, profit, loss, percent;

    printf("Enter Cost Price: ");
    scanf("%d", &cp);

    printf("Enter Selling Price: ");
    scanf("%d", &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        percent = (profit / cp) * 100;

        printf("Profit = %d\n", profit);
        printf("Profit Percentage = %d%%", percent);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        percent = (loss / cp) * 100;

        printf("Loss = %d\n", loss);
        printf("Loss Percentage = %d%%", percent);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}