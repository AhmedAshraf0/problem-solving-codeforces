//
// Created by CST on 08-Feb-22.
//
#include<iostream>
using namespace std;
void print(int n , string arr[]){
    cout<<"YES"<<endl;
    for(int row = 0 ; row < n ; row++){
        cout<<arr[row]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int row = 0 ; row < n ; row++){
        cin>>arr[row];
    }

    for(int row = 0 ; row < n ; row++){
        for(int i = 0 ; i < 5 ; i += 3){
            if(arr[row].substr(i,2) == "OO"){
                arr[row].replace(i,2,"++");
                print(n , arr);
                return 0;
            }
        }
    }
    cout<<"NO";
}
