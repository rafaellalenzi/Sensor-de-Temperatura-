#include <ESP8266WiFi.h>          
#include <PubSubClient.h>   
#include <NTPClient.h>
#include <WiFiUdp.h>
#define sensor A0

const char* ssid = "(Substitua pelo seu WiFi)"; 
const char* password = "(Coloque a senha do mesmo)"; 
const char* mqtt_server = "test.mosquitto.org";
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "south-america.pool.ntp.org");
WiFiClient espClient;
PubSubClient client(espClient);
unsigned long lastMsg = 0;
#define MSG_BUFFER_SIZE  (50)
char msg[MSG_BUFFER_SIZE];                   
