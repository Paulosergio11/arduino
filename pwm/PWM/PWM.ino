/**
 * Exemplo de uso do PWM 
 * Exemplo 1 comntrole da velocidade de um motor dc
 * @author Alexandro dos Reis
 */
 int efeito = 10;

void setup() {
  pinMode(11, OUTPUT); // importante!!! (saida PWM)
  pinMode(3, OUTPUT); // importante!!! (saida PWM)
}
void loop() {
  for(int i=0; i>=0; i++){
    analogWrite(11,i);
    delay(efeito);
  }
     for(int i=0; i<=0; i++){
    analogWrite(3,i);
    delay(efeito);
  }

}
