void setup() 
{
  // initialize the serial communication:
  Serial.begin(9600);
  pinMode(12, INPUT); // Setup for leads off detection LO +
  pinMode(8, INPUT); // Setup for leads off detection LO -
 
}
 
void loop() {
 
  if((digitalRead(8) == 1)||(digitalRead(12) == 1)){
  Serial.println(0);
}
else{
  // send the value of analog input 0:
  Serial.println(analogRead(A0));
}
  //Wait for a bit to keep serial data from saturating
  delay(8);
}