/*
CST
26-Oct-22
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
        long long osum = 0 , esum = 0 , octr = 0 , ectr = 0;
        int n , q;
        cin>>n>>q;
        while(n--){
            int num;
            cin>>num;
            if(num%2){
                octr++;
                osum += num;
            }else{
                ectr++;
                esum += num;
            }
        }
        while(q--){
            int ty , x;
            cin>>ty>>x;
            if(ty){
                if(x%2){
                    ectr += octr;
                    esum += (octr*x);
                    osum = octr = 0;
                }else{
                    osum += (octr * x);
                }
            }else{
                if(x%2){
                    octr += ectr;
                    osum += (ectr*x);
                    esum = ectr = 0;
                }else{
                    esum += (ectr * x);
                }
            }
            cout<<osum+esum<<'\n';
        }
    }
}
