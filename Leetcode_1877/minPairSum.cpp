#include <algorithm>
#include <iostream>
#include <vector>

int minPairSum(std::vector<int> nums) {
  // Inicializa com valor minimo
  int max = -1;
  // Ordena de forma crescente o vector nums
  std::sort(nums.begin(), nums.end());

  // A soma dos menores pares será obtida com os valores espelhados, isso é, com
  // o par do valor do primeiro indice com o valor do ultimo no vetor. É feito
  // então essa soma nos pares e então é obtido o maior valor dos pares
  // encontrados
  for (int i = 0, j = nums.size() - 1; i < j; i++, j--) {
    if ((nums[i] + nums[j]) > max) {
      max = nums[i] + nums[j];
    }
  }

  return max;
}

int main() {
  std::vector<int> testeA{3, 5, 2, 3};
  std::vector<int> testeB{3, 5, 4, 2, 4, 6};

  // Primeiro caso de teste descrito em minPairSum.md. Esperado 7
  std::cout << minPairSum(testeA) << std::endl;

  // Primeiro caso de teste descrito em minPairSum.md. Esperado 8
  std::cout << minPairSum(testeB) << std::endl;

  return 0;
}