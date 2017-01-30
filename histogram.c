/*
Histogram of the alphas (letter or digit), digits (0 to 9), punctuation,
and whitespace(\t, \v, \f, \r, or \n) characters inputed by the user.
*/

#include<stdio.h>
#include <ctype.h>

void printTally(int);

int main(void)
{
    // value variable keeps track of the current input character
    int value = 0;
    // counter variables keep track of which type of variable was inputed
    int alpha = 0;
    int digits = 0;
    int punct = 0;
    int spaces = 0;

    // reading information from the user through stdin
    // asks the user for any number of characters until reads the EOF
    printf("please enter any number of characters (EOF to quit): ");
    value = getchar();
    while (value != EOF) {
        if (isalpha(value)) {
            alpha++;
        } else if (isdigit(value)) {
            digits++;
        } else if (ispunct(value)) {
            punct++;
        } else if (isspace(value)) {
            spaces++;
        }
        value = getchar();
    }

    // printing information to the user through stdout
    // print the corresponding Histogram of each type to the user
    printf("alpha:  ");
    printTally(alpha);
    printf("digits: ");
    printTally(digits);
    printf("punct:  ");
    printTally(punct);
    printf("spaces: ");
    printTally(spaces);

    return 0;
}

void printTally(int number) {
    int x = 0;
    for (x = 0; x < number; x++) {
        printf("|");
    }
    printf("  %i\n", number);
}
