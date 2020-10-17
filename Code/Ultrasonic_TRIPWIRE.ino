const int trigPin = 9;
const int echoPin = 10; //DigitalPin values for each pin for ultrasnoic sensor and buzzer
const int buzzer = 2;

long duration;   //Variables used in calulation of distance
int distance; 

void setup() {
  pinMode(trigPin, OUTPUT);  // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);  // Sets the echoPin as an Input
  Serial.begin(9600);       // Starts the serial communication
  pinMode(buzzer, OUTPUT); 
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance= duration*0.034/2;
  //if the distance between the ultrasonic sensor and buzzer is < 10cm the buzzer will sound
  if (distance < 10){
    tone(buzzer, 1000);   // Send 1KHz sound signal...
    delay(1000);          // ...for 1 sec
    noTone(buzzer);       // Stop sound...
    delay(1000);  
  }
}
