 long lasttime = 0;
String state = "ON";
 void setup()
{
  pinMode(2,INPUT_PULLUP); 
   pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(7,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);

  Serial.begin(9600);  
}

int x = 1;
void loop()
{
    long currentTime = millis();
 if (state == "ON" && currentTime - lasttime >=500)
    {
        state = "OFF";
        lasttime = currentTime;
    } else if (state == "OFF" && currentTime - lasttime >=500)
    {
        state = "ON";
        lasttime = currentTime;
    }
     else if (state == "OFF"){
     if(digitalRead(2) == 1) 
    { 
     digitalWrite(3,0);
     digitalWrite(4,0);
     digitalWrite(5,0);
     digitalWrite(6,0);
     digitalWrite(7,0);
     digitalWrite(8,0);
     digitalWrite(9,0);
     digitalWrite(10,0);
     digitalWrite(11,0);
     digitalWrite(12,0);
     digitalWrite(13,0);
    }
    }
    else if (state == "ON"){
      if(digitalRead(2) == 0) 
    {
      digitalWrite(3,1);
      digitalWrite(4,1);
      digitalWrite(5,1);
      digitalWrite(6,1);
      digitalWrite(7,1);
      digitalWrite(8,1);
      digitalWrite(9,1);
      digitalWrite(10,1);
      digitalWrite(11,1);
      digitalWrite(12,1);
      digitalWrite(13,1);
      }
      }
    
      Serial.println(x);
      x++;

    }

    