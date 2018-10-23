#include<iostream>
using namespace std;
struct node
{
    node *prev;
    int n;
    node *next;
}*h,*temp,*temp1,*temp2,*temp4;
void create();
void insert1();
void insert2();
void insert3();
void search();
void del();
 void display();
int count = 0;

int main()
{
    int ch;

    h = NULL;
    temp = temp1 = NULL;
    cout<<"1 - Insert at beginning\n";
    cout<<"2 - Insert at end\n";
    cout<<"3 - Insert at position i\n";
    cout<<"4 - Delete at i\n";
    cout<<"5 - Search for element\n";
    cout<<"6 - Display elements\n";
    while (1)
    {
cout<<"Enter choice \n";
        cin>>ch;
        switch (ch)
        {
        case 1:
            insert1();
            break;
        case 2:
            insert2();
            break;
        case 3:
            insert3();
            break;
        case 4:
            del();
            break;
        case 5:
            search();
            break;
        case 6:
            display();
            break;
        default:
cout<<"\n Wrong choice menu\n";
        }
    }
}

void create()
{
    int data;

    temp =new node;
    temp->prev = NULL;
    temp->next = NULL;
   cout<<"Enter value to node\n";
    cin>>data;
    temp->n = data;
    count++;
}


void insert1()
{
    if (h == NULL)
    {
        create();
        h = temp;
        temp1 = h;
    }
    else
    {
        create();
        temp->next = h;
        h->prev = temp;
        h = temp;
    }
}

/* To insert at end */
void insert2()
{
    if (h == NULL)
    {
        create();
        h = temp;
        temp1 = h;
    }
    else
    {
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }
}

/* To insert at any position */
void insert3()
{
    int pos, i = 2;

cout<<"Enter position to be inserted\n";
    cin>>pos;
    temp2 = h;

    if ((pos < 1) || (pos >= count + 1))
    {
cout<<"Position out of range to insert\n";
        return;
    }
    if ((h == NULL) && (pos != 1))
    {
cout<<"Empty list cannot insert other than 1st position\n";
        return;
    }
    if ((h == NULL) && (pos == 1))
    {
        create();
        h = temp;
        temp1 = h;
        return;
    }
}

void del(){
    int i = 1, pos;

    cout<<"Enter position to be deleted\n";
    cin>>pos;
    temp2 = h;

    if ((pos < 1) || (pos >= count + 1))
    {
        cout<<"Error : Position out of range to delete\n";
        return;
    }
    if (h == NULL)
    {
        cout<<"Error : Empty list no elements to delete\n";
        return;
    }
    else
    {
        while (i < pos)
        {
            temp2 = temp2->next;
            i++;
        }
        if (i == 1)
        {
            if (temp2->next == NULL)
            {
                cout<<"Node deleted from list\n";
                delete(temp2);
                temp2 = h = NULL;
                return;
            }
        }
        if (temp2->next == NULL)
        {
            temp2->prev->next = NULL;
            delete(temp2);
            cout<<"Node deleted from list\n";
            return;
        }
        temp2->next->prev = temp2->prev;
        if (i != 1)
            temp2->prev->next = temp2->next;
        if (i == 1)
            h = temp2->next;
        cout<<"Node deleted\n";
        delete(temp2);
    }
    count--;
}

 void search()
{
    int data, count = 0;
    temp2 = h;

    if (temp2 == NULL)
    {
        cout<<"List empty to search for data\n";
        return;
    }
    cout<<"Enter value to search\n";
   cin>>data;
    while (temp2 != NULL)
    {
        if (temp2->n == data)
        {
            cout<<"Data found in "<<count+1<<" position\n";
            return;
        }
        else
             temp2 = temp2->next;
            count++;
    }
    cout<<"Error\n";
}

void display()
{
    temp2 = h;

    if (temp2 == NULL)
    {
        cout<<"Empty\n";
        return;
    }
 cout<<"print\n";
    while (temp2->next != NULL)
    {
        cout<<temp2->n<<endl;
        temp2 = temp2->next;
    }
cout<<temp2->n<<endl;
}
