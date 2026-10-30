// #include <stdio.h> 
// int main()
// {
//     int roll_no,marks;
//     char name [15];
//     char branch [20];
//     printf("Enter the name of the student here :");
//     scanf("%s",name);
//     printf("Enter the branch of the student here :");
//     scanf("%s",branch);
//     printf("Enter the roll no of the student here :");
//     scanf("%d",&roll_no);
//     printf("Enter the marks of the student here :");
//     scanf("%d",&marks);
//     printf("The name of the student is : %s",name);
//     printf("The branch of the student is : %s",branch);
//     printf("The roll no. of the student is : %d",roll_no);
//     printf("The marks of the student is : %d",marks);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int marks[2][2]={{99,100},{98,96}};
    printf("The 1st student's marks are : %d and %d",marks[0][0],marks[0][1]);
    return 0;
}