// WAP to transpose a matrix.
#include<iostream>

using namespace std;

class matrix
{
    private:
    int row, col, i, j, mat[10][10], trans[10][10];

    public:
    void getdata()
    {
        cout << "\n Enter no of rows : ";
        cin >> row;
        cout << " Enter no of columns : ";
        cin >> col;
        cout << endl;
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                cout << " Enter element : ";
                cin >> mat[i][j];
            }
        }
        cout << "\n Matrix is : \n\t";
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                cout << " " << mat[i][j];
            }
            cout << endl << "\t";
        }
    }

    void transpose()
    {
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                trans[j][i] = mat[i][j];
            }
        }
    }

    void printdata()
    {
        cout << "\n Transpose of Matrix is : \n\t";
        for (i = 0; i < col; i++)
        {
            for (j = 0; j < row; j++)
            {
                cout << " " << trans[i][j];
            }
            cout << endl << "\t";
        }
    }
};

int main()
{
    matrix m;

    m.getdata();
    m.transpose();
    m.printdata();
    return 0;
}