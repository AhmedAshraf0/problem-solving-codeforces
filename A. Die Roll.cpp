//
// Created by CST on 30-Dec-21.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x , y;
    string arr[6] = {"1/6" , "1/3" , "1/2" , "2/3" , "5/6" , "1/1"};
    cin>>x>>y;//4 2
    x = max(x,y);//4
    cout<<arr[6-x];//2 which means there is 3 values(zero indexed) and remove those 4(3) then i have 3 at index
}
//I have all the six values
//If i get the max num and minus 6, it gives the rest options