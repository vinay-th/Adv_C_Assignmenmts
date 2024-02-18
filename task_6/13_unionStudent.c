#include <stdio.h>
#include <string.h>

union student
{
    int roll;
    char name[10];
    int marks;
} st;

int main()
{

    printf("Enter name of the student: ");
    scanf("%s", st.name);

    printf("Enter the roll no.: ");
    scanf("%d", &st.roll);

    printf("Enter the marks: ");
    scanf("%d", &st.marks);

    printf("\nThe details of the student are:\n");
    printf("Name: %s\n", st.name);
    printf("Roll no.: %d\n", st.roll);
    printf("Marks: %d\n", st.marks);
    printf("\n");

    return 0;
}
