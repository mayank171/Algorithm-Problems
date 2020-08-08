#include<iostream>
using namespace std;
class fact
{
public:
    /*
     * Function to find the factorial
     */
    int factorial(int n)
    {
        int i;
        int pro = 1;
        for(i = n; i > 1; i--)
        {
            pro = pro * i;
        }
        if(n == 0)
        {
            pro = 1;
        }
        return pro;
    }
};
/*
 * Main function
 */
int main()
{
    fact f;
    int n;
    cout<<"Enter the number whose factorial is to be calculated\t";
    cin>>n;
    cout<<"\nFactorial of "<<n<<" is = "<<f.factorial(n);
    return 0;
}
