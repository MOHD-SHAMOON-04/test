#include <stdio.h>
int num = 10;
struct student
{
    int roll_no;
    char marks;
} stud[10];

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf(",%c,\n",stud[i].marks);
    }
    //a structure is initialised with 0 for integers and null for characters
    return 0;
}