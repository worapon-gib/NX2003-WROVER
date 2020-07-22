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
    music.tone(587,1000);
  music.tone(784,1000);
  music.tone(932,1000);
  music.tone(880,1000);
  music.tone(784,1000);
  music.tone(587,2000);
  music.tone(523,1000);
  music.tone(880,1000);
  music.tone(784,1000);
  music.tone(932,1000);
  music.tone(880,1000);
  music.tone(740,2000);
  music.tone(880,1000);
  music.tone(587,1000);
  music.tone(587,1000);
  music.tone(784,1000);
  music.tone(932,1000);
  music.tone(880,1000);
  music.tone(784,1000);
  music.tone(587,1000);
  music.tone(698,1000);
  music.tone(659,1000);
  music.tone(622,1000);
  music.tone(988,1000);
  music.tone(932,1000);
  music.tone(587,1000);
  music.tone(622,1000);
  music.tone(622,1000);

  
}
