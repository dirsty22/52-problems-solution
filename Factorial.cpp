#include<iostream>
using namespace std;
int main()
{
    long long int N;
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        long long fact=1;
        cin>>N;
        for(int j=1;j<=N;j++)
        {
          fact=fact*j;
        }
        cout<<fact<<endl;

    }

}
