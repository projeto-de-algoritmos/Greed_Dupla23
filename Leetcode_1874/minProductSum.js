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