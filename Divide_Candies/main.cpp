#include <iostream>

using namespace std;

int main()
{
    long long n,m,Tot = 0,nsqur;
    cin >> n >> m;
    if (m == 1)
    {
        Tot = n * n;
        cout << Tot;
        return 0;

    }
    for (long long i = 1; i <= n; i++)
    {
        nsqur = i * i;

        /*for (long long j = 1; j <= i; j++)
        {
            long long sum = (i * i) + (j * j) ;
            if (sum % m == 0)
            {
                if(i != j)
                {
                    Tot = Tot + 2;
                }
                else
                {
                    Tot++;

                }
            }

        }*/

    }
    cout << Tot;
    return 0;

}
