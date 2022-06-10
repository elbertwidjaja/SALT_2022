#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Size : ";
    cin>>size;

    int candles[size];
    int x,max,count=0;

    for(x=0;x<size;x++){cin>>candles[x];}
    max = candles[0];
    for(x=0;x<size;x++)
    {
        if(candles[x]>=max){max = candles[x];}
    }
    for(x=0;x<size;x++)
    {
        if(candles[x]==max){count++;}
    }
    cout << count;
}