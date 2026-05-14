int entero = 10;
char caracter = 'A';
float decimal = 3.14;
unsigned int uEntero = 20;
long int largo = 100000;
double doble = 5.6789;

void setup() {

  Serial.begin(9600);
  delay(4000);
  Serial.println("=== TAMAÑO Y DIRECCIONES DE MEMORIA ===\n");

  // int
  Serial.println("Variable: int");
  Serial.print("Valor: ");
  Serial.println(entero);
  Serial.print("Tamanio: ");
  Serial.print(sizeof(entero));
  Serial.println(" bytes");
  Serial.print("Direccion: ");
  Serial.println((int)&entero, HEX);
  Serial.println("---------------------------");

  // char
  Serial.println("Variable: char");
  Serial.print("Valor: ");
  Serial.println(caracter);
  Serial.print("Tamanio: ");
  Serial.print(sizeof(caracter));
  Serial.println(" bytes");
  Serial.print("Direccion: ");
  Serial.println((int)&caracter, HEX);
  Serial.println("---------------------------");

  // float
  Serial.println("Variable: float");
  Serial.print("Valor: ");
  Serial.println(decimal);
  Serial.print("Tamanio: ");
  Serial.print(sizeof(decimal));
  Serial.println(" bytes");
  Serial.print("Direccion: ");
  Serial.println((int)&decimal, HEX);
  Serial.println("---------------------------");

  // unsigned int
  Serial.println("Variable: unsigned int");
  Serial.print("Valor: ");
  Serial.println(uEntero);
  Serial.print("Tamanio: ");
  Serial.print(sizeof(uEntero));
  Serial.println(" bytes");
  Serial.print("Direccion: ");
  Serial.println((int)&uEntero, HEX);
  Serial.println("---------------------------");

  // long int
  Serial.println("Variable: long int");
  Serial.print("Valor: ");
  Serial.println(largo);
  Serial.print("Tamanio: ");
  Serial.print(sizeof(largo));
  Serial.println(" bytes");
  Serial.print("Direccion: ");
  Serial.println((int)&largo, HEX);
  Serial.println("---------------------------");

  // double
  Serial.println("Variable: double");
  Serial.print("Valor: ");
  Serial.println(doble);
  Serial.print("Tamanio: ");
  Serial.print(sizeof(doble));
  Serial.println(" bytes");
  Serial.print("Direccion: ");
  Serial.println((int)&doble, HEX);
  Serial.println("---------------------------");
}

void loop() {

}
