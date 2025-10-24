#include <DHT.h>

#define DHTPIN 2          // Broche de données du capteur
#define DHTTYPE DHT11     // Type de capteur

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("Module climatique DHT11 initialisé 🌿");
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Erreur de lecture ❌");
    return;
  }

  Serial.print("Humidité : ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Température : ");
  Serial.print(t);
  Serial.println(" °C");

  delay(2000);
}
