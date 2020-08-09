#include <iostream>

using namespace std;




class Date 
{
//private data can only be accessed by class body itself//
private:
	int month,day,year;

public:
	//class constructors can be overloaded if perameters differ//
	Date(int m,int d,int y)
	{
		month = m;
		day = d;
		year = y;
	}

	Date(int m,int y)
	{
		month = m;
		day = 0;
		year = y;

	}
	//default constructor
	Date()
	{
		month = 0;
		day = 0;
		year = 0;
	}

	void setDate(int m,int d,int y)//accessors
	{

      month = m;
      day = d;
      year = y;



	}

	void setMonth(int m)//set methods
	{
		if(m<1 || m>12)
			cout<<"bad month"<<endl;
		else
			month = m;
    }

	void setDay(int d)
	{
		day = d;
	}

	void setYear(int y)
	{
		year = y;
	}

	int getMonth()const //get methods
	{
		return month;
	}

	int getYear() const
	{
		return year;
	}

	int getDay() const
	{
		return day;
	}

	void displayDate()//display method
	{
		cout << day << "/" << month << "/" << year;
	}

	void addDay(int n)//more methods
	{
		day+=n;
	}

	void addMonth(int n)
	{
		month +=n;
	}

	void addYear(int n)
	{
		year+=n;
	}

	bool equals(Date dt)//no operator overloading//
	{
		if((month==dt.month)&& (day==dt.day)&& (year==dt.year))
			return true;
		else
			return false;
	}




};

int main()
{
    Date today(3,4,2011);//use of constructor//
    Date yesterDay(2,2011);
    Date tomorrow;
    tomorrow.setDate(1,2,2020);
    cout << tomorrow.getDay() <<endl;
    cout << tomorrow.getMonth()<<endl;
    cout << tomorrow.getYear()<<endl;
    cout << tomorrow.displayDate();
    Date tomorrow = today
    if(tomorrow.equals(today))
    {
    	cout << "same day"<< endl;
    }
    else 
    {
    	cout << "diff day"<< endl;
    }
	return 0;
}