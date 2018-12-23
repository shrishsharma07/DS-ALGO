#include <iostream>

using namespace std;

int main()
{
    long long n , S;
    cin >> n >> S;
    if (n >= S)
    {
        cout << 1;
    }
    else
    {
        cout << S/n + 1;
    }
    return 0;
}
