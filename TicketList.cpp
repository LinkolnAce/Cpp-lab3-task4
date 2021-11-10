#include "TicketList.h"

TicketList::TicketList()
{
	
}

void TicketList::FillVector()
{
	
	std::ifstream ticketList(fileName);
	if (ticketList.is_open()) {
		{
			while (ticketList) {
				std::string str;
				std::getline(ticketList, str);
				int number = atoi(str.c_str());
				if (number == 0) {
					continue;
				}
				numbers.push_back(number);
			}
			ticketList.close();
		}

	}
	else {
		//std::cout << "NO FILE" << std::endl;
		if (typeOfBuilding_ == "Stadium") {
			for (int i = 1; i <= 100; i++) {
				numbers.push_back(i);
			}
		}
		else if (typeOfBuilding_ == "Court") {
			for (int i = 1; i <= 15; i++) {
				numbers.push_back(i);
			}
		}
		
	}
}


void TicketList::CreateTicketFile()
{
	std::ofstream ticketList;
	ticketList.open(fileName);
	if (ticketList.is_open()) {
		for (int i = 0; i < numbers.size(); i++) {
			ticketList << numbers[i] << std::endl;
		}
	}
	else
	{
		ticketList.close();
	}
	ticketList.close();
}


void TicketList::DeleteTicketNumber(const int& number)
{
	int pos;
	bool contains = false;
	if (!contains) {
		for (int i = 0; i < numbers.size(); i++) {
			if (numbers[i] == number) {
				contains = true;
				pos = i;
				break;
			}
		}
	}
	if (contains) {
		lastTaked = number;
		auto iter = numbers.begin();
		numbers.erase(iter+pos);
		CreateTicketFile();
		std::cout << club_ << " Ticket number " << number << " has been given! " << std::endl;
	}
	else {
		std::cout << club_ << " Ticket number " << number << " already taked! " << std::endl;
	}
}

void TicketList::GenerateFileName()
{
	std::string listName = club_;
	listName.erase(remove_if(listName.begin(), listName.end(), isspace), listName.end());
	fileName = listName + "Tickets" + ".txt";
}


void TicketList::ticket(int number)
{
	DeleteTicketNumber(number);
}


