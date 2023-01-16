# Iogurte Divino beecrowd | [3151](https://www.beecrowd.com.br/judge/pt/problems/view/3151)
## Como Rodar Solução

**Pré Requisitos:**

- g++
  - Compile:
  > g++ 1286_Motoboy.cpp -O2 -Wall
  - Execute:
  > ./a.out
- Makefile (opcional)
  - Execute:
  > make run


## Enunciado

**Por Samuel Eduardo da Silva, IFSULDEMINAS/UFF BR Brazil**

**Timelimit: 1**

Aaa Muzambinho... além de seus belos cafezais, também é conhecido pelos seus deliciosos iogurtes. Milton, junto com seu amigo Neves, criaram um grupo de degustação de iogurtes chamado Encoders.

No Encoders eles degustam os diversos tipos de iogurte da cidade. Milton e Neves perceberam que, misturando os iogurtes, conseguem sabores nunca antes provados! Então propuseram um desafio para divertimento do grupo: juntos eles escolheram um "valor de gostosura" para cada iogurte. Eles também sabem o volume de cada um.

Milton quer encher uma garrafa para levar para sua faculdade com o melhor iogurte possível em termos de "gostosura" e esta garrafa tem um volume máximo X. O desafio então se resume a obter um iogurte com a "gostosura" máxima possível.

Sabendo o volume e o "valor de gostosura" de cada iogurte do grupo, determine o valor de "gostosura" máximo que Milton consegue formular em sua garrafa e fazer a alegria de seus amiguinhos na faculdade.

Obs: Eles nem sempre precisam colocar o volume total de um iogurte na garrafa, e assim o preço iogurte é proporcional ao volume colocado.

### Entrada

A primeira linha da entrada indica o número T de casos de teste.
A segunda linha contém dois inteiros N e X indicando, respectivamente, o número de iogurtes e a capacidade da garrafa.
A seguir, seguem N linhas, cada uma contendo 2 inteiros, indicando o valor do iogurte e o seu volume, respectivamente.

Limites:

1 <= T <= 100;

1 <= N, X <= 100.

### Saída

Um valor real com duas casas decimais indicando o valor máximo de “gostosura” a ser obtido.

### Exemplo de Entrada

```
1
2 20
10 10
10 10
```

### Exemplo de Saída


```
20.00
```
