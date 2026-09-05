#include <iostream>

int main() {
    int StdID,Quiz,Assign,Project,TotalLab,AcademicScore;
    float CompLab,CompLabPer;
    char StdN[30];
    printf("Enter Student ID:");
    scanf("%d",&StdID);
    printf("Enter Student Name:");
    scanf("%s",&StdN);
    printf("Enter Number of Completed Lab:");
    scanf("%f",&CompLab);
    printf("Enter Total Number Of Labs:");
    scanf("%d",&TotalLab);
    printf("Enter the Quiz Marks:");
    scanf("%d",&Quiz);
    printf("Enter the Assignmet Marks:");
    scanf("%d",&Assign);
    printf("Enter the Project Marks:");
    scanf("%d",&Project);
    CompLabPer=(CompLab/TotalLab)*100;
    AcademicScore=Quiz+Assign+Project;
    printf("The Lab Completion Percentage=%.2f",CompLabPer);
    printf("\nThe Total Academic Score=%d",AcademicScore);
    return 0;
}
