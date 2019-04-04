#define LED 11

void setup() {
  pinMode(LED,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED,HIGH);//selecciono el pin para usar
  delay(1000);//para por un segundo

  digitalWrite(LED,LOW);//selecciono el pin para usar
  delay(1000);//para por un segundo
}

void titilar (int x, int vecesQueTitila, int tiempoQueTitila)
{
  
}

