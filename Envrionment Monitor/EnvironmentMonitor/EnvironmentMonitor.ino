#include<WiFi.h>; 
#include<DHT.h>; 
#include<AWS_IOT.h>; 
#define DHT_PIN 33 
#define DHT_TYPE DHT11 
#define WIFI_SSID "Wifi Name" 
#define WIFI_PASSWD "Wifi Password" 
#define CLIENT_ID "Temp_Humidity"// thing unique ID
#define MQTT_TOPIC "MQTT topic" // MQTT data topic
#define AWS_HOST "Get Host ID" // your host for uploading data to AWS
DHT dht(DHT_PIN, DHT_TYPE);
AWS_IOT aws;
void setup(){
  Serial.begin(9600);
  Serial.print("\nInitializing thing Temp_Humidity_DHT11_0 \n");
  Serial.print("\n  Initializing WIFI: Connecting to ");
  Serial.println(WIFI_SSID);
  WiFi.begin(WIFI_SSID, WIFI_PASSWD);
  Serial.print("  ");
  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(500);
  }
  Serial.println("\n  Connected.\n  Done");
  Serial.print("\n  Initializing DHT11...");
  dht.begin();
  Serial.println("  Done.");
  Serial.println("\n  Initializing connetction to AWS....");
  if(aws.connect(AWS_HOST, CLIENT_ID) == 0){ 
    Serial.println("  Connected to AWS\n  Done.");
  }
  else {
    Serial.println("  Connection failed");
  }
  Serial.println("  Done.\n\nDone.\n");
}
void loop(){

  float temp = dht.readTemperature(); 
  float humidity = dht.readHumidity();

  if(temp == NAN || humidity == NAN){
    Serial.println("Reading failed.");
  }
  else{
    String temp_humidity = "Temperature: ";
    temp_humidity += String(temp);
    temp_humidity += "°C Humidity: ";
    temp_humidity += String(humidity);
    temp_humidity += " %";
   
    char payload[40];
    temp_humidity.toCharArray(payload, 40);
    Serial.println("Publishing:- ");
    Serial.println(payload);
     if(aws.publish(MQTT_TOPIC, payload) == 0){
      Serial.println("Success\n");
    }
    else{
      Serial.println("Failed!\n");
    }
  }
  delay(1000);
}