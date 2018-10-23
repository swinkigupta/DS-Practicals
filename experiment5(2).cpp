#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
class stack{
struct node *top;
public:
    stack(){
    top=NULL;
    }
    node* newnode(int x){
        node *p;
    p=new node;
    p->data=x;
    p->next=NULL;
    return(p);
}
void empty()
{
    if (top == NULL)
       cout<<"Stack is empty\n";
    else
       cout<<"Stack is not empty\n";
}

void push(node *q)
{
    if(top==NULL)
        top=q;
    else
    {
        q->next=top;
        top=q;
    }
}
    void pop(){
    struct node *temp;
    if(top==NULL){
        cout<<"Stack is empty\n";
        return;
    }
    temp=top;
    top=top->next;
    delete temp;
    }
void display()
{
    node *q;
    q=top;
 cout<<"Elements of stack\n";
    if(top==NULL){
        cout<<"Stack is empty!!";
    }
    else{
        while(q!=NULL)
        {
            cout<<q->data<<endl;
            q=q->next;
        }
    }
}
int topelement()
{
    return(top->data);
}
};
int main(){
stack s;
node *nptr;
int x,ch,n;
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
        cin>>x;
nptr=s.newnode(x);
s.push(nptr);
}
s.display();
break;
    case 2:
        s.pop();
        cout<<"Element popped\n";
        break;
    case 3:
        cout<<"Top Element\n"<<s.topelement()<<endl;
        break;
    case 4:
        s.empty();
        break;
}
}
return 0;
}
