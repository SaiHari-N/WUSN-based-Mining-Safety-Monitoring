
int moist,t,gas,c,vib;



#include <Adafruit_Sensor.h>
#include "DHT.h"
#define DHTPIN A0    // what pin we're connected to
#define DHTTYPE DHT11   // DHT 11 

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(3,INPUT);  //gas
pinMode(4,INPUT);  // moisture
pinMode(5,INPUT);  // vibration
pinMode(A0,INPUT); //temperature

 dht.begin();
}

void loop() {
 moist= digitalRead(4);
 gas=digitalRead(3);
 vib=digitalRead(5);
 t=analogRead(A0);

     int h = dht.readHumidity();
         t = dht.readTemperature();
        float f = dht.readTemperature(true);
        
        if (isnan(h) || isnan(t) || isnan(f)) 
        {
          return;
        }
      
if (t<45)

{
Serial.println('a');
delay(1000);  
}

else 

{
Serial.println('A');
delay(1000);
}


if(gas==HIGH )
{
Serial.println('x');
delay(1000);

}
else 
{
Serial.println('X');
delay(1000); 

}
if(moist==LOW)
{
  
Serial.println('Z');
delay(1000);

}
else 
{

Serial.println('z');
delay(1000);
 

}
if(vib==LOW)
{
  
Serial.println('V');
delay(1000);  

}
else 
{

Serial.println('v');
delay(1000);
 

}
}

  
