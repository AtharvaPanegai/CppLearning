// Given two 2-Dimensional arrays of sizes n1Xn2 and n2Xn3. Your task is to
// multiply these matrices and output the multiplied matrix.

// for Matrix multipliaction col size of first matrix== row size of second matrix

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int rowOne, commonDimension, colTwo;
    cin >> rowOne >> commonDimension >> colTwo;

    int arrOne[rowOne][commonDimension];
    int arrTwo[commonDimension][colTwo];
    int productArr[rowOne][colTwo];
    // first Matrix
    cout << "Enter First Matrix\n";
    for (int i = 0; i < rowOne; i++)
    {
        for (int j = 0; j < commonDimension; j++)
        {
            cin >> arrOne[i][j];
        }
    }
    // second Matrix
    cout << "Enter the Second Matrix\n";

    for (int i = 0; i < commonDimension; i++)
    {
        for (int j = 0; j < colTwo; j++)
        {
            cin >> arrTwo[i][j];
        }
    }

    // initilize with 0
    for (int i = 0; i < rowOne; i++)
    {
        for (int j = 0; j < colTwo; j++)
        {
            arrTwo[i][j] = 0;
        }
    }

    // Multiplying Matrix
    for (int i = 0; i < rowOne; i++)
    {
        for (int j = 0; j < colTwo; j++)
        {
            for (int k = 0; k < commonDimension; k++)
            {
                productArr[i][j] += arrOne[i][k] * arrTwo[k][j];
            }
        }
    }
    // printing the product array
    for (int i = 0; i < rowOne; i++)
    {
        for (int j = 0; j < colTwo; j++)
        {
            cout << productArr[i][j] << " ";
        }
       
    }

    return 0;
}