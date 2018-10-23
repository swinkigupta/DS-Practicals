#include<iostream>
using namespace std;
#define MAX 100
class stac{
int top;
public:
    int a[MAX];
    stac(){
    top=-1;
    }
    bool push(int x);
    int pop();
    bool isEmpty();
    int peek();
    void display();
};
bool stac::push(int x){
if(top>=(MAX-1)){
    cout<<"Stack Overflow\n";
    return false;
}
else{
    a[++top]=x;
    return true;
}
}
int stac::pop(){
if(top<0){
    cout<<"Stack Overflow\n";
    return 0;
}
else{
    int x=a[top--];
    return x;
}
}
bool stac::isEmpty(){
if(top<0)
return 0;
else
    return 1;
}
int stac::peek(){
return a[top];
}
void stac::display(){
    cout<<"Elements of stack\n";
    for(int i=top;i>=0;i--){
    cout<<a[i]<<endl;
}
}
int main(){
stac s;
int k,ch,n;
cout<<"1. Push Elements in stack\n2. Pop Elements from stack\n3. Top Element of stack\n4. To check whether stack is empty\n";
 while(1){
 cout<<"Enter your choice\n";
cin>>ch;
switch(ch){
    case 1:
        cout<<"Enter number of elements to be pushed\n";
        cin>>n;
         cout<<"Enter elements\n";
for(int i=0;i<n;i++){
    cin>>k;
s.push(k);
}
s.display();
break;
case 2:
cout<<s.pop()<<" popped from stack\n";
break;
case 3:
cout<<s.peek()<<" is the top element\n";
break;
case 4:
cout<<s.isEmpty();
break;
}
 }
}
