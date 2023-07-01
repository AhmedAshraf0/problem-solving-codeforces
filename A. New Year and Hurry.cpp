//
// Created by CST on 30-Jan-22.
//
#include<iostream>
using namespace std;
int main(){
    int n , k , hour = 20 , minute = 0;
    cin>>n>>k;
    if(k < 240){
        hour += k / 60;
        minute += k % 60; //I took all of 60s and the rest is less than 60
        int rest = ((23 - hour) * 60 ) + (60 - minute);
        int cRest = rest;
        int i = 1;
        for(; i <= n ; ++i){
            int pTime = 5 * i;
            if((rest - pTime) >= 0){//>= because it fits the time so specific
                rest -= pTime;
            }else{
                /*
                 * cRest -= rest;
                hour += cRest / 60;
                minute += cRest % 60;
                break;
                 * */
                cout<<i - 1;
                return 0;
            }
        }
        cout<<i - 1;
    }else{
        cout<<0;
    }
}
