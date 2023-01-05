  

#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);


void setup() 

{
  // put your setup code here, to run once:
lcd.begin(16,2);
Serial.begin(9600);
pinMode(4,OUTPUT);
lcd.setCursor(0,0);
lcd.print("WUSN BASED  ");
lcd.setCursor(0,1);
lcd.print("COAL MINING ");
delay(2000);
lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()>0)
              {
                //  
             char c =  Serial.read();
           
                  if(c=='A')
                  {  
                       

                    lcd.setCursor(0,0);
                    lcd.print("Temp_H");
                    digitalWrite( 4,HIGH);
  delay(1000);
 digitalWrite( 4,LOW);

              
                    
                   }
                   
             if(c=='a')
                {
                  lcd.setCursor(0,0);
                    lcd.print("Temp_L");
                  digitalWrite(4,LOW);

                }
                    
           


                  
                  
 if(c=='x')
  {
  lcd.setCursor(0,1);
  lcd.print("GAS_LOW ");
  digitalWrite( 4,LOW);
 
  }
 if (c=='X')
  {
  lcd.setCursor(0,1);
  lcd.print("GAS_HIGH");
   digitalWrite( 4,HIGH);
  delay(1000);
 digitalWrite( 4,LOW);
 
  } 
if (c=='z')
  {
  lcd.setCursor(9,1);
  lcd.print("MOIS_L");
  digitalWrite( 4,LOW);


  }
  
 if(c=='Z')
  {
  lcd.setCursor(9,1);
  lcd.print("MOIS_H");
  digitalWrite( 4,HIGH);
  delay(1000);
 digitalWrite( 4,LOW);
  
  
  }
  if(c=='V')
  {
  lcd.setCursor(9,0);
  lcd.print("VIB_H");
  digitalWrite( 4,HIGH);
  delay(1000);
 digitalWrite( 4,LOW);
 
  }
  if(c=='v')
  {
  lcd.setCursor(9,0);
  lcd.print("VIB_L");
   digitalWrite( 4,LOW);

  }
    }

}
