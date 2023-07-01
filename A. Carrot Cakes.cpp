//
// Created by CST on 03-Jan-22.
//
#include<iostream>
using namespace std;
int main()
{
    int n , t , k , d;
    cin>>n>>t>>k>>d;
    int testTime = 0 , testCake = 0;
    //to calculate the time with one oven
    while(true)
    {
        if(testCake >= n)
        {
            break;
        }else
        {
            testCake += k;
            testTime += t;
        }
    }
    int testTime2 = 0 , testCake2 = 0 , i = 0 , j = 0;
    bool one = true , second = false;
    //to calculate the time with two ovens
    while(true)
    {
        if(i != 0)
        {//for the first oven
            if(i % t == 0)
            {
                testTime2 = i;//i is our line number i equal the pointer on the number line to it, at this time i finish elc
                testCake2 += k;
            }
            if(i == d)
            {//to start the second oven
                second = true;
            }
            if(second)
            {//to start counting for the time for the second oven, there is two counters are working one this finished ok add the time when this finished ok add the time
                if(j != 0)
                {
                    if(j % t == 0)
                    {
                        testTime2 = i;
                        testCake2 += k;
                    }
                }
                j++;
            }
            if(testCake2 >= n)
                break;
        }
        i++;
    }
    if(testTime <= testTime2)
        cout<<"NO";
    else
        cout<<"YES";
}
