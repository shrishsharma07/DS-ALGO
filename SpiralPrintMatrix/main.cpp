#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int n,loop_var,p=0;
    cout << "Enter a value";
    cin >> n;
    int cnt = n;
    loop_var = 0;
    int arr[n][n];
     for (int i = 0;i < n; i++)
    {
        for (int j = 0;j < n; j++)
        {
            arr[i][j] = p;
            p++;
        }

    }

    while (cnt > 0)
    {

        for (int i = loop_var;i < n - loop_var -1; i++)
        {
            cout << arr[loop_var][i];
        }
        for (int i = loop_var;i < n - loop_var ; i++)
        {
            cout << arr[i][n - loop_var - 1];
        }
        for (int i = n - loop_var- 2;i > loop_var ; i--)
        {
            cout << arr[n - loop_var - 1][i];
        }
        for (int i = n - loop_var -1;i > loop_var; i--)
        {
            cout << arr[i][loop_var];
        }

        loop_var = loop_var + 1;
        cnt = cnt - 2;
    }

    return 0;

}
