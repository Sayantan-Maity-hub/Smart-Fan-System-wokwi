#include "DHT.h"

#define DHTPIN 2          // DHT data pin
#define DHTTYPE DHT22     // Sensor type
#define FANPIN 9          // PWM pin connected to LED or Servo

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  pinMode(FANPIN, OUTPUT);
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  int fanSpeed;

  if (temperature < 25) {
    fanSpeed = 50;  // low speed
  } else if (temperature < 35) {
    fanSpeed = 128; // medium
  } else {
    fanSpeed = 255; // high
  }

  analogWrite(FANPIN, fanSpeed); // control fan (LED brightness)

  delay(2000); // update every 2 seconds
}
