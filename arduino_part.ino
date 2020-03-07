const int outputPin = 6;
const int s1 = A0;
const int s2 = A1;
const int s3 = A2;
const int highHit = 50;
const int lowHit = 20;

int sr1 = 0;
int sr2 = 0;
int sr3 = 0;


void setup() {
  Serial.begin(115200);
  pinMode(outputPin, OUTPUT);
}

void loop() {
  sr1 = analogRead(s1);
  sr2 = analogRead(s2);
  sr3 = analogRead(s3);


  if(sr1 >= highHit){
    Serial.print("12");
    delay(0001);
  }
  else if(sr1 >= lowHit){
    Serial.print("11");
    delay(0001);

  }
  if(sr2 >= highHit){
    Serial.println("22");
    delay(0001);

  }
  else if(sr2 >= lowHit){
    Serial.print("21");
    delay(0001);

  }
  if(sr3 >= highHit){
    Serial.print("32");
    delay(0001);

  }
  else if(sr3 >= lowHit){
    Serial.print("31");
    delay(0001);

  }
}
