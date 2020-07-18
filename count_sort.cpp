#include<iostream>
using namespace std;

void counting(int a[],int size,int range)
{
    int count[range];
    for(int i=0;i<=range;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<size;i++)
    {
        count[a[i]]++;
    }
    for(int i=1;i<=range;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    int b[size];
    for(int i=size-1;i>=0;i--)
    {
        --count[a[i]];
        b[count[a[i]]]=a[i];
    }
    for(int i=0;i<size;i++)
    {
        a[i]=b[i];
    }

    cout<<"array: ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;
    int a[size];
    cout<<"enter values: ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    int range=a[0];
    for(int i=0;i<size;i++)
    {
        if(a[i]>range)
        {
            range=a[i];
        }
    }
    counting(a,size,range);
    return 0;
}
