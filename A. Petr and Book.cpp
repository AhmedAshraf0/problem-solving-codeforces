/*
CST
18-Sep-22
*/
#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int num;
    cin>>num;
    int arr[7] , sum;
    for(int i = 0 ; i < 7 ; ++i)
        cin>>arr[i];
    sum = arr[0];
    int i = 0;
    while(true){
        if(sum < num){
            ++i;
            if(i == 7){
                i = 0;
            }
            sum += arr[i];
        }else if(sum >= num){
            cout<<i+1;
            break;
        }
    }
}
/*
 * 0100110010 306 304
 * 0101100000 352 306
 * 0101100010 354 352
 * 0101100100 356 354
 * 0101100110 358 356
 * 0101101000 360 358
 * 0101101010 362 360
 * 0101101100 364 362
 *
 * */