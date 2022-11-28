#include <stdio.h>
// program to find marks of 5 subjects using nested if else statement

int main(int argc, char const *argv[])
{
    int phy, cchem, bio, math, computer;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d%d%d%d%d", &phy, &cchem, &bio, &math, &computer);
    percentage = (phy + cchem + bio + math + computer) / 5;
    printf("percentage = %.2f", percentage);

    if (percentage >= 90)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else if (percentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
