/*
Calculates the total cost of a motorcycle road trip.
*/

#include<stdio.h>

// initializes the functions
float galReg(float);
void totalCost(int);

int main(void)
{
    // distance variable holds user's requested distance to travel
    float distance = 0.0;
    // days variable holds user's requested number of days for travel
    int days = 0;

    // reading information from the user through stdin
    // asks the user for the specified numbers
    printf("please enter the distance you wish to travel: ");
    scanf("%f", &distance);

    // printing information to the user through stdout
    // print the resulting number from the galReg function
    printf("%.1f miles will take %.1f gallons\n\n", distance, galReg(distance));

    // reading information from the user through stdin
    // asks the user for the specified numbers
    printf("please enter the number of days you wish to travel: ");
    scanf("%i", &days);

    // calls the totalCost function to print out the range of costs
    totalCost(days);

    return 0;
}

// returns the number of gallons required for traveling
// a specific distance
float galReg (float distance) {
    // constant for number of miles per gallon
    const float milPerGal= 50.0;

    float result = (distance / milPerGal);

    return result;
}

// prints the range of total cost in dollars of the whole trip
void totalCost (int days) {
    // constants for min and max mile range, food cost, fuel
    // cost, and cost to operate the motorcycle/car
    const float minAvg = 300.0;
    const float maxAvg = 500.0;
    const float food = 75.0;
    const float fuelPerGal = 3.62;
    const float operate = 0.76;

    // minimum and maximum variables hold the resulting
    // calculations with the minAvg and maxAvg miles
    float minimum = 0.0;
    float maximum = 0.0;

    // calculates the minimum total cost for the trip
    // calculates the number of gallons needed
    float minGallons = galReg(minAvg);
    // calculates the total cost of fuel based on gallons
    float minFuelCost = fuelPerGal * minGallons;
    // calculates the total cost to operate the motorcycle/car
    float minOperateCost = operate * minAvg;
    // set the minimum variable to be the resulting cost
    minimum = food + minFuelCost + minOperateCost;

    // calculates the maximum total cost for the trip
    // calculates the number of gallons needed
    float maxGallons = galReg(maxAvg);
    // calculates the total cost of fuel based on gallons
    float maxFuelCost = fuelPerGal * maxGallons;
    // calculates the total cost to operate the motorcycle/car
    float maxOperateCost = operate * maxAvg;
    // set the minimum variable to be the resulting cost
    maximum = food + maxFuelCost + maxOperateCost;

    // printing information to the user through stdout
    // print the resulting numbers from the calculations
    // for the range of costs for one day
    printf("your range of costs per day are:\n");
    printf("minimum cost per day = $%.2f\n", minimum);
    printf("maximum cost per day = $%.2f\n\n", maximum);
    // print the resulting numbers from the calculations for
    // the range of costs for the specified number of days
    printf("your total cost range for %i days is:\n", days);
    printf("minimum total cost = $%.2f\n", minimum * days);
    printf("maximum total cost = $%.2f\n\n", maximum * days);
}
