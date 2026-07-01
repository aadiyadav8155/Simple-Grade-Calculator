#include <stdio.h>

int main() {
    int score;
    char grade;

    // Input
    printf("Enter your score: ");
    scanf("%d", &score);

    // Validate input
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
        return 0;
    }

    // Grade calculation using ternary operator
    grade = (score >= 85) ? 'A' :
            (score >= 70) ? 'B' :
            (score >= 55) ? 'C' :
            (score >= 40) ? 'D' : 'F';

    printf("Your grade is %c. ", grade);

    // Additional comments using switch-case
    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;

        case 'B':
            printf("Well done.\n");
            break;

        case 'C':
            printf("Good job.\n");
            break;

        case 'D':
            printf("You passed, but you could do better.\n");
            break;

        case 'F':
            printf("Sorry, you failed.\n");
            break;

        default:
            printf("Invalid grade.\n");
    }

    // Eligibility check using if-else
    if (grade >= 'A' && grade <= 'D') {
        printf("Congratulations! You are eligible for the next level.\n");
    } else {
        printf("Please try again next time.\n");
    }

    return 0;
}