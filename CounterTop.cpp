/*
* CounterTop.cpp
*
* COSC 051
* Project #4
*
* Author: Alexander von Mallinckrodt
*
* In accordance with the class policies and Georgetown's
* Honor Code, I certify that, with the exception of the
* class resources and those items noted below, I have neither
* given nor received any assistance on this project.
*
* References not otherwise commented within the program source code. * Note that you should not mention any help from the TAs, the professor, * or any code taken from the class textbooks.
*/
#include "CounterTop.h"
#include <iostream>
#include <iomanip>


using namespace std;

CounterTop::CounterTop(){
	region = "";
	ordercode = "";
	stonecode = '?';
	height = 0;
	length = 0;
	depth = 0;
	price = 0;
	area = 0;
	lened = 0;
	deped = 0;
}

void CounterTop::Output(){
	cout << setw(2) << stonecode
	     << setw(8) << length
	     << setw(8) << depth
	     << setw(8) << height
	     << setw(3) << lened
	     << setw(3) << deped
	     << setw(7) << region
	     << setw(15) << ordercode
	     << endl;
}

void CounterTop::OrderOutput() const {

	cout << endl
		 << setw(15) << "Order Number:" << setw(15) << ordercode << endl
	     << setw(15) << "Stone:" << setw(15) << stonecode << endl
	     << setw(15) << "Length:" << setw(15) << length << endl
	     << setw(15) << "Depth:" << setw(15) << depth << endl
	     << setw(15) << "Height:" << setw(15) << height << endl
	     << setw(15) << "Length-Edges:" << setw(15) << lened << endl
	     << setw(15) << "Depth-Edges:" << setw(15) << deped << endl
	     << setw(15) << "Region:" << setw(15) << region << endl
	     << setw(15) << "Area:" << setw(15) << area << endl
	     << setw(15) << "Cost:" << setw(15) << price << endl;
}

bool CounterTop::Comparator(string search) const {
	if (search == ordercode) {
		return true;
	} else {
		return false;
	}
}

bool RegComp(char REG){

	}

