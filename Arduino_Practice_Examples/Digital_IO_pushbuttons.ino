// When the push button is pressed the LED is on, and when the push button is not pressed, the LED is off. 

int push_button = 11;
int value = 0;

void setup() {
Serial.begin(9600);
pinMode(push_button, INPUT_PULLUP);
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  value = digitalRead(push_button);
if (value == HIGH){
  digitalWrite (LED_BUILTIN, LOW);
  Serial.println("push button on");
}
else if (value == LOW){
  digitalWrite (LED_BUILTIN, HIGH);
  Serial.println("push button off");
} 

}

// When the push button is pressed the LED comes on, when the push button is pressed again the LED goes off. This is sometimes called a toggle, Push on, push off.
/*
int push_button = 11;
int value = 0;
int toggle = 1;
void setup() {
Serial.begin(9600);
pinMode(push_button, INPUT_PULLUP);
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  value = digitalRead(push_button);
if (value == LOW){
  toggle++;
  delay(200);
  //Serial.println("push button on");
  Serial.println(toggle);
}
if (toggle % 2 == 0){
  digitalWrite (LED_BUILTIN, LOW);
}
else if (toggle % 2 != 0){
  digitalWrite (LED_BUILTIN, HIGH);
}
}
*/