void loop() {
  // Get some data from GPIO pins
   int depth = 0;
   int pinA1 = A1;
   int pinA2 = A2;
   int pinA3 = A3;
   int pinA4 = A4;
   int pinA5 = A5;
   float valA1 = analogRead(pinA1);
   float valA2 = analogRead(pinA2);
   float valA3 = analogRead(pinA3);
   float valA4 = analogRead(pinA4);
   float valA5 = analogRead(pinA5);
   
   if (valA1 < 100){
       //Particle.publish("testEvent", String("pin1"), PRIVATE);
       depth ++;
   }
    if (valA2 < 100){
      // Particle.publish("testEvent", String("pin2"), PRIVATE);
       depth ++;
   }
    if (valA3 < 100){
       //Particle.publish("testEvent", String("pin3"), PRIVATE);
       depth++;
   }
    if (valA4 < 100){
       //Particle.publish("testEvent", String("pin4"), PRIVATE);
       depth ++;
   }
    if (valA5 < 100){
       //Particle.publish("testEvent", String("pin5"), PRIVATE);
       depth ++;
   }

  Particle.publish("testEvent", String(("depth: ",depth)), PRIVATE);
  // Wait 10 seconds
  delay(10000);
}
      

