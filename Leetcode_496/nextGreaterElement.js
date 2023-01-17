function nextGreaterElement(nums1, nums2) {
  // Inicializa pilha
  const stack = [];
  // Vetor de saida
  const output = [...Array(nums1.length).fill(-1)]

  // Mapeia os indexes de cada elemento de nums1
  const map = new Map();
  nums1.forEach((v, i) => map.set(v, i));

  // Itera sobre todos os valores de nums2
  for (value of nums2) {
    // Verifica se o atual valor é maior do que o atual ultimo elemento da pilha
    while (stack.length && value > stack[stack.length - 1]) {
      // Sendo maior, irá atualizar o valor padrão de output de -1 para o valor encontrado
      let lastStackValue = stack.pop();
      output[map.get(lastStackValue)] = value;
    }
    // Verifica se value está mapeado, ou seja, se ele está presente em nums1. Se não estiver, não tem por que adiciona-lo na pilha.
    if (map.get(value) !== undefined) {
      stack.push(value);
    }
  }

  return output;
}

// Primeiro caso de teste descrito em nextGreaterElement.md. Esperado [-1,3,-1]
console.log(nextGreaterElement([4,1,2], [1,3,4,2]))

// Segundo caso de teste descrito em nextGreaterElement.md. Esperado [3,-1]
console.log(nextGreaterElement([2,4], [1,2,3,4]))