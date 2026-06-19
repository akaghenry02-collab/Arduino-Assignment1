int ledPin = 13;
int startValue = 5;

//  Function to flash the LED a specified number of times
void flashLED(int times){
int flash = 0;
// Repeat until the LED has flashed the required number of times
while(flash < times){
digitalWrite(ledPin, HIGH);
delay(200);
digitalWrite(ledPin, LOW);
delay(200);

flash++;
   }
}

void setup() {
pinMode(ledPin, OUTPUT);
Serial.begin(9600);

Serial.println("=== Smart Countdown Starting ===");

int count = startValue;
// Continue counting down until count reaches 0

while(count > 0){
Serial.print("Counter is: ");
Serial.println(count);

// Flash LED 6 times for each countdown step
flashLED(count);

delay(1000);
count = count - 1;
}
Serial.println("=== Countdown Complete ===");
}
void loop() {
// put your main code here, to run repeatedly:

}


