#include <iostream>

using namespace std;
//class declaration....data stype+operations//
class Name {

private:
	string first,middle,last;//class variable//
public:
	Name(string fname,lname,mname)//constructor method//
	{
       first = fname;//assignments//
       middle = mname;
       last = lname;

	}

	string toString()//normal methods//
	{
		return first+" "+middle+" "+last;
	}




};



int main()


{
	Name myName("Shahriar","Rahman","Rubayet");//object or accessors//

	cout << myName.toSting()<<endl;//accessors//

	





return 0;
}