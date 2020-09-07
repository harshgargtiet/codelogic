#include<bits/stdc++.h>
using namespace std;

void decimaltobinary(long long int y)
{

    vector <unsigned int >v;

while(y!=0)
{
    if(y%2==1)
    {
y=y-1;
y=y/2;
v.push_back(1);
    }
    else
    {
        y=y/2;
        v.push_back(0);
    }
}
cout<<"the binary of entered no. is";
for (auto it = v.rbegin(); it != v.rend(); it++) 
{
        cout << *it << " ";
}
}
int main(void)
{
    long long  int x;
    cout<<"enter the no";
    cin>>x;
    decimaltobinary(x);
}