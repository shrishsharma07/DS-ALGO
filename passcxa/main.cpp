#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int N,Q;
    cin >> N >> Q;
    int Base1Arr = N + 1;
    int A[Base1Arr],OP[Q][3];

    for (int i = 1;i < Base1Arr;i++)
    {
        cin >> A[i];
    }
    for (int i = 0;i < Q;i++)
    {
        cin >> OP[i][0] >> OP[i][1] >> OP[i][2];
    }
    return 0;
}
