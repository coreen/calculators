/*
Calculates the cost of pizzas for a party.
*/

#include<stdio.h>

int main(void)
{
    // set the given information to variables to use for calculations 
    // number of special pizzas for the order
    int pizzas = 25;
    // the cost per normal pizza
    float cost = 20.5;
    // 5% discount on the normal pizza makes the special
    // pizzas 95% of the normal pizza
    float discount = 0.95;
    // the 9.5% sales tax is added onto the total cost of
    // the discounted special pizzas
    float salesTax = 1.095;

    // calculations to get the total bill for the given number of pizzas ordered
    // discount of 5% of the cost per normal pizza for the
    // cost per special pizza
    float specialCost = cost * discount;
    // total cost of discounted special pizzas
    float totalCost = specialCost * pizzas;
    // the 9.5% sales tax added onto the total cost of the
    // discounted special pizzas
    float result = totalCost * salesTax;

    // show the user their total bill through stdout
    // print the result to stdout for the user to see
    printf("Your total bill is: $%.2f\n", result);

    return 0;
}
