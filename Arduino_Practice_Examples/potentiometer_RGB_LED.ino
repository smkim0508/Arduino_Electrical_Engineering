int parameter = 0;
int red = 0;
int green = 0;
int blue = 0;

void setup() {
    Serial.begin(9600);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
}


void loop() {

    float parameter = analogRead(A0);

    red = abs(255*sin(parameter));
    green = abs(255*cos(parameter));
    blue = abs(255*tan(parameter));
 
    analogWrite(3, red);
    analogWrite(4, green);
    analogWrite(5, blue);

    delay(100);
}