/*
CST
26-Sep-22
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int l1 , l2 , l3;
        cin>>l1>>l2>>l3;
        if(l1+l2+l3 % 4 == 0){
            cout<<"YES";
        }else{
            if(l1 == l2){
                if(l3%2==0)
                    cout<<"YES";
                else
                    cout<<"NO";
            }else if(l2 == l3){
                if(l1%2 == 0)
                    cout<<"YES";
                else
                    cout<<"NO";
            }else if(l3==l1){
                if(l2%2==0)
                    cout<<"YES";
                else
                    cout<<"NO";
            }else{
                int arr[] = {l1,l2,l3};
                sort(arr,arr+3);
                if(arr[2] == arr[1] +arr[0])
                    cout<<"YES";
                else
                    cout<<"NO";
            }
        }
        cout<<'\n';
    }
}
