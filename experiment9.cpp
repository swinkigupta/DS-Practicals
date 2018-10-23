#include<iostream>
using namespace std;

void quicksort(int ,int ,int);
int partition(int ,int,int);
int partition(int *a,int s,int e)
{
	int piviot=a[e];
    int p=s;
    int i,t;
    for(i=s;i<e;i++)
    {
    	if(a[i]<=piviot)
        {
        	t=a[i];
            a[i]=a[p];
            a[p]=t;
            p++;
        }
	}

    t=a[e];
    a[e]=a[p];
    a[p]=t;
    return p;
}
void quicksort(int *a,int s,int e)
{
	if(s<e)
	{
		int pind=partition(a,s,e);
        quicksort(a,s,e-1);
                quicksort(a,s+1,e);
	}
}
int main()
{
	int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array\n";
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	quicksort(a,0,n-1);
    cout<<"Sorted array is\n";
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<endl;
	}
	return 0;
}
