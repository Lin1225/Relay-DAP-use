String str;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  digitalWrite(6,0);
  pinMode(4,INPUT);
}

void loop() {
  int a=digitalRead(4);
  if (Serial.available()) {
    // 讀取傳入的字串直到"\n"結尾
    str = Serial.readStringUntil('\n');
 
    if (str == "ON") {           // 若字串是 "ON" 開始吸
      digitalWrite(6,1);
          
    } else if (str == "OFF") {
      digitalWrite(6,0);
    }
  }
  Serial.println(a);
  delay(1000);
}


  

