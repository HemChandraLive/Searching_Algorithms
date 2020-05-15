#include<stdio.h>
#include<math.h>
int main()
{
    int array[10]={3,4,5,6,8,13,23,43,54,104};
    int key=104;
    int low=0;
    int high=9;
    int array_size=sizeof(array);
    int element_size=sizeof(array[0]);
    int total=array_size/element_size;
    printf("Total Elements in Array = %d",total);
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(array[mid]==key)
        {
            printf("Element found at %d",mid);
            return 1;
        }
        else if(array[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    printf("Element not found");
    return 0;
}