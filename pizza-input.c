/*
Modified the original pizza bill calculator to now take user input.
*/

#include<stdio.h>

int main(void)
{
    int pizzas = 0;
    float totalCost = 0.0f;

    // set the given information to variables to use for calculations 
    // the cost per normal pizza
    float cost = 20.5;
	
    // 5% discount on the normal pizza makes the special
    // pizzas 95% of the normal pizza
    float discount = 0.95;
	
    // the 9.5% sales tax is added onto the total cost of
    // the discounted special pizzas
    float salesTax = 1.095;

    // reading information from the user through stdin
    // asks the user number of special pizzas for order,
    // saving the input into the pizzas variable
    printf("how many pizzas do you want: ");
    scanf("%d", &pizzas);

    // calculations to get the total bill for the given number of pizzas ordered
    // discount of 5% of the cost per normal pizza for the
    // cost per special pizza
    float specialCost = cost * discount;
	
    // total cost of discounted special pizzas
    float totalSpecialCost = specialCost * pizzas;
	
    // the 9.5% sales tax added onto the total cost of the
    // discounted special pizzas
    totalCost = totalSpecialCost * salesTax;

    // show the user their total bill through stdout
    // print the result to stdout for the user to see
    printf("Your total bill is: $%.2f\n", totalCost);

    return 0;
}
