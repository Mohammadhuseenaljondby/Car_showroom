#include<iostream>
using namespace std;
#include "customers.h"

//void customers::setTicket_id()
//{
//	float id;
//	do {
//		cin >> id;
//		if (id > 0 )
//			ticket_id = id;
//		else
//			cout << "\n\n\t\t\t\t number not found  enter corect number :";
//
//	} while (id < 0);
//}

void customers::setTicket_id(float id)
{
	ticket_id = id;
}

void customers::setSeat_type(int set)
{
	seat_type = set;
}

//void customers::setSeat_type()
//{
//	int s = 1;
//	int seat;
//	
//	do {
//		cin >> seat;
//		if ((seat == 1)|| (seat == 2)) {
//			seat_type = seat;
//			s = 0;
//		}
//		else
//			cout << " \n\n\t\t\t\tEnter Corect Choice   1 or 2 :";
//	} while (s);
//}

float customers::getTicket_id()
{
	return ticket_id;
}

int customers::getSeat_type()
{
	return seat_type;
}
