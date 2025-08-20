//numbers are present twice and one number is present only once. Find and return that number which is unique in the array/list.

int findUnique(int *arr, int size)
{
   int ans=0;
   for (int i=0;i<size;i++){
       ans=ans^arr[i];
   }
   return ans;
}