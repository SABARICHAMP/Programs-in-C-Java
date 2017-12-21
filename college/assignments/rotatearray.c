#include <stdio.h>
void leftRotatebyOne(int arr[], int n);
void leftRotate(int arr[], int d, int n)
{
  int i;
  for (i = 0; i < d; i++)
  leftRotatebyOne(arr, n);
}
 void leftRotatebyOne(int arr[], int n)
{
  int i, temp;
  temp = arr[0];
  for (i = 0; i < n-1; i++)
  arr[i] = arr[i+1];
  arr[i] = temp;
}
 
void printArray(int arr[], int size)
{
  int i;
  for(i = 0; i < size; i++)
  printf("%d ", arr[i]);
}
 
int main()
{
   int arr[] = {10, 20, 30, 40, 50};
   leftRotate(arr, 2, 5);
   printArray(arr, 5);
   getchar();
   return 0;
}
