int LED = 11;
String Buff = " ";
int BUZZER = 5;
void setup() 
{
Serial.begin(9600);

pinMode (LED,OUTPUT);
pinMode (BUZZER,OUTPUT);
Serial.println("Attedence System");
      delay(2000);
     
   
}

void loop()
{
rfidcheck();
  
}
void rfidcheck(){
  
  
  if(Serial.available()>0)
  {
    Serial.println("Show your card");
  delay(2000);
    Buff=Serial.readString();
    Serial.println(Buff);
    delay(5000);
    if(Buff="5A001DCD840E" )

    {
      Serial.println("name:Ning yak bek adu ");
      Serial.println("usn :) ");
      digitalWrite(BUZZER,HIGH); 
       digitalWrite(LED,HIGH);
      delay(2000);
      digitalWrite(BUZZER,LOW);
       digitalWrite(LED,LOW);
      delay(2000);
     
    }
    else
    {
      Serial.println("invalid card");
     
    }
  }
}
