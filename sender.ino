byte sendpacket[2];
int analog1;
int analog2;
byte mapvalue1, mapvalue2;
void setup() {
  // Begin the Serial at 9600 Baud

  Serial.begin(9600);
  //pinMode(A0, INPUT);
}

void loop(){
  // read analog joystick and map values !!!
  analog1 = analogRead(0);            // reads the value of the potentiometer (value between 0 and 1023)
  mapvalue1= map(analog1, 0, 965, 30, 120);
  analog2 = analogRead(1);            // reads the value of the potentiometer (value between 0 and 1023)
  mapvalue2 = map(analog2, 72, 1023, 30, 120);
  sendpacket[0] = mapvalue1;
  sendpacket[1] = mapvalue2;
 
  Serial.write(sendpacket,2);

  delay(50);  
}
