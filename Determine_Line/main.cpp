#include <iostream>

using namespace std;

int main()
{
    int n,n1,n3,a[100];
    cin >> n;
    for (int i = 0;i < 100; i++)
    {
      a[i] = 0;
    }
    for (int i = 0; i < n;i++)
    {
        cin >> n1;

        for (int j = 0; j < n1;j++)
        {
            cin >> n3;

            a[n3 - 1]++;
        }
    }
    for (int i = 0;i < 100; i++)
    {

        if(a[i] >= n)
        {
        cout << i + 1;
        }
    }
    return 0;
}
