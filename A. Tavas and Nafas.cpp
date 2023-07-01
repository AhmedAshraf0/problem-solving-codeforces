//
// Created by CST on 16-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s  = "0", s2;
    cin>>s2;
    s += s2;
    string arr[] = {"zero" , "one" , "two" , "three" , "four" , "five" , "six" ,
                    "seven" , "eight" , "nine" , "ten" , "eleven" , "twelve" ,
                    "thirteen" , "fourteen" , "fifteen" , "sixteen" , "seventeen" ,
                    "eighteen" , "nineteen"} ,
            arr2[] = {"garbage1" , "garbage2", "twenty" , "thirty" , "forty" ,"fifty" ,
                      "sixty" , "seventy" , "eighty" , "ninety"};
    if(stoi(s) < 20){
        cout<<arr[stoi(s)];
    }else{
        cout<<arr2[stoi(s.substr(0,2))];
        if(s[2] != '0'){
            cout<<'-'<<arr[s[2]-48];
        }
    }
}