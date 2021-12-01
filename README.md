# orientacaoobjetoC++
implemente um sistema onde o usuario entre com 5 valores e diga quantos deles sao repetidos e suas posicoes

Instale o Dev C++;
Sistema Operacional Windows;
Desenvolvido em C++
Autor: Eduardo T. Agnes
Data: 26/11/2021

Criação de uma classe (class array) para a declaração de variaveis.

Ação do metodo recebe o parametro:  int array::arrayVetor(int vetor[5])
Após, criação de entrada de valores dentro de um 'for' para que preencha todos espaço dos vetores:
   for (i=0;i<5;i++){
    cout << "Digite o " << i << endl;
    cin >> vetor[i];
    
Apos, entra em outro for para a comparacao de valores 
for (i=0;i<5;i++){
    for (p=i;p<5;p++){
            if(vetor[i] == vetor[p]){
            if(i != p){
    cout << "O numero repetido " << vetor[i] <<  " na posicao " << i << " e " << p << endl;
        break;
    }
    
    Se os dois 'if' derem verdade, sera printado na tela o valor repetido e suas respectivas posicoes.
