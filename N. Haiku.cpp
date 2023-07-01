/*
CST
18-Aug-22
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
        int arr[3] = {0,0,0} , si[3] , yctr[3] = {0,0,0};
        for(int i = 0 ; i < 3 ; ++i)
            cin >> si[i];
        for(int i = 0 ; i < 3 ; ++i){
            while(si[i]--){
                string str;
                cin>>str;
                for(int j = 0 ; j < str.size(); ++j){
                    if(str[j]<=90)
                        str[j] += 32;
                    if(str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u'){
                        arr[i]++;
                    }else if(str[j] == 'y')
                        yctr[i]++;
                }
            }

        }
        arr[0] -= 5;arr[1] -=7;arr[2] -=5;
        if(arr[0] <= 0){
            if(arr[1] <= 0){
                if(arr[2] <= 0){
                    if(!arr[0] && !arr[1] && !arr[2]){
                        cout<<"YES\n";
                        continue;
                    }else{
                        if(arr[0] < 0)
                            arr[0] += yctr[0];
                        if(arr[1] < 0)
                            arr[1] += yctr[1];
                        if(arr[2] < 0)
                            arr[2] += yctr[2];
                    }
                    if(arr[0] >= 0 && arr[1] >= 0 && arr[2] >= 0){
                        cout<<"YES\n";
                        continue;
                    }
                }
            }
        }
        cout<<"NO\n";
    }
}
