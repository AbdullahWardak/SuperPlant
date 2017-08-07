void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
// initialize digital pin LED_BUILTIN as an output.
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int val;
val = analogRead(0); //connect sensor to Analog 0
Serial.println(val); //print the value to serial port
if (val<=300){
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
}
else if ((val>300) && (val<=950)){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);}
else { 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);}
  }
