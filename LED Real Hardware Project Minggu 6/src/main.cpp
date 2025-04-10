#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int lampuMerah = 26;   // LED Merah
int lampuBiru = 33;    // LED Biru
int lampuKuning = 27;  // LED Kuning
int lampuHijau = 14;   // LED Hijau

void setup() {
    Serial.begin(9600);  // Inisialisasi komunikasi Serial
    Serial.println("ESP32 Blinking LED");

    // Atur semua pin sebagai OUTPUT
    pinMode(lampuMerah, OUTPUT);
    pinMode(lampuBiru, OUTPUT);
    pinMode(lampuKuning, OUTPUT);
    pinMode(lampuHijau, OUTPUT);
}

void loop() {
    // Mode 1: Nyalakan semua LED secara bersamaan
    Serial.println("Mode 1: Semua LED menyala bersamaan");
    digitalWrite(lampuMerah, HIGH);
    digitalWrite(lampuBiru, HIGH);
    digitalWrite(lampuKuning, HIGH);
    digitalWrite(lampuHijau, HIGH);
    delay(1000); // Tunggu 1 detik

    digitalWrite(lampuMerah, LOW);
    digitalWrite(lampuBiru, LOW);
    digitalWrite(lampuKuning, LOW);
    digitalWrite(lampuHijau, LOW);
    delay(1000); // Tunggu 1 detik

    // Mode 2: Nyalakan LED secara berurutan (Merah -> Biru -> Kuning -> Hijau)
    Serial.println("Mode 2: LED menyala berurutan");
    digitalWrite(lampuMerah, HIGH);
    delay(500);
    digitalWrite(lampuMerah, LOW);

    digitalWrite(lampuBiru, HIGH);
    delay(500);
    digitalWrite(lampuBiru, LOW);

    digitalWrite(lampuKuning, HIGH);
    delay(500);
    digitalWrite(lampuKuning, LOW);

    digitalWrite(lampuHijau, HIGH);
    delay(500);
    digitalWrite(lampuHijau, LOW);

    // Mode 3: Nyalakan LED secara bergantian (Merah <-> Biru, Kuning <-> Hijau)
    Serial.println("Mode 3: LED menyala bergantian");
    digitalWrite(lampuMerah, HIGH);
    digitalWrite(lampuBiru, LOW);
    digitalWrite(lampuKuning, HIGH);
    digitalWrite(lampuHijau, LOW);
    delay(500);

    digitalWrite(lampuMerah, LOW);
    digitalWrite(lampuBiru, HIGH);
    digitalWrite(lampuKuning, LOW);
    digitalWrite(lampuHijau, HIGH);
    delay(500);

    // Mode 4: Pola acak (LED menyala dengan timing acak)
    Serial.println("Mode 4: Pola acak");
    for (int i = 0; i < 5; i++) {  // Ulangi 5 kali
        int randomLED = random(4); // Pilih LED secara acak (0-3)
        switch (randomLED) {
            case 0:
                digitalWrite(lampuMerah, HIGH);
                delay(300);
                digitalWrite(lampuMerah, LOW);
                break;
            case 1:
                digitalWrite(lampuBiru, HIGH);
                delay(300);
                digitalWrite(lampuBiru, LOW);
                break;
            case 2:
                digitalWrite(lampuKuning, HIGH);
                delay(300);
                digitalWrite(lampuKuning, LOW);
                break;
            case 3:
                digitalWrite(lampuHijau, HIGH);
                delay(300);
                digitalWrite(lampuHijau, LOW);
                break;
        }
    }

    delay(1000); // Jeda sebelum mengulang semua mode
}