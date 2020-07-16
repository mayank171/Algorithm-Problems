#include<iostream>
#include<string>
using namespace std;
int main()
{

    string s="00000000";
    int range,len;
    cout<<"enter range: ";
    cin>>range;
    len=s.length();
    int c=1,index;
    char a[8];
    for(int i=0;a[i];i++)
    {
        a[i]=s.at(i);
    }
    while(c<=range)
    {
        for(int i=len-1;i>=0;i--)
        {
            if(a[i]=='0')
            {
                index=i;
                break;
            }
            if(a[i]=='1')
            {
                a[i]='0';
            }
        }
        a[index]='1';
        for(int i=0;a[i];i++)
           cout<<a[i]<<" ";
        c++;
        cout<<endl;
    }
    return 0;
}
