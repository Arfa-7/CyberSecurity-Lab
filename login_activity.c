#include <iostream>

int main() {
    float SuccesfulAttempts,FailedAttempts,TotalAttempts,FailedPer,SuccesfulPer;
    printf("Enter Total Number of Attempts:");
    scanf("%f",&TotalAttempts);
    printf("Enter Succesful Login Attempts:");
    scanf("%f",&SuccesfulAttempts);
    printf("Enter Failed Login Attempts:");
    scanf("%f",&FailedAttempts);
    FailedPer=(FailedAttempts/TotalAttempts)*100;
    SuccesfulPer=(SuccesfulAttempts/TotalAttempts)*100;
    printf("\nSuccesful Login Percentage:%2f",SuccesfulPer);
    printf("\nFailed Login Percentage:%2f",FailedPer);
    return 0;
}
