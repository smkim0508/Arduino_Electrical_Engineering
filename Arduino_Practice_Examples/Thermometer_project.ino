int tempPin = A0;
float temp = 0;

int red = 0;
int green = 0;
int blue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  analogReference(INTERNAL); //sets full scale from 5V to 1.1V
}

void loop() {

    temp = analogRead(A0);
    temp = temp * (1100/1023); //scales based on full scale
    temp = temp/10; //fixates 10mv/Cº to mv/Cº

    Serial.print("Current Temperature in Celcius is: ");
    Serial.println(temp);
    
    if (temp < 15) {
        red = 0;
        green = 0;
        blue = 255;
    }

    if (temp < 25 && temp > 15) {
        red = 0;
        green = 255;
        blue = 0;
    }

    if (temp > 25) {
        red = 255;
        green = 0;
        blue = 0;
    }
    
    analogWrite(3, red);
    analogWrite(4, green);
    analogWrite(5, blue);

    Serial.println(red);
    Serial.println(green);
    Serial.println(blue);

    delay(100);
}