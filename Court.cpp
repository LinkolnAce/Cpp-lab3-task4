#include "Court.h"

Court::Court(const std::string& adress, const std::string& club, const int& capacity, const int& sectorsAmount, const double& square, const std::string& cover)
{
    typeOfBuilding_ = "Court";
    adress_ = adress;
    club_ = club;
    capacity_ = capacity;
    sectrorsAmount_ = sectorsAmount;
    square_ = square;
    cover_ = cover;

    GenVisitors();
    attendCalculate();

    GenerateFileName();
    FillVector();
    CreateTicketFile();
}

Court::~Court()
{
}

void Court::ticket(int number)
{
    DeleteTicketNumber(number);
}

void Court::printInfo()
{
    std::cout << "Type of building: "<< typeOfBuilding_ << std::endl;
    std::cout << "Adress: " <<  adress_ << std::endl;
    std::cout << "Club: " << club_ << std::endl;
    std::cout << "Capacity: " << capacity_ << std::endl;
    std::cout << "Attandance: " << attendance_ << std::endl;
    std::cout << "Sectors amount: " << sectrorsAmount_ << std::endl;
    std::cout << "Square: " << square_ << std::endl;
    std::cout << "Cover: " << cover_ << std::endl;
    std::cout << "Free tickets is: ";
    for(int i = 0; i < numbers.size(); i++) {
        if (i % 10 == 0) {
            std::cout << std::endl;
        }
        std::cout << numbers.at(i) << " " ;
    }
    std::cout << std::endl;
    std::cout << std::endl;
}
