
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

// Base : Subclass/Derived
class Developer: Employee{
   public:
   string languFav;
   //constructor - dont worry about name company age 
   // as we have them in constr, and it know how to construct them POV
   // here Employee is a constructor
   // Employee(name, company, age) in same order as Developer
   Developer(string name, string company, int age, string langFav):Employee(name, company, age){
       languFav = langFav;
   };
   
    void fixBug() {
        cout << getCompany() << " fixed bug using " << languFav << endl;
    }
   
};

int main() {
    
  
    // then create a constructor as 
    // we have to because we inherite properties 
    // where there is a custom* constructor
    Developer obj  = Developer("Jasmin", "SoftSkill", 31, "Python");
    obj.fixBug();
   
    
    

    
    
    
    
    return 0;
    
};