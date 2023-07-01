//
// Created by CST on 21-Feb-22.
//-623563697
#include<iostream>
using namespace std;
int main(){
    int n1 , n2 , temp , n3;
    cin>>n1;
    n2 = n1 * -1;
    if(n1 > 0){
        cout<<n1;
    }else{
        temp = n2 % 10;
        n2 /= 100;
        n2 *= 10;
        n2 += temp;
        n2 *= -1;
        n3 = n1 / 10;
        if(n2 > n3){
            cout<<n2;
        }else{
            cout<<n3;
        }
    }
}
