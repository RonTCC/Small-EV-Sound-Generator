#include <Arduino.h>
#include <avr/pgmspace.h>
#include "CR-V_arduino_audio_u8_8khz.h"   // your generated header

void setup() {
    //PLDuino::init();
}

void loop() {
    //tone(9, 1000);
    for (unsigned long i = 0; i < 20000; i++) {
      tone(9, pgm_read_byte(&audio_data[i]));
      delayMicroseconds(1250);  // 8 kHz sample rate
    }
}