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
    
    return 0;
}
///////////////////////////////////////////////////////////////
//
/*
while (choice != 4)
    {
        printf("MENU:\n1. add details\n2.print by roll\n3.topper\n4.exit\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("enter ROLL NO. of student: ");
            scanf("%d", &stud[index].roll_no);
            printf("enter MARKS of student: ");
            scanf("%d", &stud[index].marks);
            index++;
            prt_table(index);
        }
        else if (choice == 2)
        {
            int temp;
            printf("enter ROLL NO. to be searched: ");
            scanf("%d", &temp);
            for (int i = 0; i <= index; i++)
            {
                if (temp == stud[i].roll_no)
                {
                    printf("student found\n");
                    prt_details(i);
                    break;
                }
            }
        }

        else if (choice == 3)
        {
            int top_ind = 0;
            int temp = stud[0].marks;
            for (int i = 0; i <= index; i++)
            {
                if (temp < stud[i].marks)
                {
                    temp = stud[i].marks;
                    top_ind = i;
                }
            }
            printf("student found\n");
            prt_details(top_ind);
        }
        else if (choice == 4)
        {
            printf("exitt!");
            break;
        }
    }

    */