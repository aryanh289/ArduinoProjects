#include "DHT.h"
#include "U8glib.h"

#define DHTPIN 2
#define DHTTYPE DHT11  
#define RELAY_PIN 7    

DHT dht(DHTPIN, DHTTYPE);

// Initialize OLED Display (I2C)
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE | U8G_I2C_OPT_DEV_0);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH);  // Fan OFF by default
}

void loop() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C  Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // Control Fan
  if (temperature > 32.00) {  
    Serial.println("Fan ON");
    digitalWrite(RELAY_PIN, LOW);  // Turn fan ON
  } else {
    Serial.println("Fan OFF");
    digitalWrite(RELAY_PIN, HIGH);  // Turn fan OFF
  }

  // Display Data on OLED
  u8g.firstPage();
  do {
    u8g.setFont(u8g_font_6x12);
    u8g.drawStr(10, 20, "Temp: ");
    u8g.setPrintPos(60, 20);
    u8g.print(temperature);
    u8g.drawStr(100, 20, "C");

    u8g.drawStr(10, 40, "Humidity: ");
    u8g.setPrintPos(70, 40);
    u8g.print(humidity);
    u8g.drawStr(100, 40, "%");

    u8g.drawStr(10, 60, (temperature > 32.00) ? "Fan: ON" : "Fan: OFF");
  } while (u8g.nextPage());

  delay(2000);
}
