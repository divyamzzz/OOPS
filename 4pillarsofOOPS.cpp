#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Job  //abstraction
{
private:    //encapsualation
    string name;
    string location;
    int salary;

protected:
    void setInternalSalary(int amount)
    {
        salary = amount;
    }

public:
    Job(string n, string l)
    {
        name = n;
        location = l;
        salary = 0;
    }

    virtual void viewSalary() = 0;

    virtual void setSalary(int basic, int special)  //static polymorphism 
    {
        
    }

    virtual void setSalary(int basic, int special, int hra) //static polymorphism 
    {
        
    }
    virtual void getIncrement(int experience)=0;

    void viewInfo()
    {
        cout << "Company Name: " << name << endl;
        cout << "Company Location: " << location << endl;
    }

    int getSalary()
    {
        return salary;
    }
};

class Software : public Job   //inheritance 
{
public:
    Software(string a, string b): Job(a, b)
    {
    }

    void setSalary(int basic, int special) override
    {
        setInternalSalary(basic + special);
    }

    void viewSalary() override
    {
        cout << "Software Salary: "<< getSalary() << endl;
    }
    void getIncrement(int experience) override //dynamic polymorphism 
    {
        int currentSalary=getSalary();
        if(experience>2)
        {
            setInternalSalary(currentSalary+2000);
        }
    }
};

class HR : public Job
{
public:
    HR(string a, string b) : Job(a, b)
    {
    }

    void setSalary(int basic, int special, int hra) override
    {
        setInternalSalary(basic + special + hra);
    }

    void viewSalary() override
    {
        cout << "HR Salary: "<< getSalary() << endl;
    }
    void getIncrement(int experience) override //dynamic polymorphism
    {
        cout<<"No Increment";
    }
};

int main()
{
    Job* myJob = new Software("Company Software", "Noida");

    myJob->viewInfo();

    myJob->setSalary(1000, 2000);

    myJob->viewSalary();

    cout << endl;

    Job* myJobHR = new HR("Company HR", "Noida");

    myJobHR->viewInfo();

    myJobHR->setSalary(1000, 4000, 3000);

    myJobHR->viewSalary();
    
    myJob->getIncrement(3);
    myJob->viewSalary();
    
    myJobHR->getIncrement(3);
    

    delete myJob;
    delete myJobHR;

    return 0;
}
