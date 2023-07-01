//
// Created by CST on 20-Mar-22.
//
#include<bits/stdc++.h>
using namespace std;
void print(string st , int n1 , int n2){
    cout<<"Case #"<<n1-n2<<": "<<st<<endl;
}
void print(int n1 , int n2 , vector<int>v2 , vector<int>v4){
    int s = 0 , s1 = 0;
    if(v2.size() > v4.size()){
        for(int i = 0 ; i < v2.size() ; ++i){
            s += v2[i];
        }
        for(int i = 0 ; i < v4.size() ; ++i){
            s1 += v4[i];
        }
    }else if(v2.size() < v4.size()){
        for(int i = 0 ; i < v4.size() ; ++i){
            s += v4[i];
        }
        for(int i = 0 ; i < v2.size() ; ++i){
            s1 += v2[i];
        }
    }else{
        for(int i = 0 ; i < v2.size() ; ++i){
            s1 += v2[i];
            s += v4[i];
        }
    }
    cout<<"Case #"<<n1-n2<<": "<<abs(s-s1)<<endl;
}
int main(){
    int t , cpy;
    cin>>t;
    cpy = t;
    while(t--){
        string str1,str2 , v1 , v3;
        cin>>str1>>str2;
        vector<int> v2 , v4;
        //for checking only str1
        for(int i = 0 ; i < str1.size() ; ++i){
            bool existed = true;
            if(i != 0){
                for(int k = 0 ; k < v1.size() ; ++k){
                    if(str1[i] == str1[k]){
                        existed = false;
                        break;
                    }
                }
            }
            if(existed){
                int ctr = 0;
                for(int j = i + 1 ; j < str1.size() ; ++j){
                    if(str1[j] == str1[i])
                        ctr++;
                }
                v1.push_back(str1[i]);
                v2.push_back(ctr);
            }
        }

        //for str2
        for(int i = 0 ; i < str2.size() ; ++i){
            bool existed = true;
            if(i != 0){
                for(int k = 0 ; k < v3.size() ; ++k){
                    if(str1[i] == str1[k]){
                        existed = false;
                        break;
                    }
                }
            }
            if(existed){
                int ctr = 0;
                for(int j = i + 1 ; j < str2.size() ; ++j){
                    if(str2[j] == str2[i])
                        ctr++;
                }
                v3.push_back(str1[i]);
                v4.push_back(ctr);
            }
        }

        bool check = false;
        for(int i = 0 ; i < max(v1.size() , v3.size()) ; ++i){
            if(v1[i] != v3[i]){
                print("IMPOSSIBLE" , cpy , t);
                check = false;
                break;
            }
            check = true;
        }
        if(check){
            print(cpy , t , v2 , v4);
        }
    }
}
