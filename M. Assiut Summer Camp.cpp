//
// Created by CST on 27-Jun-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,string>>v(4);
        for(int i = 0 ; i < 4 ; ++i){
            if(i == 0){
                cin>>v[i].first;
                v[i].second = "Hussien";
            }else if(i == 1){
                cin>>v[i].first;
                v[i].second = "Atef";
            }else if(i == 2){
                cin>>v[i].first;
                v[i].second = "Karemo";
            }else if(i == 3){
                cin>>v[i].first;
                v[i].second = "Ezzat ";
            }
        }
        sort(v.begin(),v.end());
        cout<<v[3].second<<' '<<v[2].second<<'\n';
    }
}