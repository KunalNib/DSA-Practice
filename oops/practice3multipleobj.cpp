/*
Create a class ‘Employee’ with following data members :
Class should have following member functions:

:- Name
:- Employee ID
:- Salary

Display() : To display the characteristics of each employee

Create 5 objects of Employee and write functions to calculate
:- averageWage() : To return the average salary of all employees
:- maxSalary() : To return the employee whose salary is maximum
*/
#include<iostream>
#include<vector>
using namespace std;
class Employee{
    private:
    string name;
    int EmployeeId;
    int salary;
    public:
    void setEmployee(string name,int EmployeeId,int salary){
        this->name=name;
        this->salary=salary;
        this->EmployeeId=EmployeeId;
    }
    int  getsalary(){
        return salary;
    }
    void Display(){
        cout<<name<<endl;
        cout<<EmployeeId<<endl;
        cout<<salary<<endl<<endl;
    }
};
int avgsalary(vector<Employee> & emp){
    int n=emp.size();
    int salarysum=0;
    for(int i=0;i<n;i++){
        salarysum+=emp[i].getsalary();
    }
    return salarysum/n;

}
int maxsalary(vector<Employee> &emp){
    int n=emp.size();
    int maxsalary=emp[0].getsalary();
    for(int i=1;i<n;i++){
        if(emp[i].getsalary()>maxsalary){
            maxsalary=emp[i].getsalary();
        }
    }
    return maxsalary;
}
int main(){
    Employee kunal;
    kunal.setEmployee("kunal",1087,15000);
    kunal.Display();
    Employee parth,samkit,akash,shreyash;
    parth.setEmployee("parth",1088,11000);
    akash.setEmployee("akash",1089,12000);
    samkit.setEmployee("samkt",1090,13000);
    shreyash.setEmployee("Shereyash",1091,11000);
    vector<Employee> emp={kunal,parth,akash,samkit,shreyash};
    cout<<avgsalary(emp)<<endl;
    cout<<maxsalary(emp)<<endl;
}
