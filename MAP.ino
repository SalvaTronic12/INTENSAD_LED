int led = 3;
int valorPotenciometro;
int valorMapeo;
 

void setup() {
 Serial.begin(9600);
 pinMode(led,OUTPUT);
}

void loop() {

  valorPotenciometro = analogRead(A0);

  valorMapeo = map(valorPotenciometro, 0,1023,0,255);

  
 analogWrite(led,valorMapeo);

  Serial.print("Datos del potenciometro: ");Serial.print(valorPotenciometro); 
  Serial.print(" Datos del mapeo (equivalencia):");Serial.print(valorMapeo);
  delay(200);
  Serial.println("");
}
