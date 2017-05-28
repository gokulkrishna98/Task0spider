//gokulkrishna 106116053
#include<iostream>
#include<conio.h>
#include<math.h>
int main()
 {  int arr[]={3,1,13,31,2};
    int n;
    n = sizeof(arr)/sizeof(arr[0]);
 	int i, k, j;
   for (i = 1; i < n; i++)
   {
       k=arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > k)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = k;
   }
   
   for(i=0;i<n;i++)
     {
	    std::cout<<arr[i]<<'\t';
     }
  return 0;   
 }
