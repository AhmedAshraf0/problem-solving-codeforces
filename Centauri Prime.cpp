//
// Created by CST on 20-Feb-22.
//
#include<iostream>
using namespace std;
string getRuler(string str){
    int s = (int)str.size();
    for(int j = 0 ; j < s ; ++j){
        str[j] = tolower(str[j]);
    }
    if(str[s-1] == 'a' || str[s-1] == 'e' || str[s-1] == 'i' || str[s-1] == 'o' || str[s-1] == 'u')
        return " is ruled by Alice.";
    else if(str[s-1] == 'y')
        return " is ruled by nobody.";
    else
        return " is ruled by Bob.";
}
int main(){
    int t;
    cin>>t;
    for(int i = 1 ; i <= t ; ++i){
        string str;
        cin>>str;
        cout<<"Case #"<<i<<": "<<str<<getRuler(str)<<endl;
    }
}
