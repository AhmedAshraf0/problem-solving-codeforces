//
// Created by CST on 23-Jan-22.
//
#include<iostream>
using namespace std;
int main(){
    int a , b , c , test;
    cin>>a>>b>>c;
    test = a + b * c;
    int test2;
    test2 = (a + b) * c;
    if(test2 > test)
        test = test2;
    test2 = a * b + c;
    if(test < test2)
        test = test2;
    test2 = a * (b + c);
    if(test < test2)
        test = test2;
    test2 = a * b * c;
    if(test < test2)
        test = test2;
    test2 = a + b + c;
    if(test < test2)
        test = test2;
    cout<<test;
}
