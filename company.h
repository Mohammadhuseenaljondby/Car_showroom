#pragma once
class company
{ private:
	float plane_fule;
	float _rent;
	float miscella;

public:
	void set_PlaneFule();
	void set_Rent();
	void set_Miscella();

	float get_PlaneFule();
	float get_Rent();
	float get_Miscella();
	company() {
		plane_fule = 400;
		_rent = 350;
		miscella = 1200;
	}
	~company() {
		//cout << " \n\n\t\t\t\t\t  this siction is  finished  here  \n \n\t\t\t\t\tgood loock    -_-   \n";
	}

};

