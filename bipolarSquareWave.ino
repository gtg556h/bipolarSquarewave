// Enable pin: 11
// Left and right pins: 12 and 13

int gapTime=980;
int pulseTime=20;
int en = 6;
int dir[] = {2,3};
int led=13;

void setup() {
  Serial.begin(9600);
  
  int i;
  for(i=0; i<2; i++){
  pinMode(en, OUTPUT);
  pinMode(dir[i], OUTPUT);
  pinMode(led,OUTPUT);
}

}

void loop() {
  digitalWrite(en, HIGH);
  digitalWrite(dir[0], HIGH);
  digitalWrite(dir[1], LOW);
  digitalWrite(led, HIGH);
  Serial.println("High");
  delay(pulseTime);
  digitalWrite(dir[0], LOW);
  digitalWrite(dir[1], LOW);
  digitalWrite(led, LOW);
  Serial.println("Low");
  delay(gapTime);
  digitalWrite(dir[0], LOW);
  digitalWrite(dir[1], HIGH);
  digitalWrite(led, HIGH);
  Serial.println("High");
  delay(pulseTime);
  digitalWrite(dir[0], LOW);
  digitalWrite(dir[1], LOW);
  digitalWrite(led, LOW);
  Serial.println("Low");
  delay(gapTime);
}
