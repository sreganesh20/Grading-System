#include <stdio.h>
int main()
{
    int marks;
    char grade;
    printf("Enter the marks by the student: ");
    scanf("%d",&marks);
    if(marks>=85 && marks<=100)
    {
        grade='A';
    }
    else if(marks>=70 && marks<85)
    {
        grade='B';
    }
    else if(marks>=55 && marks<70)
    {
        grade='C';
    }
    else if(marks>=40 && marks<55)
    {
        grade='D';
    }
    else if(marks<40)
    {
        grade='F';
    }
    else
    {
        printf("\nEntered marks are wrong!");
    }
    printf("\nThe grade %c is given for %d marks",grade,marks);
    return 0;
}
