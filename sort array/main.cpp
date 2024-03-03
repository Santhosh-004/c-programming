#include <iostream>

void sortArray(int arr[], int size);

int main()
{

   int arr[] = {10, 5, 4, 6, 8, 3, 1, 2, 9, 7};
   int size = sizeof(arr) / sizeof(arr[0]);

   sortArray(arr, size);

   return 0;
}

void sortArray(int arr[], int size)
{
   for (int i=0; i<size-1; i++) {
      for (int j=0; j<size-i-1; j++) {
         if (arr[j] > arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }

   for (int i=0; i<size; i++) {
       std::cout << arr[i] << " ";
   }
}
