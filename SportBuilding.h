#pragma once

#include<iostream>
#include <string>
#include <fstream>
#include"ISeasonTicketProvider.h"

class SportBuilding : public ISeasonTicketProvider
{

public:
	
	SportBuilding();
	virtual void printInfo() = 0;
	virtual ~SportBuilding();

protected:

	std::string typeOfBuilding_;

	std::string adress_;
	std::string club_;
	int sectrorsAmount_;
	int capacity_;
	double square_;
	std::string cover_;

	double attendance_;
	int visitors_;



	void attendCalculate();
	void GenVisitors();

};

