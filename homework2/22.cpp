#include <iostream>
#include <fstream>
#include <string>
#include<limits>
using namespace std;
struct Employee {
    int id;
    char* name;
    char* phoneNumber;
    char* postalCode;
    char* address;
}employees[100];

int main() {
    ofstream file("staff.dat", ios::binary | ios::out );

    if (!file) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }
    cout<<"Please enter the number of the staff"<<endl;
    int num=0;
    cin>>num;
    for (int i = 0; i < num; i++) {
        int id;
        char name[20];
        char phonenumber[20];
        char postnumber[20];
        char address[20];
        cout << "Enter employee ID: ";
        cin >> id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the newline character left in the input buffer
        cout << "Enter employee name: ";
        cin.getline(name, 20);
        cout << "Enter employee phone number: ";
        cin >> phonenumber;
        cout << "Enter employee postal code: ";
        cin >> postnumber;
        cout << "Enter employee address: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the newline character left in the input buffer
        cin.getline(address, 20);
        //cout<<id<<name<<phonenumber<<postnumber<<address<<endl;
        Employee em = {id, name, phonenumber, postnumber, address};
        cout<<sizeof(em)<<endl;
        //cout<<employee.id<<employee.name<<employee.phoneNumber<<employee.postalCode<<employee.address<<endl;
        file.write((char*)&em, sizeof(Employee));
    }
    file.close();
    int searchId;
    cout << "Enter employee ID: ";
    cin >> searchId;
    fstream opfile("staff.dat", ios::binary | ios::in | ios::out);
    Employee foundEmployee;
    bool found = false;
    while (opfile.read(reinterpret_cast<char*>(&foundEmployee), sizeof(foundEmployee))) { 
        if (foundEmployee.id == searchId) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Name: " << foundEmployee.name << endl;
        cout << "Phone Number: " << foundEmployee.phoneNumber << endl;
        cout << "Postal Code: " << foundEmployee.postalCode << endl;
        cout << "Address: " << foundEmployee.address << endl;
    } else {
        cout << "Employee not found." << endl;
    }
    file.close();
    system("pause");
    return 0;
}