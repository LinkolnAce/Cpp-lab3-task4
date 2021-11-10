#pragma once
#include "TicketList.h"

class Stadium : public TicketList
{
public:
	explicit Stadium(const std::string& adress, const std::string& club,
				     const int& capacity, const int& sectorsAmount, const double& square, const std::string& cover);
	~Stadium();
	void ticket(int number);
	void printInfo() override;

};
