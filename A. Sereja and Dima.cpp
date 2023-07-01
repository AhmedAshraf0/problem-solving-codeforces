//
// Created by CST on 25-Dec-21.
//
#include<iostream>
using namespace  std;
int main()
{
    int ptr1 = 0 , n , sejaSum = 0 , dimaSum = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int ptr2 = n-1;
    for(int i = 1 ; i <= n ; ++i)
    {
        if(i % 2 != 0)//seja is working with odd numbers and dima with even
        {
            if(arr[ptr1] > arr[ptr2])
            {
                sejaSum += arr[ptr1];
                ptr1++;
            }
            else{
                sejaSum += arr[ptr2];
                ptr2--;
            }
        }else{
            if(arr[ptr1] > arr[ptr2])
            {
                dimaSum += arr[ptr1];
                ptr1++;
            }
            else{
                dimaSum += arr[ptr2];
                ptr2--;
            }
        }
    }
    cout<<sejaSum<<' '<<dimaSum;
}
