long lasttime = 0;
String state = "ON";
void setup(){
     pinMode(2,OUTPUT);
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
}

void loop(){
    long currentTime = millis();
 if (state == "ON" && currentTime - lasttime >=250)
    {
        state = "OFF";
        lasttime = currentTime;
    } else if (state == "OFF" && currentTime - lasttime >=250)
    {
        state = "ON";
        lasttime = currentTime;
    }
     if (state == "ON"){
     digitalWrite(2,1);
     digitalWrite(3,1);
     digitalWrite(4,1);
     digitalWrite(5,1);
     digitalWrite(6,1);
     digitalWrite(7,1);
     }
    else if (state == "OFF"){
     digitalWrite(2,0);
     digitalWrite(3,0);
     digitalWrite(4,0);
     digitalWrite(5,0);
     digitalWrite(6,0);
     digitalWrite(7,0);
    }
    if (state == "ON"){
     digitalWrite(8,1);
     digitalWrite(9,1);
     digitalWrite(10,1);
     digitalWrite(11,1);
     digitalWrite(12,1);
     digitalWrite(13,1);
    }
    else if (state == "OFF"){
     digitalWrite(8,0);
     digitalWrite(9,0);
     digitalWrite(10,0);
     digitalWrite(11,0);
     digitalWrite(12,0);
     digitalWrite(13,0);
    }

}