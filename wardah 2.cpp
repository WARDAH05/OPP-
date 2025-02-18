#include <iostream>
using namespace std;
float GrossSalary(float basicSalary, float allowancePercentage) {
    return basicSalary + (basicSalary * allowancePercentage / 100);
}
float NetSalary(float grossSalary, float deductionPercentage) {
    return grossSalary - (grossSalary * deductionPercentage / 100);
}
int main() {
    float basicSalary, allowancePercentage, deductionPercentage;
    cout << "Enter the basic salary: ";
    cin >> basicSalary;
    cout << "Enter the allowance percentage: ";
    cin >> allowancePercentage;
    cout << "Enter the deduction percentage: ";
    cin >> deductionPercentage;
    float grossSalary = GrossSalary(basicSalary, allowancePercentage);
    float netSalary = NetSalary(grossSalary, deductionPercentage);
    cout<<"GrossSalary =" <<grossSalary<<endl;
    cout << "The final net salary is: " << netSalary << endl;

    return 0;
}