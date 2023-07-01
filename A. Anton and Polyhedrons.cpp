//
// Created by CST on 23-Feb-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long faces = 0;
    while(t--){
        string str;
        cin>>str;
        if(str == "Tetrahedron"){
            faces += 4;
        }else if(str == "Cube"){
            faces += 6;
        }else if(str == "Octahedron"){
            faces += 8;
        }else if(str == "Dodecahedron"){
            faces += 12;
        }else if(str == "Icosahedron"){
            faces += 20;
        }
    }
    cout<<faces;
}
