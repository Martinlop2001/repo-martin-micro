



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

    String linea = Serial.readStringUntil('\n');
    linea.trim();

    // Ignorar lineas vacias
    if (linea.length() == 0) {
      return;
    }

    // Iniciar variables para evitar basura
    float n1 = 0;
    float n2 = 0;
    char op = 0;

    int campos = sscanf(linea.c_str(), "%f %c %f", &n1, &op, &n2);

    // Validar que sscanf capturo los 3 elementos correctamente
    if (campos != 3) {
      Serial.print("Error: formato invalido -> '");
      Serial.print(linea);
      Serial.println("'  Ej: 10 * 2");
    }
    else {
        if (op != '+' && op != '-' && op != '*' && op != '/') {
          Serial.println("Error: operador invalido");
        }
        else {
        float resultado = calcular(n1, n2, op);

        if (!(op == '/' && n2 == 0)) {
          Serial.print("Resultado: ");
          Serial.println(resultado);
        }
      }
    }

    Serial.println("Ingrese otra operacion:");
  }
}