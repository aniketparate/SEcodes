// WAP to print a pattern.
#include<iostream>

using namespace std;

class pattern
{
    private:
    int i = 0, j = 0, n;

    public:
    void printpattern()
    {
        cout << "\n Enter no of lines : ";
        cin >> n;
        for(i = 0; i < n; i++)
        {
            cout << " ";
            for (j = 0; j <= i; j++)
            {
                cout << "*";   
            }
            cout << endl;
        }
    }
};

int main()
{
    pattern p;

    p.printpattern();
    return 0;
}