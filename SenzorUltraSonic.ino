int trig=12, eccho=13;
int gnd, vcc;
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(eccho, INPUT);
  Serial.begin(9600);
}

long t, d;

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  t = pulseIn(eccho, HIGH);
  d = t /58;
  Serial.println(d);
}
