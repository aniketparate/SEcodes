#include<iostream>
using namespace std;

class Cart
{
    private:
    int customer_id = 1200;

    protected:
    string Day = "Monday";

    public:
    string Item = "Icecream";

    int getID()
    {
        return customer_id;
    }
};
class privatederived : public Cart
{
    public:
    string getDay()
    {
        return Day;
    }
    string getItem()
    {
        return Item;
    }
};
int main()
{
    privatederived p1;
    cout<<"Unable To Access The Term Salary..."<<endl;
    cout<<"Customer Id: "<<p1.getID()<<endl;
    cout<<"Item: "<<p1.getItem()<<endl;
}