#include<iostream>
using namespace std;
int main(){
int x,arr[100],num,c,pos;
cout<<"Enter size of array\n";
cin>>x;
cout<<"Enter elements of array\n";
for(int i=0;i<x;i++){
    cin>>arr[i];
}
cout<<"Enter number to be searched\n";
cin>>num;
for(int i=0;i<x;i++){
    if(arr[i]==num){
        c=1;
        pos=i+1;
        break;
    }
}
if(c==0){
    cout<<"Number not found\n";
}
else{
    cout<<num<<" found at position "<<pos<<endl;
}
return 0;
}
