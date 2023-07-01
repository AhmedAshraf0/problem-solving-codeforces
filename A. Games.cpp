//
// Created by CST on 27-Dec-21.
//
#include<iostream>
using namespace std;
int main()
{
    int t, ctr = 0;
    cin>>t;
    int arr[t*2];
    for (int i = 0; i < t * 2; ++i)
        cin >> arr[i];
    for(int i = 0 ; i < t * 2 ; i+=2) // 0 8
    {
        if(i != (t * 2) - 2)
        {
            int home = arr[i];//42
            for(int k = i + 3 ; k < t * 2 ; k += 2)
            {
                int away = arr[k];//100
                if(home == away) //compare host shirt with another team away shirt
                    ctr++;
            }
            int myAway = arr[i+1];
            for(int j = i + 2 ; j < t * 2 ; j += 2)
            {
                if(myAway == arr[j]) {
                    ctr++;
                }
            }
        }
    }
    cout<<ctr;
}
