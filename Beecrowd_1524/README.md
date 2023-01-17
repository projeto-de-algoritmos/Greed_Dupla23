# Iogurte Divino beecrowd | [1524](https://www.beecrowd.com.br/judge/pt/problems/view/1524)
## Como Rodar Solução

**Pré Requisitos:**

- g++
  - Compile:
  > g++ 1524_Bandejao.cpp -O2 -Wall
  - Execute:
  > ./a.out
- Makefile (opcional)
  - Execute:
  > make run


## Enunciado

**Por Marcio Oshiro, USP BR Brazil**

**Timelimit: 1**

Um fenômeno muito comum na fila do bandejão (também conhecido como restaurante universitário) é ver uma pessoa recém chegada entrar no interior na fila em vez de no final. Isso ocorre sempre que tal pessoa encontra alguém de seu grupo já na fila.

Interessado em estudar esse fenômeno, um amigo pediu para você escrever um programa para estudar os grupos presentes na fila. Podemos supor que existem K grupos diferentes e toda pessoa pertence a exatamente um desses grupos. O tamanho de um grupo é definido pela distância entre as duas pessoas mais distantes dentro do grupo. Se o grupo consiste de apenas uma pessoa, seu tamanho é zero. Considerando que os grupos se organizam de forma que a soma dos tamanhos dos K grupos seja mínima, seu programa deve determinar qual é o valor dessa soma.

### Entrada

A entrada é composta por diversas instâncias e termina com o final de arquivo (EOF). A primeira linha de cada instância contém os inteiros N, indicando o número de pessoas na fila, e K, indicando o número de grupos (1 ≤ K < N ≤ 1.000). Na linha seguinte são apresentados N − 1 inteiros, a2, . . ., aN, (0 ≤ a2 ≤ ··· ≤ aN ≤ 1.000.000) indicando as posições de cada pessoa em relação à primeira pessoa da fila A posição da primeira pessoa é omitido, pois é sempre zero.

### Saída

Para cada instância, imprima uma única linha contendo o valor mínimo que a soma dos tamanhos dos K grupos pode ter.

### Exemplo de Entrada

```
5 2
1 2 5 6
4 3
0 1 2
```

### Exemplo de Saída


```
3
0
```
