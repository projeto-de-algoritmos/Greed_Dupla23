#include<bits/stdc++.h>

using namespace std;

typedef struct Iogurte {
  float valor, volume;
} iogurte;

float valor_vol(iogurte ig) {
  return ig.valor/ig.volume;
}

bool cmp_gostosura(iogurte a, iogurte b) {
  float valor_a = valor_vol(a);
  float valor_b = valor_vol(b);
  return valor_a > valor_b;
}

float knapsack(iogurte* vet, int qtd, int cp) {
  sort(vet, vet+qtd, cmp_gostosura);
  int peso_acumulado = 0;
  float valor_total = 0.0;
  for(int i = 0; i < qtd; i++) {
    if(peso_acumulado + vet[i].volume <= cp) {
      peso_acumulado += vet[i].volume;
      valor_total += vet[i].valor;
    }
    else {
      float resto = cp - peso_acumulado;
      valor_total += vet[i].valor * (resto / vet[i].volume);
      break;
    }
  }
  return valor_total;
}

int main() {
  int qtd_testes, qtd_iogurtes, cp_garrafa;
  cin >> qtd_testes;

  while(qtd_testes--) {
    cin >> qtd_iogurtes >> cp_garrafa;
    iogurte ig[qtd_iogurtes];

    for(int i = 0; i < qtd_iogurtes; i++)
      cin >> ig[i].valor >> ig[i].volume;

    cout << setprecision(2) << fixed;
    cout << knapsack(ig, qtd_iogurtes, cp_garrafa) << endl;
  }
  return 0;
}
