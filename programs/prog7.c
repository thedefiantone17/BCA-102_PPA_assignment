// C Program to Find Grade of a Student Using Conditional Operator
#include <stdio.h>

int main()
{
    float subject_1, subject_2, subject_3, subject_4, subject_5;
    float total, average, percentage;
    char grade;

    printf("Enter the marks of five subjects::\n");
    scanf("%f%f%f%f%f", &subject_1, &subject_2, &subject_3, &subject_4, &subject_5);

    // It will calculate the Total, Average and Percentage
    total = subject_1 + subject_2 + subject_3 + subject_4 + subject_5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    // It will calculate the Grade
    grade = average >= 90 ? 'A' : (average >= 80 && average < 90 ? 'B' : (average >= 70 && average < 80 ? 'C' : (average >= 60 && average < 70 ? 'D' : 'E')));

    // It will produce the final output
    printf("\nThe Total marks is:  \t%.2f / 500.00\n", total);
    printf("\nThe Average marks is:\t%.2f\n", average);
    printf("\nThe Percentage is:   \t%.2f%%\n", percentage);
    printf("\nThe Grade is:        \t'%c'\n", grade);
    return 0;
}