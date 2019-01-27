#include "Tricycle.hpp"

// Constructor for the object
Tricycle::Tricycle(int initialSpeed){
	setSpeed(initialSpeed);
}

// Destructor for the object
Tricycle::~Tricycle(){
	// Do nothing
}

// Set the trike's speed
void Tricycle::setSpeed(int newSpeed){
	if (newSpeed >= 0){
		speed = newSpeed;
	}
}

// Create a trike and ride it
int main(){
	Tricycle trike(5);
	trike.pedal();
	trike.pedal();
	trike.brake();
	trike.brake();
	trike.brake();
	return 0;
}