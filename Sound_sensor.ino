//This code interfaces microphone with the ardunio nano


int sensorPin = A1;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
int values[200];
int i=0;
void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  if(sensorValue >0 && sensorValue<200 || sensorValue >350)
  {
   if(i==200)
   {
    i=0;
   }
   else
   {
    values[i]=sensorValue;
     Serial.println(values[i]);
    i++;
   }
  }
  // turn the ledPin on

}
