//
// Created by CST on 21-Apr-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int total = 0 ,  n;
        cin>>n;
        if(n > 9){
            string str = to_string(n) , str2 = "0" , str3 = str;
            for(int i = 1 ; i < str3.size() ; ++i){
                str3[i] = str3[0];
            }
            int s = str.size() , n2 , n3;
            n2 = stoi(str3);
            str2 += str[0];
            n3 = stoi(str2);
            s--;
            if(n >= n2){
                total += 9 + (s-1)*9 + n3;
                cout<<total<<endl;
            }else{
                total += 9 + (s-1)*9 + --n3;
                cout<<total<<endl;
            }
        }else{
            cout<<n<<endl;
        }
    }
}
