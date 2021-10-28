// WAP tofind GCD of 2 nos.

#include<iostream>

using namespace std;

class GCD
{
    private: 
    int n1, n2, i, num;

    public:
    void getdata() 
    {
        cout << "\n Enter 1st number : ";
	    cin >> n1;
        cout << " Enter 2nd number : ";
        cin >> n2;

        for(i=1; i <= n1 && i <= n2; ++i)
        {
            if(n1%i==0 && n2%i==0)
            num = i;
        }
    }

    void printdata()
    {
        cout << "\n GCD of ("<< n1 <<") and ("<< n2 <<") is : " << num;
    }
};

int main()
{
    GCD a;

    a.getdata();
    a.printdata();
    return 0;
}