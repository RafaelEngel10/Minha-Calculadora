#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int OP,i,j,Quantidade,NumeroEXP,Fat,Numero0;     //Fat = Fatorial | Numero0 como inteiro para propositos que Numero1 não consegue (%) | NumeroEXP denomina se a raiz vai ser quadrada, cubica, etc.
    float Numero1,Numero2,Acumulador,EXP,ValorRaiz;      //Seus nomes são autoexplicativos
    double NumeroRaiz; //variável tipo double para guardar o valor do número dentro da raiz
    int Primos[15] = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
        31, 37, 41, 43, 47 };      //Vetor de números primos para o primorial
    Acumulador = 0;    //inicializando variáveis de forma padrão, sujeitas a mudanças.
    
    do {
        cout << "=============Calculadora==============" << endl;
        cout << "1. Somar" << endl;
        cout << "2. Subtrair" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Exponenciar" << endl;
        cout << "6. Radiciar (Tirar a raiz quadrada)" << endl;
        cout << "7. Fatorial" << endl;
        cout << "8. Termial" << endl;
        cout << "9. Primorial" << endl;
        cout << "10. Seno de um Angulo" << endl;
        cout << "11. Cosseno de um Angulo" << endl;
        cout << "12. Sair" << endl;
        cout << "======================================" << endl;
        cout << "Sua Opcao:";
        cin >> OP;
        switch (OP) {
            case 1:
                cout << "Quantos numeros você quer somar?";
                cin >> Quantidade;
                for (i=0;i<Quantidade;i++){
                    cout << "Qual o " << i+1 << "o numero?";
                    cin >> Numero1;
                    Acumulador = Acumulador + Numero1;
                }
                cout << "Soma:" << Acumulador << endl;
                break;
                
            case 2:
                cout << "Quantos numeros você quer subtrair?";
                cin >> Quantidade;
                for (i=0;i<Quantidade;i++){
                    cout << "Qual o " << i+1 << "o numero?";
                    cin >> Numero1;
                    Acumulador = Numero1 - Acumulador;
                }
                cout << "Subtracao:" << Acumulador << endl;
                break;
                
            case 3:
                Acumulador = 1;
                cout << "Quantos numeros você quer multiplicar?";
                cin >> Quantidade;
                for (i=0;i<Quantidade;i++){
                    cout << "Qual o " << i+1 << "o numero?";
                    cin >> Numero1;
                    Acumulador = Acumulador * Numero1;
                }
                cout << "Multiplicacao:" << Acumulador << endl;
                break;
                
            case 4: 
                Acumulador = 1;
                cout << "Quantos numeros você quer dividir?";
                cin >> Quantidade;
                for (i=0;i<Quantidade;i++){
                    cout << "Qual o " << i+1 << "o numero?";
                    cin >> Numero1;
                    Acumulador = Numero1 / Acumulador;
                }
                cout << "Divisao:" << Acumulador << endl;
                break;
                
            case 5:
                cout << "Numero da base:";
                cin >> Numero1;
                cout << "Numero do expoente:";
                cin >> Numero2;
                EXP = pow(Numero1, Numero2);
                cout << "Potenciação: " << EXP << endl;
                break;
                
            case 6:
                cout << "Numero dentro da raiz: ";
                cin >> NumeroRaiz;
                cout << "Numero potencia da raiz: ";
                cin >> NumeroEXP;
                if (NumeroRaiz<0) {
                    cout << "O resultado e um numero imaginario." << endl;
                    break;
                }
                ValorRaiz = pow(NumeroRaiz, 1.0 / NumeroEXP);
                cout << "Valor da raiz: " << ValorRaiz << endl;
                break;
                
            case 7:
                Fat = 1;
                cout << "Numero fatorial: ";
                cin >> Numero1;
                if (Numero1<0) {
                    break;
                } else if (Numero1==0) {
                    cout << "Fatorial: 1";
                    break;
                }
                for (i=0;i<Numero1;i++){
                    Fat = Fat * (Numero1 * (Numero1 - 1));
                    Numero1 -= 2;
                }
                cout << "Fatorial: " << Fat << endl;
                break;
                
            case 8:
                Fat = 0;
                cout << "Numero para fazer termial: ";
                cin >> Numero1;
                for (i=0;i<Numero1;i++) {
                    Fat = Fat + (Numero1 + (Numero1 - 1));
                    Numero1 -= 2;
                }
                cout << "Termial: " << Fat << endl;
                break;
            
            case 9:
                Fat = 1; // Inicializar com 1
                cout << "Numero para fazer o primorial: ";
                cin >> Numero0;

                 if (Numero0 == 1 || Numero0 == 0 || Numero0 < 0) {
                    cout << "Digite um numero valido!" << endl;
                    break;
                } else {
                    for (i = 0; i < 15; i++) {
                        if (Numero0 == Primos[i]) {
                            for (j = i; j >= 0; j--) {
                                Fat *= Primos[j];
                            }
                            cout << "Primorial: " << Fat << endl;
                            break;
                        }
                    }
                }
                break;

            case 10:
                cout << "Angulo desejado: ";
                cin >> Numero0;
                cout << "Seno de " << Numero0 << "e " << sin(Numero0) << endl;
                break;

            case 11:
                cout << "Angulo desejado: ";
                cin >> Numero0;
                cout << "Cosseno de " << Numero0 << "e " << cos(Numero0) << endl;
                break;
            
            default:
                cout << "Insira um numero valido.";
                break;
            }
    } while (OP!=12);
    
    
    return 0;
}