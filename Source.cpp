
#include "Stadium.h"
#include "Court.h"
int main() {

	SportBuilding* sportBuildings[3];
	Court* court = new Court("Kensington street 36", "Andromeda Club", 100, 4, 300, "Rubber");
	sportBuildings[0] = court;
	
	Stadium* stadiumA = new Stadium("Parkinson street 69", "Blue Laguna", 10000, 25, 10000, "Grass");
	sportBuildings[1] = stadiumA;

	Stadium* stadiumB = new Stadium("Kievsy street 111", "Shakhtar", 25000, 50, 25000, "Grass");
	sportBuildings[2] = stadiumB;

	for (auto sportBuilding : sportBuildings) {
		printf("This sports buildings has a TicketProvider: ");
		ISeasonTicketProvider* provider = dynamic_cast<ISeasonTicketProvider*>(sportBuilding);
		if (sportBuilding != nullptr) {
			provider->ticket(3);
			sportBuilding->printInfo();
		}
		
	}
	return 0;
}