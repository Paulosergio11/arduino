/**
 * Exemplo de uso do PWM 
 * Exemplo 1 comntrole da velocidade de um motor dc
 * @author Alexandro dos Reis
 */

void setup() {
  pinMode(3, OUTPUT); // importante!!! (saida PWM)

}
void loop() {
 analogWrite(3,25); //PWM (0a255)
  
}
