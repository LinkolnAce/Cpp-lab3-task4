#include "SportBuilding.h"

SportBuilding::SportBuilding()
{
}

SportBuilding::~SportBuilding()
{
}

void SportBuilding::GenVisitors()
{
    srand(1337);
    visitors_ = 0 + rand() % capacity_;
    attendCalculate();

}

void SportBuilding::attendCalculate()
{
    attendance_ = (100 * visitors_) / (float)capacity_;
}
