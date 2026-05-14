String contraseñaCorrecta = "ites26";
String contraseñaIngresada = "";

int intentos = 0;
const int maxIntentos = 10;

void setup() {

  Serial.begin(9600);

  Serial.println("=== SISTEMA DE CONTRASEÑA ===");

  while (intentos < maxIntentos) {

    Serial.println("\nIngrese la contraseña:");

    while (Serial.available() == 0) {

    }

    contraseñaIngresada = Serial.readStringUntil('\n');
    contraseñaIngresada.trim();

    if (contraseñaIngresada == contraseñaCorrecta) {

      Serial.println("Contraseña correcta. Acceso permitido.");
      break;

    } else {

      intentos++;

      Serial.println("ERROR: Contraseña incorrecta.");

      Serial.print("Intentos restantes: ");
      Serial.println(maxIntentos - intentos);
    }
  }

  if (intentos == maxIntentos) {
    Serial.println("\nAcceso bloqueado.");
  }
}

void loop() {

}
