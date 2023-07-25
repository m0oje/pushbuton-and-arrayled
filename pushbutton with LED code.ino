// C++ code
//
void setup() {
  
  pinMode(8, OUTPUT);
  pinMode(6, INPUT);
}

void loop() {
  
  const int button=digitalRead(6);

  
  if (button == 1){
   
    digitalWrite(8, HIGH);
 
  } 
  else {
    
    digitalWrite(8, LOW);
  }
}
