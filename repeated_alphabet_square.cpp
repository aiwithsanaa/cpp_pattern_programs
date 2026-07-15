#include<iostream>
using namespace std;
int main()
{
    int i,j,n=4;
    for(i=0;i<n;i++)
    {
        //ch is ascaii values A=65 B=A+1 -->66
        char ch='A';
        for(j=0;j<n;j++)
        {
            //ch=ch+1;
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}