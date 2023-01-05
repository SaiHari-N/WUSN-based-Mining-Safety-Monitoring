#include"ServoTimer2.h"
#include"SD.h"
#define SD_ChipSelectPin 10
#include"TMRpcm.h"
#include"SPI.h"
TMRpcm tmrpcm;
ServoTimer2 head;
ServoTimer2 lhand;
ServoTimer2 rhand;
int in1= 6;
int in2= 7;
int in3= 8;
void setup() 
{
 head.attach(2);
 lhand.attach(3);
 rhand.attach(4);
 tmrpcm.speakerPin=9;
 Serial.begin(9600);
 if(!SD.begin(SD_ChipSelectPin))
 {
  Serial.println("SD FAIL");
  return; 
 }
}
void loop() 
{
  if(!(digitalRead(in3)))
  {
   tmrpcm.play("welcome.wav"); 'welcome.wav'
    lhand.write(2500);
    delay(2000);
    lhand.write(1200);
    delay(9000);
  }
  if(!(digitalRead(in1)))
  {
    tmrpcm.play("dont.wav");
    rhand.write(300);
    head.write(2000);
    delay(3000);
  }
 
  if(!(digitalRead(in2)))
  {
    tmrpcm.play("dont.wav");
    lhand.write(2000);
    head.write(1000);
    delay(3000);
  }
 
 else
 {
  
  lhand.write(300);
  rhand.write(1700);
  head.write(1500);
 }
}
