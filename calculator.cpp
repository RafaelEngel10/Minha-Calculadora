#include <iostream>
#include <cmath>
using namespace std;

double sin_graus(double graus) {
    return sin(graus * (M_PI / 180.0));
}

double cos_graus(double graus) {
    return cos(graus * (M_PI/180.0));
}

double tan_graus (double graus) {
    return tan(graus * (M_PI/180.0));
}

double log_base(double x, double base) {
    return log(x) / log(base);  // Usa log natural (base e)
}

int main() {
    
    int OP,i,j,Quantidade,NumeroEXP,Fat,Numero0,Angulo;     //Fat = Fatorial | Numero0 como inteiro para propositos que Numero1 não consegue (%) | NumeroEXP denomina se a raiz vai ser quadrada, cubica, etc.
    float Numero1,Numero2,Acumulador,EXP,ValorRaiz;      //Seus nomes são autoexplicativos
    double NumeroRaiz; //variável tipo double para guardar o valor do número dentro da raiz
    const double PI = 3.14159265358979323846, e = 2.718281828459045235360287471352662497757;       //constante matemática PI com diversas casas decimais | número de euler 
    char Resposta[15], Resposta2[15];            //vetor tipo char para armazenar a resposta.
    int Primos[15] = {
        2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
        31, 37, 41, 43, 47 };      //Vetor de números primos para o primorial
    Acumulador = 0;    //inicializando variáveis de forma padrão, sujeitas a mudanças.
    double rad; //Formula do radiano = Angulo * PI/180;                

    
    do {
        cout << "============= Calculadora ==============" << endl;
        cout << "1. Somar" << endl;
        cout << "2. Subtrair" << endl;
        cout << "3. Multiplicar" << endl;                                         //Menu de escolha -> Usuário escolhe qual operação quer fazer entrando com digitos de 1 a 11
        cout << "4. Dividir" << endl;                                             //Opção 12 faz com que a calculadora "desligue"
        cout << "5. Exponenciar" << endl;
        cout << "6. Radiciacao Simples" << endl;
        cout << "7. Porcentagem" << endl;
        cout << "8. Fatorial" << endl;
        cout << "9. Termial" << endl;
        cout << "10. Primorial" << endl;
        cout << "11. Seno de um Angulo" << endl;
        cout << "12. Cosseno de um Angulo" << endl;
        cout << "13. Tangente de um Angulo" << endl;
        cout << "14. Logaritmo" << endl;
        cout << "15. Logaritmo Natural" << endl;
        cout << "16. Potenciação com Numero de Euler" << endl;
        cout << "17. Sair" << endl;
        cout << "========================================" << endl;
        cout << "Sua Opcao:";
        cin >> OP;
        switch (OP) {
            case 1:
                cout << "Quantos numeros você quer somar?";
                cin >> Quantidade;
                for (i=0;i<Quantidade;i++){
                    cout << "Qual o " << i+1 << "o numero?";                      //CÓDIGO DA SOMA
                    cin >> Numero1;
                    Acumulador = Acumulador + Numero1;
                }
                cout << "Soma:" << Acumulador << endl;
                break;
                
            case 2:
                cout << "Quantos numeros você quer subtrair?";
                cin >> Quantidade;
                for (i=0;i<Quantidade;i++){
                    cout << "Qual o " << i+1 << "o numero?";                      //CÓDIGO DA SUBTRAÇÃO
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
                    cout << "Qual o " << i+1 << "o numero?";                       //CÓDIGO DA MULTIPLICAÇÃO
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
                    cout << "Qual o " << i+1 << "o numero?";                      //CÓDIGO DA DIVISÃO
                    cin >> Numero1;
                    Acumulador = Numero1 / Acumulador;
                }
                cout << "Divisao:" << Acumulador << endl;
                break;
                
            case 5:
                cout << "Numero da base:";
                cin >> Numero1;
                cout << "Numero do expoente:";                                     //CÓDIGO DA EXPONENCIAÇÃO
                cin >> Numero2;
                EXP = pow(Numero1, Numero2);
                cout << "Potenciação: " << EXP << endl;
                break;
                
            case 6:
                cout << "Numero dentro da raiz: ";
                cin >> NumeroRaiz;
                cout << "Numero potencia da raiz: ";                                         //CÓDIGO DA RADICIAÇÃO
                cin >> NumeroEXP;
                if (NumeroRaiz<0) {
                    cout << "O resultado e um numero imaginario." << endl;
                    break;
                }
                ValorRaiz = pow(NumeroRaiz, 1.0 / NumeroEXP);
                cout << "Valor da raiz: " << ValorRaiz << endl;
                break;

            case 7:
                cout << "Numero: ";
                cin >> Numero1;
                cout << "Porcentagem: ";
                cin >> Numero0;
                Acumulador = Numero1 * Numero0/100;
                cout << Numero0 << " porcento de " << Numero1 << ": " << Acumulador << endl;               //CÓDIGO DA PORCENTAGEM
                break;
                
            case 8:
                Fat = 1;
                cout << "Numero fatorial: ";
                cin >> Numero1;
                if (Numero1<0) {
                    break;
                } else if (Numero1==0) {
                    cout << "Fatorial: 1";                                         //CÓDIGO DO FATORIAL
                    break;
                }
                for (i=0;i<Numero1;i++){
                    Fat = Fat * (Numero1 * (Numero1 - 1));
                    Numero1 -= 2;
                }
                cout << "Fatorial: " << Fat << endl;
                break;
                
            case 9:
                Fat = 0;
                cout << "Numero para fazer termial: ";
                cin >> Numero1;
                for (i=0;i<Numero1;i++) {
                    Fat = Fat + (Numero1 + (Numero1 - 1));                          //CÓDIGO DO TERMIAL
                    Numero1 -= 2;
                }
                cout << "Termial: " << Fat << endl;
                break;
            
            case 10:
                Fat = 1; // Inicializar com 1
                cout << "Numero para fazer o primorial: ";
                cin >> Numero0;

                 if (Numero0 == 1 || Numero0 == 0 || Numero0 < 0) {
                    cout << "Digite um numero valido!" << endl;                            //CÓDIGO DO PRIMORIAL
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

            case 11:
                cout << "Resposta usando Angulo ou Radiano? ";
                cin >> Resposta;                
                if (Resposta[0]=='A' || Resposta[0]=='a')   {                                               //CÓDIGO DO SENO
                    cout << "Valor do Angulo: ";
                    cin >> Angulo;
                    cout << "Seno do angulo " << Angulo << ": " << sin_graus(Angulo) << endl;
                    break;
                } else if (Resposta[0]=='R' || Resposta[0]=='r') {
                    cout << "Você quer informar o radiano ou o angulo: ";
                    cin >> Resposta2;
                    if (Resposta2[0]=='R' || Resposta2[0]=='r') {
                        cout << "Informe o valor em radianos: ";
                        cin >> rad;
                        cout << "Seno do radiano " << rad << " e de: " << sin(rad) << endl;
                        break;
                    } else if (Resposta2[0]=='A' || Resposta2[0]=='a') {
                        cout << "Informe o angulo para conversão: ";
                        cin >> Numero0;
                        rad = Numero0 * PI/180;
                        cout << "Seno de " << rad << " e: " << sin(rad) << endl;
                        break;
                    }
                }                                          
                break;

            case 12:
                cout << "Resposta usando Angulo ou Radiano? ";
                cin >> Resposta;                
                if (Resposta[0]=='A' || Resposta[0]=='a')   {                                               //CÓDIGO DO SENO
                    cout << "Valor do Angulo: ";
                    cin >> Angulo;
                    cout << "Cosseno do angulo " << Angulo << ": " << cos_graus(Angulo) << endl;
                    break;
                } else if (Resposta[0]=='R' || Resposta[0]=='r') {
                    cout << "Você quer informar o radiano ou o angulo: ";
                    cin >> Resposta2;
                    if (Resposta2[0]=='R' || Resposta2[0]=='r') {
                        cout << "Informe o valor em radianos: ";
                        cin >> rad;
                        cout << "Cosseno do radiano " << rad << " e de: " << cos(rad) << endl;
                        break;
                    } else if (Resposta2[0]=='A' || Resposta2[0]=='a') {
                        cout << "Informe o angulo para conversão: ";
                        cin >> Numero0;
                        rad = Numero0 * PI/180;
                        cout << "Cosseno de " << rad << " e: " << cos(rad) << endl;
                        break;
                    }
                }                                          
                break;

            case 13:
                cout << "Resposta usando Angulo ou Radiano? ";
                cin >> Resposta;                
                if (Resposta[0]=='A' || Resposta[0]=='a')   {                                               //CÓDIGO DO SENO
                    cout << "Valor do Angulo: ";
                    cin >> Angulo;
                    cout << "Tangente do angulo " << Angulo << ": " << tan_graus(Angulo) << endl;
                    break;
                } else if (Resposta[0]=='R' || Resposta[0]=='r') {
                    cout << "Você quer informar o radiano ou o angulo: ";
                    cin >> Resposta2;
                    if (Resposta2[0]=='R' || Resposta2[0]=='r') {
                        cout << "Informe o valor em radianos: ";
                        cin >> rad;
                        cout << "Tangente do radiano " << rad << " e de: " << tan(rad) << endl;
                        break;
                    } else if (Resposta2[0]=='A' || Resposta2[0]=='a') {
                        cout << "Informe o angulo para conversão: ";
                        cin >> Numero0;
                        rad = Numero0 * PI/180;
                        cout << "Tangente de " << rad << " e: " << tan(rad) << endl;
                        break;
                    }
                }                                          
                break;

            case 14:
                cout << "Qual o numero: ";
                cin >> Numero1;
                cout << "Qual o numero da base: ";
                cin >> Numero0;
                if (Numero1<0 || Numero0==1) {
                    cout << "Impossivel fazer o logaritmo desse numero." << endl;                           //CÓDIGO DO LOG
                    break;
                } 
                cout << "Logaritmo do numero: " << log_base(Numero1, Numero0) << endl;
                break;
            
            case 15:
                cout << "Qual o numero: ";
                cin >> Numero1;
                if (Numero1<0) {
                    cout << "Impossivel fazer o logaritmo natural desse numero." << endl;                    //CÓDIGO DO LOG NATURAL
                    break;
                }
                cout << "Logaritmo natural: " << log(Numero1) << endl;
                break;
            
            case 16:
                cout << "Expoente desejado: ";
                cin >> EXP;
                if (EXP==0) {
                    cout << "O valor e 1" << endl;
                    break;
                } else if (EXP==1) {
                    cout << "O valor e o proprio numero de euler: " << e << endl;
                    break;
                }
                do {
                    Acumulador = Acumulador + (e * (e * 1));
                } while (i<EXP);
                cout << "Potenciacao do numero de euler: " << Acumulador << endl;
                break;

            default:
                if (OP==17) {
                    cout << "Saindo do programa..." << endl;
                    return 0;
                }
                cout << "Insira um numero valido.";                                            //COMANDO DEFAULT
                break;
        }
    } while (OP!=17);
}

//DISCLAMER: O código foi feito com intenções de estudo e aprendizagem.