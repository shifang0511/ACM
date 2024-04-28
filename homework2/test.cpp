#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int num=0;
    char name[20],Employee_ID[20],PhoneNumber[20],Address[20],PostalCode[20];
    ofstream outfile("staff.dat",ios::out|ios::binary);
    cout<<"Please enter the information of the staff"<<endl;
    while(cin>>name>>Employee_ID>>PhoneNumber>>Address>>PostalCode)
    {
        outfile<<name<<Employee_ID<<PhoneNumber<<Address<<PostalCode;
    }
    outfile.close();
    cout<<"Please enter the employee ID you want to search"<<endl;
    string employeeID;
    cin >> employeeID;
    ifstream infile("staff.dat",ios::in|ios::binary);
    string tempName, tempEmployeeID, tempPhoneNumber, tempAddress, tempPostalCode;
    bool found = false;
    while (infile >> tempName >> tempEmployeeID >> tempPhoneNumber >> tempAddress >> tempPostalCode) {
        if (tempEmployeeID == employeeID) {
            cout << "Employee found!" << endl;
            cout << "Name: " << tempName << endl;
            cout << "Employee ID: " << tempEmployeeID << endl;
            cout << "Phone Number: " << tempPhoneNumber << endl;
            cout << "Address: " << tempAddress << endl;
            cout << "Postal Code: " << tempPostalCode << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Employee not found!" << endl;
    }
    infile.close();
}
/*
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int num=0;
    char name[20],Employee_ID[20],PhoneNumber[20],Address[20],PostalCode[20];
    ofstream outfile("staff.dat",ios::out|ios::binary);
    cout<<"Please enter the information of the staff"<<endl;
    while(cin>>name>>Employee_ID>>PhoneNumber>>Address>>PostalCode)
    {
        outfile<<name<<Employee_ID<<PhoneNumber<<Address<<PostalCode;
    }
    outfile.close();
    cout<<"Please enter the employee ID you want to search"<<endl;
    string employeeID;
    cin >> employeeID;
    ifstream infile("staff.dat",ios::in|ios::binary);
    string tempName, tempEmployeeID, tempPhoneNumber, tempAddress, tempPostalCode;
    bool found = false;
    while (infile >> tempName >> tempEmployeeID >> tempPhoneNumber >> tempAddress >> tempPostalCode) {
        if (tempEmployeeID == employeeID) {
            cout << "Employee found!" << endl;
            cout << "Name: " << tempName << endl;
            cout << "Employee ID: " << tempEmployeeID << endl;
            cout << "Phone Number: " << tempPhoneNumber << endl;
            cout << "Address: " << tempAddress << endl;
            cout << "Postal Code: " << tempPostalCode << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Employee not found!" << endl;
    }
    infile.close();
}*/
