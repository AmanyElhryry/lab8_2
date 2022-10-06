#include <stdio.h>
#include <stdlib.h>
void find (int *arr, int size);
int main()
{
    int size;
    printf("Enter size of array ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ;i<size;i++){
        scanf("%d",&arr[i]);
    }

    find (arr,  size);
    return 0;
}
void find (int *arr, int size){
    int min =arr[0], max=arr[0];
   for(int i=0;i<size;i++)
   {
       if(arr[i]<min)
        min =arr[i];
        if(arr[i]>max)
        max =arr[i];
   }
    printf("Minmum is : %d\n",min);
   printf("Maximum is : %d",max);

}
