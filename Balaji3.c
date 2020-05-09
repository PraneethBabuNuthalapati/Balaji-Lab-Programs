#include <stdio.h> 
 int main() 
{ 
  int arr[100], g, f, h, s; 
  printf("Enter number of elements\n"); 
  scanf("%d", &g); 
  printf("Enter %d integers\n", g); 
 for (f = 0; f < g; f++) 
    scanf("%d", &arr[f]); 
  for (f = 0 ; f < g - 1; f++) 
  { 
    for (h = 0 ; h < g - f - 1; h++) 
    { 
      if (arr[h] > arr[h+1])  
      { 
        s   = arr[h]; 
        arr[h]   = arr[h+1]; 
        arr[h+1] = s; 
      } 
    } 
  } 
 
  printf("Sorted list in ascending order:\n"); 
  for (f = 0; f < g; f++) 
{
     printf("%d\n", arr[f]); 
 } 
 return 0; 
}