//
// Created by CST on 18-Jan-22.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , ctr1 = 0 , ctr2 = 0 , ctr3 = 0 , ctr4 = 0 , f = 0;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        if(num == 1)
            ctr1++;
        else if(num == 2)
            ctr2++;
        else if(num == 3)
            ctr3++;
        else
            ctr4++;
    }
    ctr2 *= 2;
    f += ctr4;
    if(ctr3 > ctr1){
        f += ctr1;
        ctr3 -= ctr1;
        f += (ctr3 + (ctr2/4));
        if((ctr2 % 4) != 0)
            f++;
    }else if(ctr3 < ctr1){
        f += ctr3;
        ctr1 -= ctr3;
        f += (ctr2 / 4);
        ctr2 = (ctr2 % 4);
        if(ctr2 == 2)
            if(ctr1 >= 2){
                f++;
                ctr1 -= 2;
                f += ceil((double)ctr1 / 4);
            }else//1
                f++;
        else//0
            f += ceil((double)ctr1 / 4);
    }else{
        f += ctr3;//ctr1 = 0 ctr3 = 0
        f += (ctr2 / 4);
        if((ctr2 % 4) != 0)
            f++;
    }
    cout<<f;
}
