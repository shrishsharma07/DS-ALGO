#include <bits/stdc++.h>

#define ll long long
#define forn(i, n) for(ll i = 0 ; (i) < (n) ; ++i)
using namespace std;

int main()
{

    ll n,sum = 0,sum_process;
    vector <int> vect;
    cin >> n;
    ll arr[n],ahash[200000];
    forn(i,n)
    {
        cin >> arr[i];
        sum = sum + arr[i];
        ahash[arr[i]]++;
    }
    sum_process = sum;
    forn(i,n)
    {
        sum_process = sum  - arr[i];
        if ( sum_process % 2 == 1) continue;
        sum_process = sum_process / 2;
        ahash[arr[i]]--;
        if(ahash[sum_process] > 0)
        {
            vect.push_back(i);
        }
        ahash[arr[i]]++;
    }
    cout << vect.size() << endl;
    for(int i = 0; i < vect.size(); i++)
    {
        int out_pos = vect[i] + 1;
        cout << out_pos << " ";
    }

}
