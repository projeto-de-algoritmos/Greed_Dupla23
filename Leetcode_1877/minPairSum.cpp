#include <algorithm>
#include <iostream>
#include <vector>

int minPairSum(std::vector<int> nums) {
  // Inicializa com valor minimo
  int max = -1;
  // Ordena de forma crescente o vector nums
  std::sort(nums.begin(), nums.end());

  // A soma dos menores pares será obtida com os valores espelhados, isso é, com o par do valor do primeiro
  // indice com o valor do ultimo no vetor. É feito então essa soma nos pares e então é obtido o maior valor
  // dos pares encontrados 
  for (int i = 0, j = nums.size() - 1; i < j; i++, j--) {
    if ((nums[i] + nums[j]) > max) {
      max = nums[i] + nums[j];
    }
  }

  return max;
}