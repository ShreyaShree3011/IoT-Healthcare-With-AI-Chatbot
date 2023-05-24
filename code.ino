#include <LiquidCrystal_I2C.h>
#include <Wire.h>
const int trigPin = 5;
const int echoPin = 6;
const int trigPin2 = 7;
const int echoPin2 = 8;
long duration;
int distance,hight,be;
long reading;
LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display
#include "HX711.h"

// HX711 circuit wiring
const int LOADCELL_DOUT_PIN = 3;
const int LOADCELL_SCK_PIN = 4;
int show = -1,s=0,m=0;
float bm;
float vout,Iout,P,sout,sout1,Iout1,aout;
HX711 scale;

void setup()
{
  int error;
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
    pinMode(trigPin2, OUTPUT); 
  pinMode(echoPin2, INPUT); 
  Serial.begin(9600);
  Serial.println("LCD...");
//attachInterrupt(pin_irq, IRQcounter, RISING);


be=0;
lcd.clear();

lcd.setBacklight(255);


  lcd.setCursor(0, 0);
  lcd.print(" health care");
  lcd.setCursor(0, 1);
  lcd.setBacklight(255);
delay(1000);

  // wait on Serial to be available on Leonardo
  while (!Serial)
    ;

  Serial.println("Dose: check for LCD");

  // See http://playground.arduino.cc/Main/I2cScanner how to test for a I2C device.
  Wire.begin();
  Wire.beginTransmission(0x27);
  error = Wire.endTransmission();
  Serial.print("Error: ");
  Serial.print(error);

  if (error == 0) {
    Serial.println(": LCD found.");
    show = 0;
    lcd.begin(20, 4); // initialize the lcd

  } else {
    Serial.println(": LCD not found.");
  } // if

lcd.print("Health care");
//lcd.setCursor(0, 1);
//lcd.print("monitoring system");
delay(2500);
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
 pinMode(9, OUTPUT);
 pinMode(2, INPUT);
} // setup()


void loop()
{
s++;
int t=analogRead(A0); //Reading the value from sensor

//t=(t*100)/1023;
t=t/2;
  if (digitalRead(2)== HIGH)
  {
be++;
  }
if(s>180)
{
 Serial.print(reading); ///distance/aout/vout/sout/reading
 Serial.print(",");                    
Serial.print(hight); 
Serial.print(","); 
  Serial.print(be);
  Serial.print(","); 
  Serial.print(t); 
Serial.print(",");
  Serial.print(bm); 
  Serial.print(",");
Serial.println("0");

  
be=0;
s=0;
m++;
}

if(m>60)
{
  m=0;
  
  }

if((m==1)&&(s<3))
{
 lcd.clear();
    lcd.setCursor(0,0);
  lcd.print("tablet remainder");
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
}


if((m==2)&&(s<3))
{
 lcd.clear();
    lcd.setCursor(0,0);
  lcd.print("syrup remainder");
   digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
}

if((m==3)&&(s<3))
{
 lcd.clear();
    lcd.setCursor(0,0);
  lcd.print("medicine before");
  lcd.setCursor(0,1);
  lcd.print("food alert");
   digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
}

 if (scale.is_ready()) {
     reading = scale.read();
    reading=reading/10000;
    reading=reading;
   // Serial.print("HX711 reading: ");
    //Serial.println(reading);
  }


  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); 
  distance= duration*0.034/2;

   digitalWrite(trigPin2, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration = pulseIn(echoPin2, HIGH); 
  hight= duration*0.034/2; 
  reading=reading*2;
  hight=200-hight;
  float hei=hight;
bm=hei/100;
 bm=(reading/(bm*bm));
lcd.clear();
    lcd.setCursor(0,0);
  lcd.print("W ");
lcd.print(reading);
lcd.setCursor(4,0);
  lcd.print(" H ");
lcd.print(hight);
lcd.setCursor(10,0);
 lcd.print(" HB ");
lcd.print(be);
  lcd.print(" ");
lcd.print(bm);

 lcd.setCursor(0,1);
  lcd.print("d ");
lcd.print(distance);
 lcd.setCursor(6,1);
  lcd.print(" T ");
lcd.print(t);

 lcd.setCursor(12,1);
  lcd.print(s/3);
lcd.setCursor(15,1);
 lcd.print(m);


lcd.print(" ");
//lcd.print(reading);
// Serial.print(Iout1);   
// Serial.print(",");            
 

 delay(333);
if(reading>10)
{
  delay(1000);
lcd.clear();
    lcd.setCursor(0,0);
  lcd.print("BMI ");
lcd.print(bm);
 delay(2000);
if(bm<19)
{
  delay(1000);
lcd.clear();
    lcd.setCursor(0,0);
  lcd.print("under weight");
  delay(2000);
}


if(bm>27)
{
  delay(1000);
lcd.clear();
    lcd.setCursor(0,0);
  lcd.print("over weight");
  delay(2000);
}

if((bm<27)&&(bm>19))
{
  delay(1000);
lcd.clear();
    lcd.setCursor(0,0);
  lcd.print("normal weight");
  delay(2000);
}

}
 

 if(distance<15)
 {
  digitalWrite(9, HIGH);
  delay(1000);
 }
 else
 {
  digitalWrite(9, LOW);
 }

}