/*
the avarage ticks to excute every command in 
255 commands was 21.7265625 in time is 0.543 ns
and in every 1 microsecond we get about 250 cycle on the 240MHz
speed which was 136 ~ cpu cycle 
the overheads are the time needed to excute the tracer.event() function

*/

//lab2TestCoade.ino
//emsys_compile lab2TestCoade
//emsys_upload -p /dev/ttyUSB0 lab2TestCoade
#include "LetESP32.h"

const char* ssid = "NETGEAR35";
const char* password = "magicalfinch482";
const char* ws = "ws://192.168.1.2:1234";
const char* dd_id = "QGMzwS8P";

LetESP32 tracer(ssid, password, ws, dd_id);

void setup() {
   tracer.connect();
}

void loop() {
   tracer.event(1);   
   tracer.event(2);   
   tracer.event(3);  
   tracer.event(4); 
}
