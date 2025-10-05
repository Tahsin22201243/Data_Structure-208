#include <stdio.h>
struct customer //Using Structure
{
    char name[50];
    int designation;
};

int main()
{
    int N, i, studentCount = 0, facultyCount = 0;
    struct customer customers[100];

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%s %d", customers[i].name, &customers[i].designation);
        if (customers[i].designation == 0)
        {
            studentCount++;
        }
        else
        {
            facultyCount++;
        }
    }

    printf("Faculty: %d\n", facultyCount);
    for (i = 0; i < N; i++)
    {
        if (customers[i].designation == 1)
        {
            printf("%s\n", customers[i].name);
        }
    }

    printf("Student: %d\n", studentCount);
    for (i = 0; i < N; i++)
    {
        if (customers[i].designation == 0)
        {
            printf("%s\n", customers[i].name);
        }
    }

    return 0;
}


