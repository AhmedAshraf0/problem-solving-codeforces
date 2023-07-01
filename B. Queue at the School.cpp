//
// Created by CST on 07-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , t;
    string str;
    cin>>n>>t>>str;
    vector<int> v1;
    //make sure that every letter is upperCase
    for (int i = 0; i < n; ++i)
        str[i] = toupper(str[i]);

    //get the indexes of the B
    for (int i = 0; i < n; ++i)
        if (str[i] == 'B')
            v1.push_back(i);

    while(t--)
    {
        for(int i = 0 ; i < (int)v1.size() ; ++i)
        {
            if(v1[i] != (n - 1))
            {
                if (str[v1[i] + 1] == 'G')
                {
                    char temp = 'G';
                    str[v1[i] + 1] = 'B';
                    str[v1[i]] = temp;
                    v1[i]++;//updates the B index
                }
            }
        }
    }
    cout<<str;
}
