# define smokeA0 A5

void setup()
{
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}

void loop(){
  int analogSensor = analogRead(smokeA0);
  Serial.print("value is : ");
  Serial.println(analogSensor);
  delay(100);
  
}
