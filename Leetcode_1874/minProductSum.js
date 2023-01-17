function minProductSum(nums1, nums2) {
  let output = 0;

  // Ordena ambos os vetores de forma crescente
  nums1.sort();
  nums2.sort();
  // Inverte a ordem dos valores do segundo vetor
  nums2.reverse();

  nums1.forEach((v, i) => output += (v * nums2[i]));

  return output;
}

// Primeiro caso de teste descrito em minProductSum.md. Esperado 40
console.log(minProductSum([5,3,4,2], [4,2,2,5]))

// Segundo caso de teste descrito em minProductSum.md. Esperado 65
console.log(minProductSum([2,1,4,5,7], [3,2,4,8,6]))