#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int n=4;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //cout<<"*";
        //if(i!=0)
        //{
            for(j=0;j<2*i-1;j++)
           // {
               //// cout<<" ";
            //}
            cout<<"*";
        //}
        cout<<endl;
    }
    //bottom
    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
       // cout<<"*";
       // if(i!=0)
       // {
            for(j=0;j<2*i-1;j++)
           // {
          //      cout<<" ";
           // }
            cout<<"*";
       // }
        cout<<endl;
    }
    return 0;
}