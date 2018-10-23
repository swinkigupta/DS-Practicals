#include<iostream>
using namespace std;
int main(){
int choice,n,a[100],pos,ins,i,num,c,del,count;
cout<<"enter no. of elements in array\n";
cin>>n;
cout<<"enter elements in array\n";
for(int i=0;i<n;i++){
cin>>a[i];
}
cout<<"1. Insert a new element at a specified position\n2. Delete an element either whose value is given or whose position is given\n";
	cout<<"3. To find the location of a given element\n4. To display the elements of the linear array\n";

cout<<"enter your choice\n";
cin>>choice;
switch(choice){
case 1:
cout<<"Enter element to be insert\n";
	cin>>ins;
	cout<<"At which position\n";
	cin>>pos;
	// now create a space at the required position
	for(i=n; i>pos; i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=ins;
	cout<<"array is\n";
	for(i=0;i<n+1;i++)
	{
		cout<<a[i]<<" ";
	}
	break;
case 2:
	cout<<"Enter the number to be search\n";
	cin>>num;
	for(int i=0;i<n; i++)
	{
		if(a[i]==num)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"Number not found\n";
	}
	else
	{
		cout<<num<<" found at position "<<pos<<endl;
	}
    break;
case 3:
    cout<<"Enter element to be delete \n";
	cin>>del;
	for(i=0; i<n; i++)
	{
		if(a[i]==del)
		{
			for(int j=i; j<(n-1); j++)
			{
				a[j]=a[j+1];
			}
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"Element not found..!!";
	}
	else
	{
		cout<<"Now the new array is :\n";
		for(i=0; i<(n-1); i++)
		{
			cout<<a[i]<<endl;
		}
	}
break;
case 4:
    cout<<"To display the array\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
return 0;
}
