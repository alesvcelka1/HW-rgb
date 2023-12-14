#define red 9
#define green 10
#define blue 11
#define gnd 8

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(gnd, OUTPUT);
  digitalWrite(gnd, LOW);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {  
      for (int i = red; i <= blue; i++) {
    int intensity = Serial.parseInt();
        if (intensity >= 0 && intensity <= 255){
        analogWrite(i, intensity);
      }else{
         Serial.println("Intensity should be between 0 and 255.");
      }
      }
  }
}
