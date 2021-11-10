#pragma once
#include "TicketList.h"

class Court : public TicketList
{
public:
	explicit Court(const std::string& adress, const std::string& club, const int& capacity, const int& sectorsAmount, const double& square, const std::string& cover);
	~Court();
	void ticket(int number) override;
	void printInfo() override;
};

