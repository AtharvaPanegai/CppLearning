#include <bits/stdc++.h>
using namespace std;

signed main()
{

    int n, m;
    cin >> n >> m;
    int arr[n][m];
    cout<<"Now Enter the Matrix"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // sprial Order print
    int rowStart = 0;
    int rowEnd = n - 1;
    int colStart = 0;
    int colEnd = m - 1;

    while (rowStart <= rowEnd && colStart <= colEnd)
    {
        // for row Start
        for (int col = colStart; col <= colEnd; col++)
        {
            cout << arr[rowStart][col] << " ";
        }
        rowStart++;
        // for col end
        for (int row = rowStart; row <= rowEnd; row++)
        {
            cout << arr[row][colEnd] << " ";
        }
        colEnd--;
        // for row end
        for (int col = colEnd; col >= colStart; col--)
        {
            cout << arr[rowEnd][col] << " ";
        }
        rowEnd--;
        // for col start
        for (int row = rowEnd; row >= rowStart; row--)
        {
            cout << arr[row][colStart] << " ";
        }
        colStart++;
    }

    return 0;
}