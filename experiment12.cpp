#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int la = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n && arr[l] > arr[la])
        la = l;
    if (r < n && arr[r] > arr[la])
        la = r;
    if (la != i){
        swap(arr[i], arr[la]);
        heapify(arr, n, la);
    }
}
void heapsort(int arr[],int n){
for(int i=n/2-1;i>=0;i--){
    heapify(arr,n,i);
}
//one by one extract an element from heap
for(int i=n-1;i>=0;i--){
    //move current root yo end
    swap(arr[0],arr[i]);
    heapify(arr,i,0);
}
}

void print(int arr[],int n){
cout<<"Array is\n";
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
}
int main(){
    int arr[10];
    int n;
    cout<<"enter n\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    heapsort(arr,n);
    print(arr,n);
}
