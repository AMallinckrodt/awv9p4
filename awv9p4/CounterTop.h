/*
* CounterTop.h
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

#ifndef AWV9P4_COUNTERTOP_H
#define AWV9P4_COUNTERTOP_H


#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

class CounterTop{
private:
	string region;
	string ordercode;
	double height;
	double length;
	double depth;
	double price;
	double area;
	int lened;
	int deped;
	char stonecode;

public:
	CounterTop();

	void setReg(string R) {region = R;}
	void setOC(string OC) {ordercode = OC;}
	void setH(double H) {height = H;}
	void setL(double L) {length = L;}
	void setD(double D) {depth = D;}
	void setP(double P) {price = P;}
	void setA(double A) {area = A;}
	void setLE(int LE) {lened = LE;}
	void setDE(int DE) {deped = DE;}
	void setSC(char SC) {stonecode = SC;}

	double getP() const{
		return price;
	}

	double getA() const{
		return area;
	}

	string getR() const{
		return region;
	}

	 string getO() const{
		return ordercode;
	}

	char getSC() const{
		return stonecode;
	}

	void Output();
	void OrderOutput() const;

	bool Comparator(string) const;

	bool RegComp(char);

};



#endif //AWV9P4_COUNTERTOP_H
