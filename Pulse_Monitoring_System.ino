#include <PulseSensorPlayground.h>

int LED13 = 13;  
int pulse = A0; 
int Threshold = 550;  

PulseSensorPlayground pulseSensor;

void setup() {
  pinMode(LED13, OUTPUT);
  Serial.begin(9600);
  
  pulseSensor.analogInput(pulse);
  pulseSensor.setThreshold(Threshold);
  pulseSensor.begin();
}

void loop() {
   int bpm = pulseSensor.getBeatsPerMinute();

   if (pulseSensor.sawStartOfBeat()) {
     Serial.print("BPM: ");
     Serial.println(bpm);
     digitalWrite(LED13, HIGH);  // Blink on heartbeat
   } else {
     digitalWrite(LED13, LOW);
   }

   delay(20);
}