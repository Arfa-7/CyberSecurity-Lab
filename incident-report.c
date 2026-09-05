#include<stdio.h>
int main(){
    float Hrs,AffectedSystems,RecoveryCost,TotalCost;
    char AnalystName[30],IncidentId[10];

    printf("Enter Incident ID:");
    scanf("%s",&IncidentId);
    printf("Enter Analyst Name:");
    scanf("%s",AnalystName);
    printf("Enter Number of Affected Systems:");
    scanf("%f",&AffectedSystems);
    printf("Enter the number of Recovery Cost:");
    scanf("%f",&RecoveryCost);
    printf("Enter Downtime Hours:");
    scanf("%f",&Hrs);

    TotalCost=AffectedSystems*RecoveryCost;
    printf("\n==============================");
    printf("\nSecurity Incident Report");
    printf("\n==============================");
    printf("\nIncident ID:%s",IncidentId);
    printf("\nAnalyst Name:%s",AnalystName);
    printf("\nAffected Systems:%.0f",AffectedSystems);
    printf("\nRecovery Cost:%.0f",RecoveryCost);
    printf("\nTotal Cost:%.f",TotalCost);
    printf("\nDowntime Hours:%.2f",Hrs);
    return 0;
}
