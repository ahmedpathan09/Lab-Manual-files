#include<stdio.h>
int main()
{
    float maths, physics, chemistry, total, average;
    printf("Enter marks for subject maths");
    scanf("%f",&maths);
    printf("enter marks for subject physics");
    scanf("%f", &physics);
    printf("enter marks for subject chemistry");
    scanf("%f", &chemistry);
    total= maths+chemistry+physics;
    printf("total marks of student in PCM:%f\n",total);
    average= total/3;
    printf("average marks of student in PCM:%f\n",average);
    if(average>= 50)
    {
        printf("student if eligible for admission\n");
    }
    else
    {
        printf("student is not eligible for admission\n");
    }
    return 0;
}
