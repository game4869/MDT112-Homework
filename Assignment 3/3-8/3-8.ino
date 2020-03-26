void setup(){
    Serial.begin(9600);
    int i = 1;
    int id = 6+2+1+2+0+5+0+1+0+0+9; //26
    for(i=1;i<=1000;i++){
        if(i % id ==0){
            Serial.println(i);
        }
    }
}

void loop(){
    
}