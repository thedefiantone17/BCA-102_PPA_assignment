#include<stdio.h>
// # program to calculate simple interest

int simpleInterest(int principle, int time, int rate){
    return (principle * rate * time) / 100;
}

int main(int argc, char const *argv[])
{
    float P, R, Time, Simp;
    printf("Enter the principle (amt.): ");
    scanf("%f", &P);
    printf("Enter the rate of interest: ");
    scanf("%f", &R);
    printf("Enter the time period: ");
    scanf("%f", &Time);

    // using simple interest function:
    Simp = simpleInterest(P, R, Time);

    printf("\nyour Simple interest is: %f", Simp);

    return 0;
}
