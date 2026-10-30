#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character here to get the ASCII value :");
    scanf("%c",&ch);
    printf("\nThe ASCII value of %c is : %d",ch,ch);
    printf("\nThe size of the int is : %lu\n", sizeof(int));
    printf("The size of the float is %lu\n",sizeof(float));
    printf("The size of the double is %lu\n",sizeof(double));
    printf("The size of the char is %lu",sizeof(char));
    return 0;
}