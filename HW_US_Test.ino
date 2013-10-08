/*
  Hockey Warrior - Ultrasonics Test
  Tests the Ultrasonic Sensors & prints the results
 */
 
 #include "config.h"
 #include <NewPing.h> 

NewPing US_back(BACK_ULTRASONIC_SENSOR_TRIG, BACK_ULTRASONIC_SENSOR_ECHO, MAX_ULTRASONIC_DISTANCE_CM);
NewPing US_front(FRONT_ULTRASONIC_SENSOR_TRIG, FRONT_ULTRASONIC_SENSOR_ECHO, MAX_ULTRASONIC_DISTANCE_CM);

unsigned int US_back_cm;
unsigned int US_front_cm;

void setup() {
  Serial.begin(115200);      // open the serial port at 9600 bps:

  DEBUG_PRINT("Starting...");
}

void loop() {
	// Read each sensor in a loop
  US_back_cm = US_back.ping_cm();
  US_front_cm = US_front.ping_cm();  

  PLOT("US_back_cm", US_back_cm);
  PLOT("US_front_cm", US_front_cm);
}