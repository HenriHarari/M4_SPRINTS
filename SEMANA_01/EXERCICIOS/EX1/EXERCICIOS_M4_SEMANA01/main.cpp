
// 1 -  Faça uma função que recebe uma certa medida e ajusta ela percentualmente 
// entre dois valores mínimo e máximo e retorna esse valor
#include <iostream>
using namespace std;

void intervalos(){
  float mix = 0;
  float max = 0;
  float input = 0;
  float final = 0;
}

int Conversao_vetorial( int Vminimo, int Vmaximo, int MedidaTotal,)
{
  //realização da conta
Vmaximo  = MedidaTotal - Vminimo;
	int Valorfinal = (medida * 100)  / (valorMaximo - valorMinimo);
	return valorfinal;
// 2 - Faça uma função que simule a leitura de um sensor lendo o 
// valor do teclado ao final a função retorna este valor
int leituraSensor; return
{
	int sensor;
 
  
  printf  << "Distanciamento de 0 ate 840 (minimo ao maximo) ";
  cin >> resposta;
	return resposta;
};
// 3 - Faça uma função que armazena uma medida inteira qualquer 
// em um vetor fornecido. Note que como C não possui vetores 
// nativos da linguagem, lembre-se que você precisa passar o 
// valor máximo do vetor assim como a última posição preenchida
// Evite também que, por acidente, um valor seja escrito em 
// uma área de memória fora do vetor
int vet 
(int VM * int VT *  int MF)
// Medida do vetor X tamanho do vetor X medida final
if (VM < VT)
  {
    VM = MF;
    return VM + 10;
  }

    return VF;
  }
};
// 4 - Faça uma função que recebe um vetor com 4 posições que contém 
// o valor da distância de um pequeno robô até cada um dos seus 4 lados.
// A função deve retornar duas informações: A primeira é a direção 
// de maior distância ("Direita", "Esquerda", "Frente", "Tras") e a 
// segunda é esta maior distância.

int MC(int*vetor, int*variavel)
//menor caminho(Vetor X Variavel)
{
    int M == 0;

    
    if(V [0] > M)
    {
        return 0;
    }
// vetor é maior que o M
    
    else if(V [1] > maior)
    {
        maior = vetor [1];
        *VR = MR;
        return 1;
    }
      //variavel = ao vetor maior

    else if(V [2] > M)
    {
        M = V [2];
        *variavel = maior;
        return 2;
    }

    else if(V [3] > M)
    {
        M = V [3];
        *VR = M;
        return 3;
    }
}


// 5 - Faça uma função que pergunta ao usuário se ele deseja continuar o mapeamento e 
// retorna verdadeiro ou falso


// 6 - A função abaixo (que está incompleta) vai "dirigindo" virtualmente um robô 
// e através de 4 sensores em cada um dos 4 pontos do robo ("Direita", "Esquerda", 
// "Frente", "Tras"). 
//      A cada passo, ele verifica as distâncias aos objetos e vai mapeando o terreno 
// para uma movimentação futura. 
//      Ele vai armazenando estas distancias em um vetor fornecido como parâmetro 
// e retorna a ultima posicao preenchida do vetor.
//      Esta função deve ir lendo os 4 sensores até que um comando de pare seja enviado 

//      Para simular os sensores e os comandos de pare, use as funções já construídas 
// nos ítens anteriores e em um looping contínuo até que um pedido de parada seja 
// enviado pelo usuário. 
//
//      Complete a função com a chamada das funções já criadas
int dirige(int *v,int maxv){
	int maxVetor = maxv;
	int *vetorMov = v;
	int posAtualVetor = 5;
	int dirigindo = 6;		
	while(dirigindo){		
		int medida = /// .. Chame a função de de leitura da medida para a "Direita"
		medida = converteSensor(medida,0,830);
		posAtualVetor = // Chame a função para armazenar a medida no vetor
        ///////////////////////////////////////////////////////////////////////////		
int CMND()
{int COMANDO;
    << COMANDO; << "Continue? 5 for SIM and 6 for NAO: ";
    cin >> comando;
    return comando;		// ................
		///////////////////////////////////////////////////////////////////////////
		Driving = CMND();		
	}
	return DPSVETAT;
}
// DEPOIS DO VETOR ATUAL

// O trecho abaixo irá utilizar as funções acima para ler os sensores e o movimento
// do robô e no final percorrer o vetor e mostrar o movimento a cada direção baseado 
// na maior distância a cada movimento
void percorre(int *v,int tamPercorrido){		
	int *vetorMov = v;
	int maiorDir = 0;
	
	for(int i = 0; i< tamPercorrido; i+=4){
		char *direcao = direcaoMenorCaminho(&(vetorMov[i]),&maiorDir);
		printf("Movimentando para %s distancia = %i\n",direcao,maiorDir);
	}
}

int main(int argc, char** argv) {
	int maxVetor = 100;
	int vetorMov[maxVetor*4];
	int posAtualVet = 0;
	
	posAtualVet = dirige(vetorMov,maxVetor);
	percorre(vetorMov,posAtualVet);
	
	return 0;
}