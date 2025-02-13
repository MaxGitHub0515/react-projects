

// Abstraction using virtual
// hiding complex things behind the precedure that makes those things simple POV

#include <iostream>
using namespace std;

class AbsEmp {
    // obligatory using keyword virtual - making it virtual func
    virtual void askForProm() = 0;
    // employee signs the contract using : AbsEmp 
    // inheritence used 
};

// : AbsEmp - employyed signed the contract
// next step - use overrider in public in Employee class
class Employee: AbsEmp{
    private:
    string Name;
    string Company;
    int Age;
    
    public:
  
    void setName(string name){
        Name = name;
    }
    
    string getName() {
        return Name;
    }
    
    void setAge(int age) {
        if(age >= 30 ){
            Age = age;
        }
        
    }
    
    int getAge() {
        return Age;
    }
    
    void setCompany(string company) {
        Company = company;
        
    }
    
    string getCompany() {
        return Company;
    }
    void introduceYourself() {
       
    }
    
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    
    void askForProm() override {
        if(Age > 30) {
            cout << Name << " got promoted" << endl;
        } else {
            cout << "No promotion for ya " << Name << endl;
        }
        }
    
    
};




int main() {
    
    
    Employee employee1 = Employee("Sald", "YT", 45);
    employee1.askForProm();
    
    Employee employee2 = Employee("Ben", "FC", 21);
    employee2.askForProm();
    
    
   
   
  
    
    return 0;
    
};

/* OUTCOME */


/* 
Sald got promoted
No promotion for ya Ben
*/