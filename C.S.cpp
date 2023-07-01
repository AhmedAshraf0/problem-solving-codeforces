/*
CST
09-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n , ctr = 0;
        string str;
        cin>>n>>str;
        for(int i = 0 ; i < n ;){
            if(str[i] == '*'){
                if(!i){
                    if(str[i+1] == '*'){
                        i++;
                    }else{
                        str[i+1] = '*';
                        i += 2;
                    }
                }
                else if(i == n-1){
                    str[i-1] = '*';
                    i++;
                }else{
                    if(str[i+1] == '*'){
                        str[i-1] = '*';
                        i++;
                    }else{
                        str[i+1] = '*';
                        str[i-1] = '*';
                        i += 2;
                    }
                }
            }else i++;
        }
        for(int i = 0 ; i < n ; ++i){
            if(str[i] == '.'){
                auto it = find(str.begin()+i+1,str.end(),'*');
                if(it != str.end()){//* found
                    if((it-str.begin() - i) <= 3){
                        ctr++;
                    }
                    else{
                        ctr += (it-str.begin() - i)/3;
                        if((it-str.begin()- i) % 3)
                            ctr++;
                    }
                    for(int j = i+1 ; j < it-str.begin(); ++j)
                        str[j] = '*';
                }else{
                    ctr += (n-i)/3;
                    if((n-i) % 3)
                        ctr++;
                    break;
                }
            }
        }
        cout<<ctr<<'\n';
    }
}
