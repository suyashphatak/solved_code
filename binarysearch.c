#include<stdio.h>
#include<math.h>
int binarySearch(int*,int,int);
int main()
{
   int target,numsSize;
   printf("Enter\n");
   scanf("%d",&numsSize);

   int arr[numsSize];

   for(int i=0; i<numsSize; i++)
   {
      scanf("%d",&arr[i]);
   }

   printf("Enter target\n");
   scanf("%d",&target);

   printf("%d",binarySearch(arr,numsSize,target));

}
int binarySearch(int* arr,int numsSize,int target)
{
   int mid,low = 0 ,high = numsSize - 1;

  while(low <= high)
   {  
      mid = low + (high - low) / 2;
      if(arr[mid] == target)
      {
         return mid; 
      }
      if(target < arr[mid])
      {
         high = mid - 1;

      }
      if(target > arr[mid])
      {
         low = mid + 1;
      }
   
   }
   return -1;
}