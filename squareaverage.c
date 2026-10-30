// #include <stdio.h>
// int main()
// { 
//     int a,b,c;
//     float average;
//     printf("welcome to the 2nd college program in C language.");
//     printf("\nEnter the number here to get the square: ");
//     scanf("%d",&a);
//     printf("\nThe square of the number %d is : %d",a,a*a);
//     printf("\nNow enter the two numbers to get their average :");
//     scanf("%d \n %d",&b,&c);
//     printf("\nThe average of these two numbers is : %.4f",average=(b+c)/2 );
//     printf("\nThis is the end of the program.");
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int d,t;
//     printf("Enter the distance travelled by the car here:");
//     scanf("%d",&d);
//     printf("Enter the time taken by the car to travel the distance here :");
//     scanf("%d",&t);
//     int speed=d/t;
//     printf("The speed of the car is : %d",speed);
//     return 0;
// }
// #include <stdio.h>
// int add(int a ,int b)
// {
//     int sum=a+b;
//     printf("The sum of the two no. is : %d",sum);
//     return sum;
// }
// int sub(int a,int b)
// {
//     int sub=a-b;
//     printf("\n The difference of these two numbers is :%d",sub);
//     return 0;
// }
// int main()
// {
//     add(5,5);
//     sub(10,5);
// return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float a,b,c,s;
//     printf("Enter the first side of the triangle : ");
//     scanf("%f",&a);
//     printf("Enter the second side of the triangle : ");
//     scanf("%f",&b);
//     printf("Enter the third side of the triangle : ");
//     scanf("%f",&c);
//     s=(a+b+c)/2;
//     printf("The semi perimeter of the triangle is :%f",s);
//     float area=pow((s*(s-a)*(s-b)*(s-c)),0.5);
//     printf("\n The area of the triangle using the heron's formula is :%f",area);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float a,b,c,d,root_1,root_2;
//     printf("Enter the value of a here : ");
//     scanf("%f",&a);
//     printf("Enter the value of b here : ");
//     scanf("%f",&b);
//     printf("Enter the value of c here : ");
//     scanf("%f",&c);
//     d=(b*b-4*a*c);
//     if(d<0)
//     {
//         printf("The quadratic equation has no real roots !");
//     }
//     else{
//     root_1=(-b+sqrt(d))/(2*a);
//     root_2=(-b-sqrt(d))/(2*a);
//     printf("The first root of the equation is : %f",root_1);
//     printf("\n The second root of the equation is : %f",root_2);
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float x1,y1,x2,y2,d;
//     printf("Enter the value of x1 here :");
//     scanf("%f",&x1);
//     printf("Enter the value of y1 here :");
//     scanf("%f",&y1);
//     printf("Enter the value of x2 here :");
//     scanf("%f",&x2);
//     printf("Enter the value of y2 here :");
//     scanf("%f",&y2);
//     d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
//     printf("The distance between the two given points are :%f",d);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int average,n;
    int i=1 ,sum=0;
    printf("Enter the value of n here to get the average till the n terms :");
    scanf("%d",&n);
    while(i<=n)
    {
       sum+=i;
       i++; 
    }
    average = sum/n;
    printf("The average till the first %d is : %d",n,average);
return 0;
}