/*
Calculates if user is on/under/below budget.
*/

#include<stdio.h>

int main(void)
{
    // budget variable holds user's entered budget
    float budget = 0.0;
    // tax variable holds user's entered sales tax rate
    float tax = 0.0;
    // orderCost variable holds user's current purchase order cost
    float orderCost = 0.0;

    // value variable keeps track of the number of variables entered
    int value = 0;
    // itemCost variable is a temporary variable that holds the cost
    // for a specific item entered in the while loop
    float itemCost = 0.0;
    // price, number, and discount variables are temporary variables
    // used to calculate the itemCost for that item and add the cost to
    // the orderCost variable
    float price = 0.0;
    int number = 0;
    float discount = 0.0;

    // reading information from user through stdin
    // asks user for the budget and the sales tax rate, saving the
    // entered values into the budget and tax variables
    printf("please enter the budget and sales tax rate as a percentage,\n");
    printf("separated by whitespace: ");
    scanf("%f %f", &budget, &tax);

    // calculates the budget according to the budget and sales
    // tax entered by user and prints out the result to stdout
    float totalBudget = budget - (budget * (tax / 100));
    printf("Your total budget is: %.2f\n\n", totalBudget);

    // reading more information from user through stdin
    // asks user for the price of the item, the number purchased, and
    // the discount rate at which the item was purchased at
    printf("please enter the price of the item, the number purchased,\n");
    printf("and the discount rate at which the item was purchased at\n");
    printf("as a percentage; separated by whitespace (EOF to exit): ");
    value = scanf("%f %i %f", &price, &number, &discount);

    // loops until the EOF character is entered, then computes the
    // total cost of the order and compares to the budget
    while (value == 3)
    {
        // calculates the cost for the specific item and adds the result to
        // the orderCost variable
        itemCost = (price * number) - ((price * number) * (discount / 100));
        orderCost+=itemCost;

        // asks user for the price of the item, the number purchased, and
        // the discount rate at which the item was purchased at
        printf("please enter the price of the item, the number purchased,\n");
        printf("and the discount rate at which the item was purchased at\n");
        printf("as a percentage; separated by whitespace (EOF to exit): ");
        value = scanf("%f %i %f", &price, &number, &discount);
    }

    // printing information to user through stdout
    // compares the total cost of the purchase order to the initial budget,
    // prints out the corresponding amount of money on/over/under budget
    if (totalBudget == orderCost)
    {
        printf("\nYou Are On Budget. Good Job!");
    }
    else if (totalBudget > orderCost)
    {
        printf("\nYou Are Under Budget, by %.2f dollars", (totalBudget - orderCost));
    }
    else
    {
        printf("\nYou Are Over Budget, by %.2f dollars", (orderCost - totalBudget));
    }

    return 0;
}
