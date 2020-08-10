#include <iostream>


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
	Employee empl1("jane smith",32000);

	Manager empl2('billy kidden',40000,true);

	empl2.grossPay();





	return 0;
}