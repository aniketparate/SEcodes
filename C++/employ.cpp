#include<iostream>

using namespace std;

class employ
{
public:
    double Employee_no;
    string Empolyee_name;
    double basic;
    double DA;
    double ID;
    double IT;
    double netSalary;

    void employeeDetails () {
        cout << " Enter Employee No : ";
	    cin >> Employee_no;
	    cout << " Enter Employee Name : ";
	    cin >> Empolyee_name;
        cout << " Enter Employee ID : ";
	    cin >> ID;
	    cout << " Enter basic : ";
	    cin >> basic;
    }

    void Salary(){
        DA = 1.32 * basic;
        IT = 0.3 * (basic + DA);
        netSalary = (basic + DA) - IT;
    }

    void display() {
        cout<<"------------------------\n Employee No : "<<Employee_no<<endl;
        cout<<" Employee Name : "<<Empolyee_name<<endl;
        cout<<" ID : "<<ID<<endl;
        cout<<" Basic : "<<basic<<endl;
        cout<<" DA : "<<DA<<endl;
        cout<<" IT : "<<IT<<endl;
        cout<<" Net Salary : "<<netSalary<<endl;
    }
};

int main()
{
    employ e;

    e.employeeDetails();
    e.Salary();
    e.display();
    return 0;
}