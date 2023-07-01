//how to initilize many variables with the same value
// Created by CST on 10-Feb-22.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , rat = 0 , wAndc = 0 , man = 0 , cIdx;
    cin>>n;
    string arr[n*2];
    for(int i = 0 ; i < (n*2) ; ++i){
        cin>>arr[i];
        if(arr[i] == "rat"){
            rat++;
        }else if(arr[i] == "woman" || arr[i] == "child"){
            wAndc++;
        }else if(arr[i] == "man"){
            man++;
        }else if(arr[i] == "captain"){
            cIdx = i;
        }
    }
    for(int i = 1 ; i < (n*2) ; i += 2){
        if(rat){
            if(arr[i] == "rat"){
                cout<<arr[i-1]<<endl;
                rat--;
            }
        }else{
            break;
        }
    }
    for(int i = 1 ; i < (n*2) ; i += 2){
        if(wAndc){
            if(arr[i] == "woman" || arr[i] == "child"){
                cout<<arr[i-1]<<endl;
                wAndc--;
            }
        }else{
            break;
        }
    }
    for(int i = 1 ; i < (n*2) ; i += 2){
        if(man){
            if(arr[i] == "man"){
                cout<<arr[i-1]<<endl;
                man--;
            }
        }else{
            break;
        }
    }
    cout<<arr[cIdx-1];
}
