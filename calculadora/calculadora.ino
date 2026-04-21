


void setup() {
  Serial.begin(115200);
  Serial.println("Calculadora iniciada");
  Serial.println("Ingrese operacion ej: 10 * 2");
}

float calcular(float n1, float n2, char op) {
  if (op == '+') {
    return n1 + n2;
  }
  else if (op == '-') {
    return n1 - n2;
  }
  else if (op == '*') {
    return n1 * n2;
  }
  else if (op == '/') {
    if (n2 == 0) {
      Serial.println("Error: division por 0");
      return 0;
    }
    return n1 / n2;
  }
  else {
    Serial.println("Error: operador invalido");
    return 0;
  }
}

void loop() {
  if (Serial.available() > 0) {

    float n1 = Serial.parseFloat();

    
    while (Serial.available() == 0);

    char op = Serial.read();

    // Ignorar  espacios y saltos de línea
    while (op == ' ' || op == '\n' || op == '\r') {
      while (Serial.available() == 0);
      op = Serial.read();
    }

    float n2 = Serial.parseFloat();

    float resultado = calcular(n1, n2, op);

    // Validación final
    if ((op == '+' || op == '-' || op == '*' || op == '/') && !(op == '/' && n2 == 0)) {
      Serial.print("Resultado: ");
      Serial.println(resultado);
    }

  
    while (Serial.available() > 0) {
      Serial.read();
    }

    Serial.println("Ingrese otra operacion:");
  }
}
