#include <iostream>
using namespace std;
#include "person.h"

void person::set_name(string name)
{
	Name  = name;
}

void person::set_ssn_id(int ssn)
{
	ssn_id = ssn;
}/*

void person::set_ssn_id()
{

	int ssn;
	do {

		cout << "Enter The Employee ssn  :";
		cin.exceptions(cin.failbit);

		try {
			cin >> ssn;
			if(ssn>0){
			
				ssn_id = ssn;
			}
			else 
			{
				throw "cannot accept this number";
				cout << "\nerror ssn" <<ssn<< endl;

			}
			
		}
		catch (char* Error)
		{
			cerr<< Error << endl;
		}
	
		catch (...)
		{
			cerr << "error input" << endl;
		}
	} while (ssn <= 0 );

}*/


string person::get_name()
{
	return Name;
}

int person::get_ssn_id()
{
	return ssn_id;
}
