#include<iostream>
using namespace std;

void bubble(int a[],int n){
for(int i=0;i<=n-1;i++){
    int flag=0;
    for(int j=0;j<n-i+1;j++){
        if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
        }
    }
    if(flag==0){
        break;
    }
}
for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
}
}

int main(){
int a[100],n;
cout<<"enter size of array\n";
cin>>n;
cout<<"enter elements of array\n";
for(int i=0;i<n;i++){
    cin>>a[i];
}
bubble(a,n);
}
