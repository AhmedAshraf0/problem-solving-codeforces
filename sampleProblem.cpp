//
// Created by CST on 20-Feb-22.
//

#include<iostream>
using namespace std;
int main(){
    int t , t2 = 1;
    cin>>t;
    while(t--){
        int n , m , sum = 0;
        cin>>n>>m;
        for(int i = 0 ; i < n ; ++i){
            int temp;
            cin>>temp;
            sum += temp;
        }
        cout<<"Case #"<<t2<<": "<<sum % m<<endl;
        t2++;
    }
}

