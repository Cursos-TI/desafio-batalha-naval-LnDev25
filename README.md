# 🚢 Batalha Naval - Nível Novato

Este projeto marca o início do desenvolvimento de um jogo de Batalha Naval em Linguagem C.
O foco desta etapa (Nível Novato) foi a utilização de **Estruturas de Dados Compostas** (Vetores e Matrizes) para construir o tabuleiro e posicionar os primeiros navios.

## 📋 Funcionalidades Implementadas

1.  **Tabuleiro 10x10:**
    * Implementado utilizando uma **Matriz Bidimensional** (`int tabuleiro[10][10]`).
    * Inicialização automática preenchendo todas as posições com `0` (representando Água).

2.  **Definição de Navios:**
    * Os navios foram representados por **Vetores Estáticos** (`int navio[3]`).
    * Cada parte do navio possui o valor `3`.

3.  **Posicionamento Estratégico:**
    * **Navio Horizontal:** Posicionado fixando a linha e iterando sobre as colunas.
    * **Navio Vertical:** Posicionado fixando a coluna e iterando sobre as linhas.
    * Lógica de índices para garantir que o navio ocupe as células corretas sem erros de sobreposição nesta etapa.

4.  **Exibição do Mapa:**
    * Utilização de **Loops Aninhados** (nested loops) para percorrer a matriz e imprimir o estado atual do jogo no console.

## 🛠 Tecnologias e Conceitos

* **Linguagem C**
* **Matrizes (Arrays Multidimensionais):** Para o grid do jogo.
* **Vetores (Arrays Unidimensionais):** Para as entidades (navios).
* **Loops Aninhados:** Para manipulação e exibição de dados em grade.


-----------------------------------------------------------------------------------------------------

# Desafio Batalha Naval - Nível Aventureiro ⚓

Este projeto faz parte da disciplina de Programação no curso de **Análise e Desenvolvimento de Sistemas (ADS)**. O objetivo é demonstrar o uso de matrizes bidimensionais em C, aplicando lógica de posicionamento de navios em diferentes direções.

## 🚀 Funcionalidades

Nesta etapa (Aventureiro), o programa realiza as seguintes tarefas:
- **Criação do Tabuleiro**: Uma matriz 10x10 inicializada com zeros (representando a água).
- **Posicionamento Estático**: 
  - 1 Navio Horizontal.
  - 1 Navio Vertical.
  - 2 Navios Diagonais (em direções opostas).
- **Validação**: Garantia de que os navios não se sobreponham e permaneçam dentro dos limites (0-9).
- **Exibição**: Impressão formatada do tabuleiro no terminal.

## 🛠️ Tecnologias Utilizadas
- Linguagem C
- Compilador GCC
- GitHub Codespaces

-----------------------------------------------------------------------------------------------------

## 🏆 Nível Mestre Alcançado!
- **Habilidades Especiais**: Implementação de áreas de efeito dinâmicas.
  - **Cruz**: Ataque em eixos cartesianos.
  - **Cone**: Expansão triangular de dano.
  - **Octaedro**: Área de efeito em formato de losango.
- **Renderização**: Substituição de valores numéricos por caracteres visuais (`.`, `N`, `X`) para melhor experiência do usuário.
- **Lógica Avançada**: Uso de geometria analítica e manipulação de matrizes sobrepostas com validação de bordas.


