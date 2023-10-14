#define trigPin 2
#define echoPin 3

int cm;
void setup(){
  Serial.begin(9600);'
 pinMode (trigPin,OUTPUT);
 pinMode (echoPin,INPUT);
}

void loop () {
  
  lerDistancia();
  
  Serial.println(cm);

  
  
}

void lerDistancia (){
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  int distancia = pulseIn(echoPin,HIGH);

  cm = distancia / 58;
}
