// Declaracion de varaibles
const int SALIDA1 = 6;
const int SALIDA2 = 5;
const int SALIDA3 = 4;
const int SALIDA4 = 3;
const int SALIDA5 = 2;
const int SALIDA6 = 1;
const int SALIDA7 = 0;

void numeroImprimir(int numero) {
  switch (numero)
   {
   case 0:
      //Cero
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, LOW);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, HIGH);
      delay(1000);
      break;
   case 1:
      digitalWrite(SALIDA1, HIGH);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA7, HIGH);
      delay(1000);
      break;
   case 2:
      //DOS
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, HIGH);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, LOW);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 3:
      //TRES
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 4:
      //CUATRO
      digitalWrite(SALIDA1, HIGH);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 5:
      //CINCO
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, HIGH);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 6:
      //SEIS
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, HIGH);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, LOW);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 7:
      //SIETE
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA7, HIGH);
      delay(1000);
      break;
   case 8:
      //OCHO
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, LOW);
      digitalWrite(SALIDA5, LOW);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   case 9:
      //NUEVE
      digitalWrite(SALIDA1, LOW);
      digitalWrite(SALIDA2, LOW);
      digitalWrite(SALIDA3, LOW);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, LOW);
      digitalWrite(SALIDA7, LOW);
      delay(1000);
      break;
   default:
      digitalWrite(SALIDA1, HIGH);
      digitalWrite(SALIDA2, HIGH);
      digitalWrite(SALIDA3, HIGH);
      digitalWrite(SALIDA4, HIGH);
      digitalWrite(SALIDA5, HIGH);
      digitalWrite(SALIDA6, HIGH);
      digitalWrite(SALIDA7, HIGH);
      break;
   }
}

void setup() {
  pinMode(SALIDA1, OUTPUT);
  pinMode(SALIDA2, OUTPUT);
  pinMode(SALIDA3, OUTPUT);
  pinMode(SALIDA4, OUTPUT);
  pinMode(SALIDA5, OUTPUT);
  pinMode(SALIDA6, OUTPUT);
  pinMode(SALIDA7, OUTPUT);
}

void loop() {
  numeroImprimir(0);
  numeroImprimir(1);
  numeroImprimir(2);
  numeroImprimir(3);
  numeroImprimir(4);
  numeroImprimir(5);
  numeroImprimir(6);
  numeroImprimir(7);
  numeroImprimir(8);
  numeroImprimir(9);
}
