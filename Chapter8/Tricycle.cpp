#include <iostream>

class Tricycle{
	public:
		int getSpeed();
		void setSpeed(int speed);
		void pedal();
		void brake();
	private:
		int speed;
};

// Get the trike's speed
int Tricycle::getSpeed(){
	return speed;
}

// Set the trike's speed
void Tricycle::setSpeed(int newSpeed){
	if (newSpeed >= 0){
		speed = newSpeed;
	}
}

// Pedal the trike
void Tricycle::pedal(){
	setSpeed(speed + 1);
	std::cout << "\nPedaling; tricycle speed " << speed << "mph\n";
}

// Apply the brake on the trike
void Tricycle::brake(){
	setSpeed(speed - 1);
	std::cout << "\nBraking; tricycle speed " << speed << "mph\n";
}

int main(){
	Tricycle wichita;
	wichita.setSpeed(0);
	wichita.pedal();
	wichita.pedal();
	wichita.brake();
	wichita.brake();
	wichita.brake();

	return 0;
}