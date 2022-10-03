#include <iostream>
using namespace std;
int main()
{ int count=0;
    for(int x=6;x>=1;x--)
{
    for(int y=1;y<=x;y++)
    {
        cout<<"*";
        count++;
    }
}
cout<<count<<endl;

}