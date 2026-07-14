#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            if(j==0||j==(2*i)||i==n-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}