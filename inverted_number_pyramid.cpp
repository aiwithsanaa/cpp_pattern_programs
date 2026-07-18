#include <iostream>
using namespace std;
int main()
{
    int k;
    int n=4;
    for(int i=1;i<=n;i++)                                   
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(k = 1;k<=2*(n-i)+1;k++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}