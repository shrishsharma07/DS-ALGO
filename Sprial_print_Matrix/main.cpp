#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    int A[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }

    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j];
        }

    }
    cout << "Hello world!" << endl;
    return 0;
}
