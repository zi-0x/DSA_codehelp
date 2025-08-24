/*You are given a positive integer ‘n’.
Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n).
*/
int floorSqrt(int n)
{
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    int ans=-1;
   while(low<=high){
       int square=mid*mid;
       if(square==n){
           return mid;
       }
       else if (square<n){
           ans=mid;
           low=mid+1;
       }
       else{
           
           high=mid-1;
       }
      mid=low+(high-low)/2;
   }
   return ans;
}