#include <Arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiAP.h>
#include <WebServer.h>


#include <NX2003BUZZER.h>

NX2003BUZZER music = NX2003BUZZER();




void setup()
{
  music.begin();

  music.setTempo(145);
}
void loop()
{
    music.tone(587,500);
  music.tone(932,1000);
  music.tone(587,500);
  music.tone(932,1000);
  music.tone(622,500);
  music.tone(587,1000);
  music.tone(554,500);
  music.tone(880,1000);
  music.tone(932,1000);
  music.tone(587,1000);
  music.tone(554,1000);
  music.tone(554,500);
  music.tone(587,1000);

  
}
