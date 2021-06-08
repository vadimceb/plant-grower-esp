// Emulate Serial1 on pins 6/7 if not present
#ifndef HAVE_HWSERIAL1
#include "SoftwareSerial.h"
SoftwareSerial Serial1(6, 7); // RX, TX
#endif

void setup()
{
    Serial.begin(115200);
    Serial.println();
    Serial.println("Starting serial print to pc");

    Serial1.begin(115200);
    Serial1.println("Starting serial print to Serial1");
}

void loop()
{
    static int i = 0;
    Serial.println(String(i));
    Serial1.println(String(i));
    delay(5000);
    i++;
}
