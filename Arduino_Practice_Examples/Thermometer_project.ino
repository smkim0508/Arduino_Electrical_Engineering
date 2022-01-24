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
  analogReference(1.1); //sets full scale from 5V to 1.1V
}

void loop() {

    temp = analogRead(A0);
    temp = temp * 1.1/1023 //scales based on full scale
    temp = temp/10; //fixates 10mv/Cº to mv/Cº

    Serial.println("Temperature in celcius is: " + temp);
    
    if (temp < 10) {
        red = 0;
        green = 0;
        blue = 255;
    }

    if (temp < 30 && temp > 10) {
        red = 0;
        green = 255;
        blue = 0;
    }

    if (temp > 30) {
        red = 255;
        green = 0;
        blue = 0;
    }
    
    analogWrite(3, red);
    analogWrite(4, green);
    analogWrite(5, blue);

    delay(100);
}