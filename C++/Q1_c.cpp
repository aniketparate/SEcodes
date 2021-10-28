// WAP to count balnk spaces, digits, vove;ls and consonents in a string.
#include<iostream>

using namespace std;

class str
{
    private:
    int digit = 0, vowel = 0, consonent = 0, space = 0;
    string a;
        
    public:
    void getdata()
    {
        cout << "\n Enter the string : ";
        getline(cin, a);
        
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            {
                ++vowel;
            }
            else if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
            {
                ++consonent;
            }
            else if (a[i] >= '0' && a[i] <= '9')
            {
                ++digit;
            }
            else if (a[i] = ' ')
            {
                ++space;
            }
        }
    }

    void printdata()
    {
        cout << "\n VOWELS : " << vowel;
        cout << "\n CONSONENT : " << consonent;
        cout << "\n DIGIT : " << digit;
        cout << "\n SPACE : " << space;
    }
};

int main()
{
    str s;

    s.getdata();
    s.printdata();
    return 0;
}