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

## 🖥️ Exemplo de Saída

```text
--- Batalha Naval ---
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 3 3 3 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 3 0 0 0 0 
0 0 0 0 0 3 0 0 0 0 
0 0 0 0 0 3 0 0 0 0 
...
