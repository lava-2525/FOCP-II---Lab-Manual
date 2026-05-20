#include <iostream>
using namespace std;

int main()
{
    int A[3][3], Transpose[3][3];

    cout << "Enter elements of 3x3 matrix:\n";
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Transpose[i][j] = A[j][i];
        }
    }

    cout << "\nTranspose of matrix:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
