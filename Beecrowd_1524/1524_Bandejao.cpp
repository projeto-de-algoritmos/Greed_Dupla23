#include<bits/stdc++.h>

using namespace std;

typedef struct Fila {
  int posicao, distancia;
} fila;

bool cmp_posicao(fila a, fila b) {
  return a.posicao < b.posicao;
}

float greedy(fila* f_pessoas, int qtd_pessoas, int qtd_grupos) {
  sort(f_pessoas, f_pessoas+qtd_pessoas, cmp_posicao);
  int grupos = 0;
  for(int i = 0; i <= qtd_pessoas-qtd_grupos; i++) {
    grupos += f_pessoas[i].posicao;
  }
  return grupos;
}

int main() {
  int qtd_pessoas, qtd_grupos;

  while(scanf("%d %d", &qtd_pessoas, &qtd_grupos) != EOF) {
    fila pessoas[qtd_pessoas];
    pessoas[0].posicao = 0, pessoas[0].distancia = 0;
    for(int i = 1; i < qtd_pessoas; i++) {
      cin >> pessoas[i].distancia;
      pessoas[i].posicao = pessoas[i].distancia - pessoas[i-1].distancia;
    }
    cout << greedy(pessoas, qtd_pessoas, qtd_grupos) << endl;
  }
  return 0;
}
