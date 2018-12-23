#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int n,loop_var;
    cout << "Enter a value";
    cin >> n;
    int cnt = n;
    loop_var = 0;
    char arr[n][n];
     for (int i = 0;i < n; i++)
    {
        for (int j = 0;j < n; j++)
        {
            arr[i][j] = ' ';
        }

    }

    while (cnt > 0)
    {

        for (int i = loop_var;i < n - loop_var -1; i++)
        {
            arr[loop_var][i] = '*';
        }
        for (int i = loop_var;i < n - loop_var ; i++)
        {
            arr[i][n - loop_var - 1] = '*';
        }
        for (int i = n - loop_var- 1;i > loop_var ; i--)
        {
            arr[n - loop_var - 1][i] = '*';
        }
        for (int i = n - loop_var -1;i > loop_var; i--)
        {
            arr[i][loop_var] = '*';
        }

        loop_var = loop_var + 2;
        cnt = cnt - 4;
    }
    for (int i = 0;i < n; i++)
    {
        for (int j = 0;j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;

}
