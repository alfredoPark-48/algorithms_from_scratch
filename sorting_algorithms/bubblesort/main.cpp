#include <iostream>
using namespace std;

int main()
{
  int arr[10] = {5, 34, 2, 45, 29, 89, 12, 4, 15, 100};
  int size = sizeof(arr)/sizeof(arr[0]);
  bool sorted = false;

  // Printing before sorting
  printf("Before sorting: ");
  for (int i=0; i<size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  for (int i=0; i<size; i++)
  {
    if (!sorted)
    {
      sorted = true;
      for (int j=0; j<size-1; j++)
      {
        if (arr[j] > arr[j+1])
        {
          int temp = arr[j+1];
          arr[j+1] = arr[j];
          arr[j] = temp;
          sorted = false;
        }
      }
    }
  }

  // Printing after sorting
  printf("After bubble sort: ");
  for (int i=0; i<size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
