# Exercicios-LAED
# Calculadora de Fatorial de Números Grandes

Este é um programa em C para calcular o fatorial de números relativamente grandes, sem depender de bibliotecas de suporte da linguagem C/C++.

## Descrição

O programa utiliza uma abordagem de multiplicação iterativa para calcular o fatorial de um número. Ele é capaz de lidar com números grandes, como o fatorial de 10000.

## Compilação e Execução

Para compilar e executar o programa, siga estas etapas:

1. Certifique-se de ter um ambiente de desenvolvimento C/C++ configurado em sua máquina.
2. Copie o código-fonte para um arquivo com a extensão `.c`, por exemplo, `fatorial.c`.
3. Abra um terminal ou prompt de comando e navegue até o diretório onde o arquivo `fatorial.c` está localizado.
4. Execute o seguinte comando para compilar o programa:
   
   ```bash
   gcc fatorial.c -o fatorial
5. Após a compilação bem-sucedida, execute o programa fornecendo um número inteiro positivo como entrada. Por exemplo:
 ./fatorial
Exemplo
Entrada: 23
Saída: Resultado: 25852016738884976640000

Observações
O programa verifica se a entrada é um número inteiro positivo.
Para números pequenos (menores que 2), o fatorial é 1.
Para números grandes, o programa utiliza um array para armazenar os dígitos do resultado do fatorial.
Autor
Este programa foi desenvolvido por [Matheus Patricio da S e Silva] como parte de um exercício individual.

