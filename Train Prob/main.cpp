#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,Arr,Dept,MAX_PLATFORM = 0,CURR_PATFORM = 0,A = 0,B = 0;
    vector<int> Arrival,Departure;
    cout << "Total No of trains" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> Arr;
        cin >> Dept;
        Arrival.push_back(Arr);
        Departure.push_back(Dept);
    }
    sort(Arrival.begin(), Arrival.end());
    sort(Departure.begin(),Departure.end());

    while(A < n && B < n)
    {
        if(Arrival[A] < Departure[B])
        {
            A++;
            CURR_PATFORM++;
            if (CURR_PATFORM > MAX_PLATFORM)
            {
                MAX_PLATFORM = CURR_PATFORM;
            }
        }
        else
        {
            B++;
            CURR_PATFORM--;
        }

    }
    while(A < n)
    {
            A++;
            CURR_PATFORM++;
            if (CURR_PATFORM > MAX_PLATFORM)
            {
                MAX_PLATFORM = CURR_PATFORM;
            }

    }
    while(A < n)
    {
            B++;
            CURR_PATFORM--;

    }
    cout << MAX_PLATFORM;
    return 0;
}
