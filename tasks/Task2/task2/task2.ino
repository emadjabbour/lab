/*
the avarage ticks to excute every command in 
255 commands was 25 in time is 625ns
the without the loop function the the tracer.event() function
took 21.7265625 in time is 0.543 ns as avarage 
so the loop function takes 25 - 21.73 = 3.27 ticks which is 81.75ns



*/
#include "LetESP32.h"

const char* ssid = "NETGEAR35";
const char* password = "magicalfinch482";
const char* ws = "ws://192.168.1.2:1234";
const char* dd_id = "QGMzwS8P";

LetESP32 tracer(ssid, password, ws, dd_id);

void setup() {
   tracer.connect();
   tracer.event(1);
}

void loop() {
   tracer.event(2);   

}
