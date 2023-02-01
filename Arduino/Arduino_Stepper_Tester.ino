//Global Variables

#define STEP_PIN 12
#define DIR_PIN 11
#define ENA_PIN 10

void setup() {
  // put your setup code here, to run once:
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
  pinMode(ENA_PIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  forward(400);
  reverse(400);

}

void forward(int steps){
  int i;
  digitalWrite(ENA_PIN, LOW);
  digitalWrite(DIR_PIN, HIGH);
  for(i=0;i<steps;i++){
    digitalWrite(STEP_PIN, !digitalRead(STEP_PIN));
    delay(5);
  }
  digitalWrite(ENA_PIN, HIGH);
}

void reverse(int steps){
  int i;
  digitalWrite(ENA_PIN, LOW);
  digitalWrite(DIR_PIN, LOW);
  for(i=0;i<steps;i++){
    digitalWrite(STEP_PIN, !digitalRead(STEP_PIN));
    delay(5);
  }
  digitalWrite(ENA_PIN, HIGH);
}
