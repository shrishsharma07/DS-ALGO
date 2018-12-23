#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[n][3];

    for(long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < 3; j++)
        {
                cin >> arr[i][j];
        }

    }
    for(long long i = 0; i < n; i++)
    {
        long long mid = (arr[i][2] + 1)/2;
        cout << (arr[i][0] * mid) - (arr[i][1] * (arr[i][2]/2)) << endl;
    }
    return 0;
}
