#include <iostream>
using namespace std;

int main()
{
  int arr[10] = {32, 64, 21, 24, 18, 9, 3, 90, 231, 100};
  int size = sizeof(arr)/sizeof(arr[0]);
  
  // Printing before sorting
  printf("Before sorting: ");
  for (int i=0; i<size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  
  // Selection sort
  for (int i=0; i<size-1; i++)
  {
    int lowestIndex = i;
    for (int j=i+1; j<size; j++)
    {
      if (arr[lowestIndex] > arr[j])
      {
        lowestIndex = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[lowestIndex];
    arr[lowestIndex] = temp;
  }

  // Printing after sorting
  printf("After selection sort: ");
  for (int i=0; i<size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
