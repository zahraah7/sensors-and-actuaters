// Example code for KY-010
// photo interrupter module
 
int photo_pin = 2; // define the photo interrupter sensor interface
int Led = 3 ;// define LED Interface
int val ;// define numeric variables val
void setup ()
{
  pinMode (Led, OUTPUT) ;// define LED as output interface
  pinMode (photo_pin, INPUT) ;// define the photo interrupter sensor output interface   
}
void loop ()
{
  val = digitalRead (photo_pin) ;// digital interface will be assigned a value of 3 to read val
  if (val == HIGH) // When the light sensor detects a signal is interrupted, LED flashes
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
}
