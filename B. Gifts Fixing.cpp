/*
CST
04-Jul-22
*/
#include<bits/stdc++.h>

using namespace std;
int func(int arr[] , int i , int m){
    int res = arr[i]-m;
    arr[i] -= res;
    return res;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n ;
        long long ctr = 0;
        cin>>n;
        int arr1[n] , arr2[n];
        for(int i = 0 ; i < n * 2 ; ++i)
            if(i < n)
                cin>>arr1[i];
            else
                cin>>arr2[i-n];
        int m1 = *min_element(arr1,arr1+n), m2 = *min_element(arr2,arr2+n);
        for(int i = n - 1 ; i >= 0 ; --i){
            if(arr1[i] != m1 && arr2[i] != m2){
                if(arr1[i]-m1 < arr2[i]-m2){
                    int val = arr1[i]- m1;
                    ctr += val;
                    arr1[i] -= val;
                    arr2[i] -= val;
                }else if(arr1[i]-m1 > arr2[i]-m2){
                    int val = arr2[i]- m2;
                    ctr += val;
                    arr2[i] -= val;
                    arr1[i] -= val;
                }else if(arr1[i]-m1 == arr2[i]-m2){
                    int val = arr1[i]-m1;
                    ctr += val;
                    arr2[i] -= val;
                    arr1[i] -= val;
                }
                while(true){
                    if(arr1[i] != m1){
                        ctr += func(arr1 , i , m1);
                    }else if(arr2[i] != m2){
                        ctr += func(arr2 , i , m2);
                    }else if(arr1[i] == m1 && arr2[i] == m2)
                        break;
                }
            }else if(arr1[i] != m1){
                ctr += func(arr1 , i , m1);
            }else if(arr2[i] != m2){
                ctr += func(arr2 , i , m2);
            }
        }
        cout<<ctr<<'\n';
    }
}
