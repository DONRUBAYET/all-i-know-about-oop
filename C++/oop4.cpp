#include <iostream>
#include <string>
#include <sstream>
#include <vector>


using namespace std;



class Employee
{
protected:
	string name;
	double pay;
public:
	Employee()//default constructor
	{
		name = "";
		pay = 0;
	}

	Employee(string empName,double payRate)
	{
        name = empName;
        pay = payRate
	}

	~Employee()
	{
		//destructors
	}

	//getter and setter


	string getName()
	{
		return name;
	}

	void setName(string empName)
	{
          name = empName;
	}

	string getPay()
	{
       return pay;
	}

	void setPay(double payRate)
	{
		pay = payRate;
	 }



	 //now toString method



	 string toString()
	 {
	 	//return name + ": "+pay;//
	 	stringstream stm;
	 	stm << name << ":" << pay;
	 	return stm.str();
	 }









};


// derived or inherited class 


class Manager : public Employee {
private:
	bool salaried;
public:
	Manager():salaried(true){}//default constructor


	Manager(string name,double payRate,bool isSalaried)// name and pay cant be directly accessed//
	: Employee(name,payRate)
	{
		salaried = isSalaried;
	}

	~Manager()
	{
		//free all the allocated memory....// destrutors// auto call
	}


	bool getSalaried()
	{
		return salaried;
	}

	double grossPay(int hours)          		// no access to private but protected can do that


	{
		if(salaried)
		{
			return pay;
		} 
		else 
		{
			return pay*hours;
		}

	}





};




int main()


{
   
  vector<Employee> emps;#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// base class
class Employee {
    protected:
        string name;
        double pay;
    public:
        Employee() {
            name = "";
            pay = 0;
        }
        Employee(string empName, double payRate) {
            name = empName;
            pay = payRate;
        }


        string getName() const {
            return name;
        }

        void setName(string empName) {
            name = empName;
        }

        int getPay() {
            return pay;
        }

        void setPay(int payRate) {
            pay = payRate;
        }

        string toString() {
            stringstream stm;
            stm << name << ": " << pay;
            return stm.str();
        }

        virtual double grossPay(int hours) {
            return pay * hours;
        }
};

// derived class

class Manager : public Employee {
    private:
       bool salaried;

    public:

        Manager(string name, double pay, bool isSalaried)
         : Employee(name, pay)
         {
             salaried = isSalaried;
         }

        bool getSalaried() {
            return salaried;
        }

       virtual  double grossPay(int hours) {
            if (salaried) {
                return pay;
            } else {
                return pay * hours;
            }
        }

        string toString() {
            stringstream stm;
            string salary;
            if (salaried) {
                salary = "Salaried";
            } else {
                salary = "Hourly";
            }
            stm << name << ": " << pay
                << ": " << salary << endl;
            return stm.str();
        }
};

int main()
{
    vector<Employee> emps;
    Employee emp1("Jones", 25.00);
    Manager mgr1("Smith", 1200, true);
    emps.push_back(emp1);
    emps.push_back(mgr1);
    for (int i = 0; i < emps.size(); ++i) {
        cout << emps[i].grossPay(40) << endl;
    }
    return 0;
}

  Employee emp1("jane smith",340000);//employee grosspay will be used
  Manager mgr1("robet hanaman",69000,true);
  emps.push_back(emp1);
  emps.push_back(mgr1);
  for(int i=0;i<emps.size();i++)
  {
  	cout << emps[i].grossPay(4) << endl;// not work
  } 

  Employee *empPtr;
  empPtr = &emp1;
  cout << "employee" << emp1->getName() << endl;
  cout << "pay" << emp1->grossPay(40) << endl;
  cout << "manager"	<< mgr1->getName() << endl;
  cout << "pay" << mgr1->grossPay(40) << endl;// pointer class will not work as polymorphism




	return 0;
}