#include<stdio.h>
int main(){
    int IncidentId;
    float Hrs,AffectedSystems,RecoveryCost,TotalCost;
    char AnalystName[30];

    printf("Enter Incident ID:");
    scanf("%d",&IncidentId);
    printf("Enter Analyst Name:");
    scanf("%s",AnalystName);
    printf("Enter Number of Affected Systems");
    scanf("%f",&AffectedSystems);
    printf("Enter the number of Recovery Cost");
    scanf("%f",&RecoveryCost);
    printf("Enter Downtime Hours");
    scanf("%f",&Hrs);

    TotalCost=AffectedSystems*RecoveryCost;

    printf("Security Incident Report");
    printf("\nIncident ID:%d",IncidentId);
    printf("\n Analyst Name:%s",AnalystName);
    printf("\nAffected Systems:%f",AffectedSystems);
    printf("\n Recovery Cost:%f",RecoveryCost);
    printf("Total Cost:%f",TotalCost);
    printf("\n Downtime Hours:%f",Hrs);
    return 0;
}
