/*
CST
15-Aug-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n , ctr , ctl;
    bool both = false , test = false;
    string str;
    cin>>n>>str;
    str.insert(str.begin(),'E');str += "EE";
    ctr = count(str.begin(),str.end(),'R');
    ctl = count(str.begin(),str.end(),'L');
    if(ctr == 0 || ctl == 0){
        cout<<0;
        return 0;
    }
    if(ctr > ctl){
        int consecR = 1 , lidx;
        for(int i = 1 ; i <= n ; ++i){
            int j = i+2 ;
            int tempctr = 1;
            if(str[i] == 'R' && str[i+1] == 'R'){
                tempctr++;
                for(; j <= n ; ++j){
                    if(str[j] == 'R'){
                        tempctr++;
                    }else{
                        consecR = max(consecR,tempctr);
                        i = j-1;
                        break;
                    }
                }
            }
            lidx = j;
        }
        if(str[lidx] == 'L' && lidx == n)
            cout<<ctl-1;
        else
            cout<<ctl;
    }else if(ctr < ctl){
        int consecL = 1 , lidx;
        for(int i = n ; i >= 1 ; --i){
            int j = i-2 ;
            int tempctr = 1;
            if(str[i] == 'L' && str[i-1] == 'L'){
                tempctr++;
                for( ; j >= 1 ; --j){
                    if(str[j] == 'L'){
                        tempctr++;
                    }else{
                        consecL = max(consecL,tempctr);
                        lidx = j;
                        i = j-1;
                        break;
                    }
                }
            }
            lidx = j;
        }
        if(str[lidx] == 'R'  && lidx == 1)
            cout<<ctr-1;
        else
            cout<<ctr;
    }else{
        for(int i = 1 ; i <= n ; ++i)
            if(str.substr(i,2)== "RL"){
                both = true;
            }else if(str.substr(i,2) == "LR"){
                test = true;
            }
        if((both && test) || both)
            cout<<ctr-1;
        else
            cout<<ctr;
    }
}
