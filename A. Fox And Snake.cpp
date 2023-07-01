//
// Created by CST on 26-Jan-22.
//
#include<iostream>
using namespace std;
int main(){
    bool right = true;
    int row , col;
    cin>>row>>col;
    for(int r = 0 ; r < row ; ++r){
        bool once = false;
        for(int c = 0 ; c < col ; ++c){
            if(r % 2 == 0){//even
                cout<<"#";
            }else{//odd
                if(!right && c == 0){
                    if(once){
                        cout<<".";
                        continue;
                    }
                    cout<<"#";
                    right = true;
                    once = true;
                    continue;
                }
                if(right && c == col - 1){
                    if(once){
                        cout<<".";
                        continue;
                    }
                    cout<<"#";
                    right = false;
                    once = true;
                    continue;
                }
                cout<<".";
            }
        }
        cout<<endl;
    }
}
