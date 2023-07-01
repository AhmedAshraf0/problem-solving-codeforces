    //
    // Created by CST on 11-May-22.
    //
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int n , i  = 1, m;
        cin>>n>>m;
        while(true){
            if(i <= n){
                if(m-i < 0){
                    break;
                }else{
                    m -= i;
                    i++;
                }
            }else{
                i = 1;
            }
        }
        cout<<m;
    }
