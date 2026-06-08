

const String CONTRASEÑA = "ites123";  

bool accesoPermitido = false;
unsigned long ultimoBlink = 0; 
int intervalosBlink = 100;       
bool estadoLED = false;          

void setup() {
  delay (4000);
  Serial.begin(115200);
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);

  Serial.println("Ingrese la contraseña y presione ENTER:");
}

void loop() {
  if (!accesoPermitido) {

    unsigned long ahora = millis();
    if (ahora - ultimoBlink >= intervalosBlink) {
      ultimoBlink = ahora;
      estadoLED = !estadoLED;
      digitalWrite(8, estadoLED ? HIGH : LOW);
    }


    if (Serial.available() > 0) {
      String ingresado = Serial.readStringUntil('\n');

      if (ingresado == CONTRASEÑA) {
        accesoPermitido = true;
        digitalWrite(8, LOW);
        Serial.println("Contraseña correcta.");
      } else {
        Serial.println("Contraseña incorrecta. Intente de nuevo:");
      }
    }

  } else {
  }
}
