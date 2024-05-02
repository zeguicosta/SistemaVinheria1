// Define os pinos para os LEDs e o sensor LDR
int ledVermelho = 13; 
int ledAmarelo = 12; 
int ledVerde = 11; 
int LDR = A0; // Pino analógico para o LDR
int valorLDR = 0; // Variável para armazenar a leitura do LDR
int buzzer = 9; // Pino para o buzzer
int intensidadeLuz; //Transforma a leitura em uma escala de 0 a 100

void setup() {
    Serial.begin(9600); // Inicia a comunicação serial
    
    // Configura os pinos dos LEDs como saída
    pinMode(ledVermelho, OUTPUT);
    pinMode(ledAmarelo, OUTPUT);
    pinMode(ledVerde, OUTPUT);
    
    // Configura o pino do LDR como entrada
    pinMode(LDR, INPUT);
    digitalWrite(LDR, LOW); // Define o estado inicial como LOW
    
    pinMode(buzzer, OUTPUT); // Configura o pino do buzzer como saída
}

void loop () {
    valorLDR = analogRead(LDR); // Faz a leitura do valor do LDR
  
    intensidadeLuz = map(valorLDR, 60, 970, 0, 100); //Converte o valor para uma escala de 0 a 100
    Serial.print("Intensidade de Luz 0 - 1023 = "); //Imprime texto “Intensidade de Luz = ” na tela
    Serial.println(valorLDR); //Imprime o valor lido na tela após o sinal de igual do texto acima
    Serial.print("Intensidade de Luz 0 - 100% = ");
    Serial.println(intensidadeLuz);
    delay(300); //Aguarda 300 milissegundos para fazer nova leitura
  
    
    if (intensidadeLuz < 33) {
        apagaLeds();
        digitalWrite(ledVerde, HIGH); // Acende o LED verde
        digitalWrite(buzzer, LOW); // Desativa o buzzer
    }
    
    // Luminosidade em alerta
    if (intensidadeLuz >= 33 && intensidadeLuz <= 66) {
        apagaLeds();
        digitalWrite(ledAmarelo, HIGH); // Acende o LED amarelo
        digitalWrite(buzzer, HIGH); // Ativa o buzzer
        tone(buzzer, 220, 300); // Define o tom do buzzer
        delay(1500); // Espera um tempo para repetir
    }
    
    // Luminosidade crítica
    if (intensidadeLuz > 66) {
        apagaLeds();
        digitalWrite (ledVermelho, HIGH); // Acende o LED vermelho
        digitalWrite(buzzer, HIGH); // Ativa o buzzer
        tone(buzzer, 220, 300); // Define o tom do buzzer
        delay(500); // Espera um tempo para repetir
    }
  
}

// Função para apagar todos os LEDs
void apagaLeds () {
    digitalWrite(ledVerde, LOW); 
    digitalWrite(ledAmarelo, LOW); 
    digitalWrite(ledVermelho, LOW); 
}