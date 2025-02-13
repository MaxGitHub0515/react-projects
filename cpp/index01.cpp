

// making privzte variables visible and used in public with getters and setters  

class Employee{
    private:
    string Name;
    string Company;
    int Age;
    
    public:
    // now we after getters and setters we now can use 
    // private variables
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
        cout << "Name: " << Name << ", Age: " << Age << ", Company: " << Company << endl;
    }
    
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    
};


int main() {
    
    
    Employee employee1 = Employee("Sald", "YT", 45);
    employee1.setName("MAx");
    employee1.introduceYourself();
    
    Employee employee2 = Employee("Ben", "FC", 21);
    employee2.introduceYourself();
    
    
   
   
    
    

    
    
    
    
    return 0;
    
};