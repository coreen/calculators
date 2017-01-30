/*
Calculates how long it will take you to pay off a loan
based on the rate and monthly payment amount.
*/

#include<stdio.h>

// initializes the function
int loanPeriod(float, float, float);

int main(void)
{
    // loan variable holds the user entered loan amount
    float loan = 0.0;
    // rate variable holds the user entered interest rate
    float rate = 0.0;
    // monthly variable holds the user entered monthly payment
    float monthly = 0.0;
    // result variable holds the result of the loanPeriod function
    int result = 0;

    // reading information from the user through stdin
    // asks the user for the specified numbers
    printf("please enter the total amount of your loan, the interest\n");
    printf("rate as a percentage for the loan, and the monthly amount\n");
    printf("you wish to pay (seperate the numbers by a space each): ");
    scanf("%f %f %f", &loan, &rate, &monthly);

    // calculate the result using the loanPeriod function
    result = loanPeriod(loan, rate, monthly);

    // printing information to the user through stdout
    // print the resulting number of years from the loanPeriod function
    printf("the number of years needed to pay off your loan is: %i\n", result);

    return 0;
}

int loanPeriod(float totalAmount, float interestRate, float monthlyAmount) {
    // convert the percentage interest rate given to a decimal
    float interest = interestRate / 100;
    // calculate the monthly interest rate
    float monthlyInterest = interest / 12;

    float total = totalAmount + (totalAmount * monthlyInterest);
    printf("\nstarting principal = %f\n\n", total);
    int counter = 0;

    while (total > 0) {
        printf("monthly principal you owe = %f\n", total);
        total-=monthlyAmount;
        counter++;
        total = total + (total * monthlyInterest);
    }

    printf("\nnumber of months required = %i\n\n", counter);

    return counter / 12;
}
