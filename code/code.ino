#include <dummy.h>

// defines pins numbers
const int trigPin = 5;
const int echoPin = 17;
// Motor B connections
int enB = 21;
int in3 = 18;
int in4 = 19;
bool reverse = false;

// defines variables
long duration;
int distance;
void setup() {

  
  // pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  // pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  // Serial.begin(9600); // Starts the serial communication
  	// Set all the motor control pins to outputs
	pinMode(enB, OUTPUT);
	pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);
	
	// Turn off motors - Initial state
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
  reverse = false;

}
void loop() {
  // // Clears the trigPin
  // digitalWrite(trigPin, LOW);
  // delayMicroseconds(2);
  // // Sets the trigPin on HIGH state for 10 micro seconds
  // digitalWrite(trigPin, HIGH);
  // delayMicroseconds(10);
  // digitalWrite(trigPin, LOW);
  // // Reads the echoPin, returns the sound wave travel time in microseconds
  // duration = pulseIn(echoPin, HIGH);
  // // Calculating the distance
  // distance = duration * 0.034 / 2;
  // // Prints the distance on the Serial Monitor
  // Serial.print("Distance: ");
  // Serial.println(distance);
  // if (distance > 5 && distance < 100){
  //   digitalWrite(in3, LOW);
	//   digitalWrite(in4, HIGH);
    analogWrite(enB, 256);
  //   reverse = true;
  // }
  // else {
  //   if (reverse){
  //   digitalWrite(in3, HIGH);
	//   digitalWrite(in4, LOW);
  //   analogWrite(enB, 256);
  //   reverse = false;
  //   }
  
  //   delay(500);
  //   analogWrite(enB, 0);
  // }
}
