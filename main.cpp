#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n == 2) return true;
    if(n < 2 || n % 2 == 0) return false;
    for(int i = 3 ; i * i <= n ; i += 2)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
int countPrimeNumbers(int n)
{
    vector<bool> isPrime(n+1 , true);//list has all the numbers
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= n; ++i)
        if (isPrime[i])//if this number isn't deleted
        {
            for (int j = i * 2; j <= n; j += i)//eliminating the divisors of the i, start from the first divisor
                isPrime[j] = 0;
        };
    int ctr = 0;
    for (int i = 0; i < (int) isPrime.size(); ++i)//count the prime numbers
        if (isPrime[i])
            ctr++;
    return ctr;
}
/*int main() {
    int n , dctr = 0;
    cin>>n;
    for(int i = 6 ; i <= n ; ++i)
    {//check on the i
        int ctr = 0;
        if(isPrime(i))//don't check because it doesn't have any divisors
            continue;
        for(int j = 2 ; j <= i ; ++j)
        {
            if(i % j == 0)
            {
                if(isPrime(j))
                {
                    ctr++;
                    if(ctr == 2)//means this number is distinct prime number
                    {
                    }else if(ctr > 2)
                    {
                        dctr--;
                        break;
                    }
                }
            }
        }
    }
    cout<<dctr;
}*/
int main()
{
    int n , min;//min is the index
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
    {
        cin>>arr[i];
        if(i == 0) min = 0;
        if(i > 0)
        {
            if(arr[min] > arr[i])
                min = i;
        }
    }
    cout<<min;
}
