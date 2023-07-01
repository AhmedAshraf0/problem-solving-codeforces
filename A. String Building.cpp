//
// Created by CST on 22-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        bool check = false;
        string str;
        cin>>str;
        for(int i = 0 ; i < str.size() ; ++i){
            if(str[i] != 'a' && str[i] != 'b'){
                cout<<"no"<<endl;
                check = true;
                break;
            }
        }
        if(check)
            continue;
        int ctr = 0;
        if(str[0] == 'a'){//aaaaaaabbb
            for(int i = 0 ; i < str.size() ; ){
                int bctr = 0;
                if(str[i] == 'a'){
                    ctr++;
                    if(i == str.size()-1){
                        if(ctr <= 1){
                            cout<<"no";
                        }else{
                            cout<<"yes";
                        }
                        cout<<endl;
                    }
                    ++i;
                }else{
                    if(ctr <= 1){
                        cout<<"no"<<endl;
                        break;
                    }else{
                        ctr = 0;
                        for(int j = i ; j < str.size() ; ++j){
                            if(str[j] == 'b'){
                                bctr++;
                                if(j == str.size()-1){
                                    if(bctr <= 1){
                                        cout<<"no";
                                    }else{
                                        cout<<"yes";
                                    }
                                    cout<<endl;
                                    i = j+1;
                                }
                            }else{
                                if(bctr <= 1){
                                    cout<<"no"<<endl;
                                    i = str.size();//to break from the main loop
                                    break;
                                }else{
                                    bctr = 0;
                                    i = j;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }else if(str[0] == 'b'){
            int bctr = 0;
            for(int i = 0 ; i < str.size() ; ){
                ctr = 0;
                if(str[i] == 'b'){
                    bctr++;
                    if(i == str.size()-1){
                        if(bctr <= 1){
                            cout<<"no";
                        }else{
                            cout<<"yes";
                        }
                        cout<<endl;
                    }
                    ++i;
                }else{
                    if(bctr <= 1){
                        cout<<"no"<<endl;
                        break;
                    }else{
                        bctr = 0;
                        for(int j = i ; j < str.size() ; ++j){
                            if(str[j] == 'a'){
                                ctr++;
                                if(j == str.size()-1){
                                    if(ctr <= 1){
                                        cout<<"no";
                                    }else{
                                        cout<<"yes";
                                    }
                                    cout<<endl;
                                    i = j+1;
                                }
                            }else{
                                if(ctr <= 1){
                                    cout<<"no"<<endl;
                                    i = str.size();//to break from the main loop
                                    break;
                                }else{
                                    ctr = 0;
                                    i = j;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
