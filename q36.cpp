#include <iostream>
using namespace std;

int main()
{
    int m, n, p, q;

    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;

    cout << "Enter rows and columns of second matrix: ";
    cin >> p >> q;

    if (n != p)
    {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }

    int A[m][n], B[p][q], Result[m][q];

    cout << "\nEnter elements of first matrix:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "\nEnter elements of second matrix:\n";
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            Result[i][j] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            for (int k = 0; k < n; k++)
            {
                Result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nResultant Matrix:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << Result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
