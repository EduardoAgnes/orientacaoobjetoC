// implemente um sistema onde o usuario entre com 5 valores
// e diga quantos deles sao repetidos e suas posicoes

#include <iostream>
using namespace std;

class array{

    int vetor2[5];
    int n, p ,i;

    public:
        arrayVetor(int vetor1[5]); //metodo
    };

    int array::arrayVetor(int vetor[5]){

    for (i=0;i<5;i++){
    cout << "Digite o " << i << endl;
    cin >> vetor[i];
}

for (i=0;i<5;i++){
    for (p=i;p<5;p++){
            if(vetor[i] == vetor[p]){
            if(i != p){
    cout << "O numero repetido " << vetor[i] <<  " na posicao " << i << " e " << p << endl;
        break;
    }
}
}
}
}


int main(){
    int vetor[5];
    array meuVetor;
    meuVetor.arrayVetor(vetor);

return 0;

}
