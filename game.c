#include<stdio.h>
int main()
{
    int i;
    int a1,a2,a3,a4,a5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int tota1,tota2,tota3;
    printf("Welcome to the game\n\n");
    printf("> press 7 to start the game \n");
    printf("> press 0 to stop the game\n");
    scanf("%d, &i");
    
    if (i==7)
    {
        printf("the game has started\n\n");
    }
    else if (i==0)
    {
        printf("the game has ended\n\n");
    }
    else{
        printf("invalid\n");
    }
    if (i==7)
    {
        printf("1) Which one is the largest courtry\n\n");
        printf("1) india\n");
        printf("2) us\n");
        printf("3) china\n");
        printf("4) russia\n");

        printf("enter the answer :");
        scanf("%d, &a1");
    }
    if (a1==2)
    {
        printf("correct answer\n");
        point5 = 5;
        printf("yor have scored %d point\n", point1);            
    }
    else{
        printf("Worong answer\n");
        point01 =0;
        printf("you have scored %d point\n", point01);
    }
    printf("2)  What is the largest continent in the world?\n\n");
    printf("1)  Asia\n");
    printf("2)  Africa\n");
    printf("3)  North America\n");
    printf("4)  Antarctica, \n");

    printf("enter the answer :");
    scanf("%d, &a2");
if (a2==4)
{
    printf("correct answer\n");
    point5 = 5;
    printf("yor have scored %d point\n", point2);            
}
else{
    printf("Worong answer\n");
    point02 =0;
    printf("you have scored %d point\n", point02);
}
printf("3) Which planet is closest to the sun?\n\n");
printf("1) Mercury\n");
printf("2) Earth\n");
printf("3) Jupiter\n");
printf("4) Neptune\n");

printf("enter the answer :");
scanf("%d, &a3");

if (a3==2)
{
printf("correct answer\n");
point5 = 5;
printf("yor have scored %d point\n", point3);            
}
else{
printf("Worong answer\n");
point03 =0;
printf("you have scored %d point\n", point03);
}
printf("3) Which planet is closest to the sun?\n\n");
printf("1) Mercury\n");
printf("2) Earth\n");
printf("3) Jupiter\n");
printf("4) Neptune\n");

printf("enter the answer :");
scanf("%d, &a4  ");

if (a4==2)
{
printf("correct answer\n");
point5 = 5;
printf("yor have scored %d point\n", point4);            
}
else{
printf("Worong answer\n");
point04 =0;
printf("you have scored %d point\n", point04);
}
}