#pragma once
#include "ISeasonTicketProvider.h"
#include "SportBuilding.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class TicketList : public SportBuilding
{
public:
	virtual void ticket(int number);
	TicketList();

protected:
	void FillVector();
	void CreateTicketFile();
	void DeleteTicketNumber(const int& number);
	void GenerateFileName();
	std::vector<int> numbers;
	std::string fileName;
	int lastTaked, tickets;
	
};

