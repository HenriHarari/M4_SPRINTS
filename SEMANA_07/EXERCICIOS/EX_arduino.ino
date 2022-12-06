
//definindo portas t
#define ledamarelo 17
#define ledazul 3
#define ledverde 6
#define ledvermelho 19
#define LDR 11
#define botao_1 36
#define botao_2 45
#define Buzzer 39

//definição de variaveis usadas ao longo do código
int FREQUENCIAS[100];
int BINARIO[4];
int i = 0;
int y = 0;
int x = 0;


void convertebinario(int vluz) { // Transformando em binário.
  while(i < 4){
    // Resto dividido por 2
    BINARIO[i] = vluz % 2;
    i++;
    vluz = vluz / 2;
  }
  i = 0;
}
void led_acesa(){
  if (BINARIO[0] == 1){
    digitalWrite(ledvermelho, HIGH);
  }
  else{
    digitalWrite(ledvermelho, LOW);
  }
    if (BINARIO[1] == 1){
    digitalWrite(ledverde, HIGH);
  }
  else{
    digitalWrite(ledverde, LOW);
  }
    if (BINARIO[2] == 1){
    digitalWrite(ledazul, HIGH);
  }
  else{
    digitalWrite(ledazul, LOW);
  }
    if (BINARIO[3] == 1){
    digitalWrite(ledamarelo, HIGH);
  }
  else{
    digitalWrite(led_amarelo, LOW);
  }
}
// Indentificando se o número binario faz o led apagar ou acender
void armazenafrequencia(int inteiro){ //Botao mudando a frequencia do buzzer
    frequencias[x] = inteiro;
    x = x + 1;
    tone(buzzer, inteiro*700, 250);
  }
void musica(){
    while(y < x){
      tone(BUZZER, FREQUENCIAS[y] * 200, 700);
      y++;
      convbinario(frequencias[y]);
      ledaceso();
      delay(500);
    }
  }
void setup() {

  Serial.begin(115200);
  pinMode(ledamarelo, OUTPUT);
  pinMode(ledazul, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(ledvermelho, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LDR, INPUT);
  pinMode(botao_1, INPUT_PULLUP);
  pinMode(botao_2, INPUT_PULLUP);
}
void loop() {
  int VALORLDR = (analogRead(LDR));
  int CONVERTENDOLUZ = (VALORLDR/269);
  convbinario(VALORLDR);
  if (digitalRead(botao_1) == LOW) {
    ledaceso();
        armazenafrequencia(CONVERTENDOLUZ);
  }
  if(digitalRead(botao_2) == LOW) {
   MUSIC();
  }
  delay(500);
}
