#include <iostream>
#include <string>
using namespace std;
struct Employee {
    string name;
    double salary;};
void inputEmployeeData(Employee &emp) {
    cout << "Enter employee name: ";
    cin.ignore();
    getline(cin, emp.name);
    cout << "Enter employee salary: ";
    cin >> emp.salary;}
void displayEmployeeData(Employee employees[], int count) {
    cout << "Employee Records:";
    for (int i = 0; i < count; ++i) {
        cout << "Name: " << employees[i].name << ", Salary " << employees[i].salary << endl;}
	}
void findHighestSalary(Employee employees[], int count) {
    int highestIndex = 0;
    for (int i = 1; i < count; ++i) {
        if (employees[i].salary > employees[highestIndex].salary) {
            highestIndex = i;}
    }
    cout << "Employee with the highest salary:";
    cout << "Name: " << employees[highestIndex].name << ", Salary " << employees[highestIndex].salary << endl;}
int main() {
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;
    Employee employees[numEmployees];
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << i + 1 << ":";
        inputEmployeeData(employees[i]);
    }
    displayEmployeeData(employees, numEmployees);
    findHighestSalary(employees, numEmployees);
    return 0;
}