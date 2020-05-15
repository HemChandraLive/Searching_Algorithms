#include<stdio.h>
int main()
{
    int array[10]={3,4,5,3,4,43,23,43,54,34};
    int key=5;
    for(int i=0;i<10;i++)
    {
        if(key==array[i])
        {
            printf("Element found =%d location",i);
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}