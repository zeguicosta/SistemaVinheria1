# Sistema de Monitoramento de Luminosidade para Vinheria Agnello

## Descrição do Projeto
Este projeto foi desenvolvido para a Vinheria Agnello com o objetivo de monitorar as condições de luminosidade no ambiente onde os vinhos são armazenados. A qualidade do vinho pode ser significativamente afetada por fatores ambientais como temperatura, umidade e luminosidade. Nossa solução, neste estágio inicial, foca no monitoramento da luminosidade utilizando um Arduino. 

O sistema emprega um sensor LDR (Resistor Dependente de Luz) para capturar os níveis de luminosidade no ambiente. A informação capturada é então utilizada para acionar um sistema de alerta visual e sonoro. Este sistema de alerta é composto por três LEDs (vermelho, amarelo e verde) e um buzzer. O LED verde indica que as condições de luminosidade estão adequadas, o LED amarelo sinaliza um nível de alerta e o LED vermelho indica que as condições estão fora dos limites aceitáveis para a preservação ideal do vinho.

## Componentes Necessários
- 1 Arduino UNO
- 1 Sensor LDR
- 1 Buzzer
- 3 LEDs (Vermelho, Amarelo, Verde)
- Resistores (para os LEDs e o LDR, conforme necessário)
- Cabos de conexão
- Protoboard

## Dependências
Para replicar este projeto, você precisará do software Arduino IDE instalado em seu computador para carregar o código no Arduino.

## Como Reproduzir o Projeto

1. **Montagem do Circuito:**
   - Conecte os LEDs aos pinos 11 (verde), 12 (amarelo) e 13 (vermelho) no Arduino. Use resistores adequados para limitar a corrente nos LEDs.
   - Ligue o sensor LDR ao pino A0. Um resistor deve ser usado para criar um divisor de tensão, essencial para a leitura correta dos valores de luminosidade.
   - Conecte o buzzer ao pino 9.

2. **Configuração do Ambiente de Desenvolvimento:**
   - Instale o Arduino IDE no seu computador.
   - Conecte o Arduino ao seu computador usando um cabo USB.

3. **Carregamento do Código:**
   - Abra o Arduino IDE.
   - Copie e cole o código fornecido acima no IDE.
   - Selecione o modelo correto de Arduino e a porta COM em que ele está conectado no IDE.
   - Carregue o código para o Arduino usando o botão de upload no IDE.

4. **Operação:**
   - Após o código ser carregado, o sistema começará a monitorar a luminosidade.
   - Conforme a luminosidade varia, os LEDs indicarão o estado do ambiente: verde para condições adequadas, amarelo para alerta e vermelho para condições inadequadas.
   - Quando o ambiente estiver em um estado de alerta (LED amarelo aceso), o buzzer soará por 3 segundos, chamando a atenção para a necessidade de ajustes na luminosidade.

## Observações
- Este projeto é uma solução inicial focada apenas no monitoramento da luminosidade. Recomenda-se expandir o sistema para incluir monitoramento de temperatura e umidade para uma gestão mais completa das condições de armazenamento do vinho.
- Ajuste os valores no código (especificamente na função `map()`) conforme necessário para calibrar o sensor LDR de acordo com as condições específicas do local de instalação.

Este projeto proporciona uma solução eficaz e de baixo custo para o monitoramento das condições de armazenamento do vinho, contribuindo para a manutenção da qualidade do produto na Vinheria Agnello.