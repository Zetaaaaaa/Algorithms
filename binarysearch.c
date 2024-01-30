#include<stdio.h>
int binary_search(int array[], int low, int high , int key)
{
    if(high >=low){
        int mid = (low + (high-low))/2;
    if (array[mid]==key)
    return mid;
    else if(array[mid]>key)
       return binary_search(array, low, mid-1, key);
    else if(array[mid]<key)
        return binary_search(array, mid+1, high, key);
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int array[n];
    int i;
    printf("Enter array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    int key;
    printf("Enter search element : ");
    scanf("%d", &key);
    int found = binary_search(array, 0, n-1, key);
    if(found==-1)
    {
        printf("Not found");
    }
    else
    {
        printf("Found at position = %d", found);
    }
    return 0;
}
