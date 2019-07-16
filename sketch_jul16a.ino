void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_BUILTIN,HIGH); 
delay(500);
digitalWrite(LED_BUILTIN,LOW); 
delay(500);                    //first pause for  letter S
digitalWrite(LED_BUILTIN,HIGH); 
delay(500);
digitalWrite(LED_BUILTIN,LOW);
delay(500);                   //second pause for letter S
digitalWrite(LED_BUILTIN,HIGH); 
delay(500);
digitalWrite(LED_BUILTIN,LOW);
delay(1500);                   // pause between letter S and O
digitalWrite(LED_BUILTIN,HIGH); 
delay(1500);
digitalWrite(LED_BUILTIN,LOW);
delay(500);                   // first pause for letter O
digitalWrite(LED_BUILTIN,HIGH); 
delay(1500);
digitalWrite(LED_BUILTIN,LOW);
delay(500);                   // second pause for letter O
digitalWrite(LED_BUILTIN,HIGH); 
delay(1500);
digitalWrite(LED_BUILTIN,LOW);
delay(1500);                 // pause between letter O and S
digitalWrite(LED_BUILTIN,HIGH);
delay(500);
digitalWrite(LED_BUILTIN,LOW); 
delay(500);                  // first pause for letter S
digitalWrite(LED_BUILTIN,HIGH); 
delay(500);
digitalWrite(LED_BUILTIN,LOW);
delay(500);                  //second pause for letter s
digitalWrite(LED_BUILTIN,HIGH);
delay(500);
digitalWrite(LED_BUILTIN,LOW);
delay(3500);                  // pause between first SOS signal and second SOS signal
}
