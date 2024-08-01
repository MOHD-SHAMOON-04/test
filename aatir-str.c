// #include <stdio.h>
// int num = 10;
// struct student
// {
//     int roll_no;
//     char marks;
// } stud[10];

// int main()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         printf(",%c,\n",stud[i].marks);
//     }
//     //a structure is initialised with 0 for integers and null for characters
//     return 0;
// }
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter number of element in an array : ");
    scanf("%d",&n);
    int arr[n];
    //taking input
    printf("\nEnter elements of an array :\n");
    for(i=0;i<n;i++){
        printf("ENTER Elememts at %d : ",i);
        scanf("%d",&arr[i]);
    }
    //printing the array
    printf("Elememts of the array are : \n");
    for ( i = 0; i < n; i++)
    {
        printf("Elememts at %d : %d\n",i,arr[i]);
    }
    return 0;
}