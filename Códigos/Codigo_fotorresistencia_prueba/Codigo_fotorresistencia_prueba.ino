void setup() {
    //Paso 1
    Serial.begin(9600);
    Serial.println("Valor del sensor de humedad");
}
  
void loop() {
    //Paso 2
    int humidity = analogRead(A0);
    Serial.print("Lectura:");
    Serial.println(humidity);
    //Paso 3
    if(humidity >= 0 & humidity <= 2000){
        Serial.println("Sensor en suelo humedo");  
    } else if(humidity > 2000 & humidity <= 5000){
        Serial.println("Sensor en suelo seco");
    /*}else if(humidity >= 701){
        Serial.println("Sensor en agua");
    }*/
    
}
delay(1000);
}
