#include <stdio.h> 
int main()
{
    int roll_no,marks;
    char name [15];
    char branch [20];
    printf("Enter the name of the student here :");
    scanf("%s",name);
    printf("Enter the branch of the student here :");
    scanf("%s",branch);
    printf("Enter the roll no of the student here :");
    scanf("%d",&roll_no);
    printf("Enter the marks of the student here :");
    scanf("%d",&marks);
    printf("\n The name of the student is : %s",name);
    printf("\n The branch of the student is : %s",branch);
    printf("\n The roll no. of the student is : %d",roll_no);
    printf("\n The marks of the student is : %d",marks);
    return 0;
}