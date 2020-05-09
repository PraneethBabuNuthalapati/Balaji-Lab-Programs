#include<stdio.h> 
int main()
{ 
   int i, j, c, t, no[20]; 
   printf("Enter how many numbers you want: "); 
   scanf("%d",&c); 
   printf("Enter %d elements: ", c);  
   for(i=0;i<c;i++) 
  {
      scanf("%d",&no[i]); 
   }
   for(i=1;i<c;i++)
  { 
      t=no[i]; 
      j=i-1; 
      while((t<no[j])&&(j>=0))
    { 
         no[j+1]=no[j]; 
         j=j-1; 
      } 
      no[j+1]=t; 
   } 
 
   printf("Order of Sorted elements: "); 
   for(i=0;i<c;i++) 
      printf(" %d",no[i]); 
 
   return 0; 
}