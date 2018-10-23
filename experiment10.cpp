//it uses external sorting and divide partitioning strategy
//complexity O(n*log n)
#include<iostream>
using namespace std;
#define max 10

void merging(int a[],int low, int mid, int high) {
   int i,j,k;
int b[max];
   for(i = low, j = mid + 1, k = low; i <= mid && j <= high; k++) {
      if(a[i] <= a[j])
         b[k] = a[i++];
      else
         b[k] = a[j++];
   }

   while(i <= mid)
      b[k++] = a[i++];

   while(j <= high)
      b[k++] = a[j++];

   for(i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int a[],int low, int high) {
   int mid;

   if(low < high) {
      mid = (low + high) / 2;
      sort(a,low, mid);
      sort(a,mid+1, high);
      merging(a,low, mid, high);
   } else {
      return;
   }
}

int main() {

int n,a[10];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
   sort(a,0, n);

 cout<<"List after sorting\n";

   for(int i = 0; i < n; i++)
      cout<<a[i]<<endl;
}
