#include <iostream>
#include <cstdlib>   //rand
#include <ctime>     //time
using namespace std;

int main(){
    int chute, tentativas = 0, n_tentativas;
    char dificuldade;
    bool acertou, menor;
    double pontos = 1000, pontos_perdidos;

    srand(time(NULL));     //initializing random seed
    const int NUMERO_SECRETO = rand() % 100;   //generating random number between 0 and 99


    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=" << endl;
    cout << " Bem vindos ao jogo da adivinhação" << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=" << endl;

    cout << "Escolha seu nível de dificuldade:" << endl;
    cout << "Fácil (F), Médio (M) ou Difícil (D)     ---> ";
    cin >> dificuldade;
    
    switch (dificuldade){
        case 'F':
            n_tentativas = 15;
            break;
        case 'M':
            n_tentativas = 10;
            break;
        default:
            n_tentativas = 5;
            break;
    }
    
    for(tentativas = 1; tentativas <= n_tentativas; tentativas++){
        cout << "Tentativa "<< tentativas << endl;
        cout << "Chute: ";
        cin >> chute;

        pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos -= pontos_perdidos;

        acertou = chute == NUMERO_SECRETO;
        menor = chute < NUMERO_SECRETO;

        if (acertou){
            cout << "Parabéns! Você acertou o número secreto." << endl;
            break;
        }
        else if (menor){
            cout << "Seu chute foi menor que o número secreto.\n\n" << endl;
        }
        else{
            cout << "Seu chute foi maior que o número secreto.\n\n" << endl; 
        }
    }
    
    if (acertou){
        cout << "Fim de jogo! \nVocê acertou em " << tentativas << " tentativas." << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de: " << pontos << " pontos." << endl;   
    }
    else{
        cout << "Você perdeu! Tente novamente." << endl;
    }
    
}