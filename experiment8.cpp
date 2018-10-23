#include <iostream>
#include <string>
#include <vector>
using namespace std;
void printArray(int arr[], int len) {
  for (int i = 0; i < len; i++)
    cout << arr[i] << " ";

  cout << "\n";
}
void insertionsort(int arr[], int N) {
  for(int i = 1; i < N; i++) {
    int j = i - 1;
    int temp = arr[i];

    while(j >= 0 && temp < arr[j]) {
      arr[j + 1] = arr[j];
      j--;;
    }

    arr[j + 1] = temp;
    cout << "After pass " << i << "  : " ;
    //Printing array after pass
    printArray(arr, N);
  }
}
int main() {
  int arr[10];
  int len;
  cin>>len;
  for(int i=0;i<len;i++){
    cin>>a[i];
  }
  insertionsort(arr, len);
  return 0;
}
