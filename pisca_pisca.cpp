// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT); // Cria o setup  para definir o pino 13 do arduíno UNO como saída
  pinMode(2, OUTPUT); // Cria o setup para definir o pino 2 como saída para controlar o LED externo
}
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // Liga o LED no pino 13
  digitalWrite(2, HIGH); // Liga o LED Externo no pino 2
  delay(1000); // Mantém os LEDs ligados por 1 segundo
  digitalWrite(LED_BUILTIN, LOW); // Desliga o LED no pino 13
  digitalWrite(2, LOW); // Desliga o LED externo no pino 2
  delay(500); // Mantém os LEDs desligados por 0,5 segundos
}