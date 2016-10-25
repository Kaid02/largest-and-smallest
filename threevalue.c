/*
Student Name : Kabir Shreshta
Subject : Programming Fundamental
Lab No. : 08
Program : Write a program that takes three input as integer from keyboard then print sum ,the average, the product,smallest and largest of these numbers.
Date  : 2016-10-25
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
    int main(){

    int a,b,c,sum,product,average,largest,smallest;

    printf("\nEnter the first number :\n");
    scanf("%d",&a);

    printf("\nEnter the second number :\n");
    scanf("%d",&b);

    printf("\nEnter the third number :\n");
    scanf("%d",&c);

    sum=a+b+c;
    printf("\nThe sum of three number is:%d\n",sum);

    product=a*b*c;
    printf("\nThe product of three number is:%d\n",product);

    average=(a+b+c)/3;
    printf("\nThe average of three number is:%d\n",average);

    if(a>b&&a>c)
        printf("\nThe largest number is:%d\n",a);
    else if (b>a&&b>c)
        printf("\nThe largest number is:%d\n",b);
    else if (c>a&&c>b)
        printf("\nThe largest number is:%d\n",c);

     if (a<b&&a<c)
         printf("\nThe smallest number is :%d\n",a);
     else if (b<a&&b<c)
         printf("\nThe smallest number is:%d\n",b);
     else if (c<a&&c<b)
         printf("\nThe smallest number is:%d\n",c);

     (a>=b&&a>=c)?printf("\na is largest\n%d"):(b>=a&&a>=c)?printf("\nb is largest\n%d"):printf("\nc is largest\n%d");

     (a<=b&&a<=c)?printf("\na is smallest\n%d"):(b<=a&&a<=c)?printf("\nb is smallest\n%d"):printf("\nc is smallest\n%d");

    getch();

    }
