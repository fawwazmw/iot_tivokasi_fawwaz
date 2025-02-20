#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int greenlight = 26;
int yellowlight = 32;
int redlight = 33;


void setup() {
    Serial.begin(9600);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 Traffic Light");


    // Atur pin sebagai OUTPUT
    pinMode(greenlight, OUTPUT);
    pinMode(yellowlight, OUTPUT);
    pinMode(redlight, OUTPUT);
}


void loop() {
    // Nyalakan lampu merah
    digitalWrite(greenlight, LOW); digitalWrite(yellowlight, LOW); digitalWrite(redlight, HIGH);
    Serial.println("RED LIGHT ON");
    
    delay(10000); // Tunggu 10 detik

    // Nyalakan lampu kuning
    digitalWrite(greenlight, LOW); digitalWrite(yellowlight, HIGH); digitalWrite(redlight, LOW);
    Serial.println("YELLOW LIGHT ON");
    
    delay(5000); // Tunggu 5 detik 

    // Nyalakan lampu hijau
    digitalWrite(greenlight, HIGH); digitalWrite(yellowlight, LOW); digitalWrite(redlight, LOW);
    Serial.println("GREEN LIGHT ON");

    delay(10000); // Tunggu 10 detik
}
