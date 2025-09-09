//Aluno: Leonardo Dias dos Passos Brito
//Professor: Rodrigo Gonçalves Pinto
//Matricula:2312130234
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;


// =====================================================
// 1. Variáveis, Constantes e auto (002.cpp)
// =====================================================
void exercicio1() {
   cout << "\n--- Exercício 1 ---\n";


   string nome = "Leonardo";
   int idade = 20;
   double altura = 1.80;
   bool aprovado = true;


   cout << "Nome: " << nome << "\n";
   cout << "Idade: " << idade << "\n";
   cout << "Altura: " << altura << "\n";
   cout << "Aprovado: " << (aprovado ? "Sim" : "Não") << "\n";


   const double PI = 3.14159;
   double raio = 5;
   double area = PI * raio * raio;
   cout << "Área do círculo de raio 5: " << area << "\n";
}


// =====================================================
// 2. Entrada e Saída (003.cpp)
// =====================================================
void exercicio2() {
   cout << "\n--- Exercício 2 ---\n";


   string primeiroNome;
   int idade;
   cout << "Digite seu primeiro nome: ";
   cin >> primeiroNome;
   cout << "Digite sua idade: ";
   cin >> idade;
   cout << "Olá, " << primeiroNome << "! Você tem " << idade << " anos.\n";


   cin.ignore(); // limpar buffer
   string nomeCompleto;
   cout << "Digite seu nome completo: ";
   getline(cin, nomeCompleto);
   cout << "Nome completo: " << nomeCompleto << "\n";
}


// =====================================================
// 3. Operadores e Casting (004.cpp)
// =====================================================
void exercicio3() {
   cout << "\n--- Exercício 3 ---\n";


   int a, b;
   cout << "Digite dois números inteiros: ";
   cin >> a >> b;


   cout << "Soma: " << a + b << "\n";
   cout << "Subtração: " << a - b << "\n";
   cout << "Multiplicação: " << a * b << "\n";
   cout << "Divisão inteira: " << a / b << "\n";
   cout << "Divisão real: " << (double)a / b << "\n";


   int maior = (a > b) ? a : b;
   cout << "Maior número: " << maior << "\n";
}


// =====================================================
// 4. Estruturas de Controle (005.cpp)
// =====================================================
void exercicio4() {
   cout << "\n--- Exercício 4 ---\n";


   double nota;
   cout << "Digite a nota (0 a 10): ";
   cin >> nota;


   if (nota >= 6) cout << "Aprovado\n";
   else if (nota >= 4) cout << "Prova final\n";
   else cout << "Reprovado\n";


   int opcao;
   string nome;
   vector<string> nomes;


   do {
       cout << "\nMenu:\n1 - Cadastrar nome\n2 - Listar nomes\n3 - Sair\nOpção: ";
       cin >> opcao;
       cin.ignore();
       switch (opcao) {
           case 1:
               cout << "Digite um nome: ";
               getline(cin, nome);
               nomes.push_back(nome);
               break;
           case 2:
               cout << "Nomes cadastrados:\n";
               for (auto &n : nomes) cout << n << "\n";
               break;
       }
   } while (opcao != 3);
}


// =====================================================
// 5. Laços (006.cpp)
// =====================================================
void exercicio5() {
   cout << "\n--- Exercício 5 ---\n";


   cout << "Números ímpares de 1 a 20:\n";
   for (int i = 1; i <= 20; i++) {
       if (i % 2 != 0) cout << i << " ";
   }
   cout << "\n";


   cout << "Contagem regressiva:\n";
   int cont = 10;
   while (cont >= 0) {
       cout << cont << " ";
       cont--;
   }
   cout << "\n";


   int escolha;
   do {
       cout << "\nMenu (digite 0 para sair): ";
       cin >> escolha;
       cout << "Você digitou: " << escolha << "\n";
   } while (escolha != 0);
}


// =====================================================
// 6. Funções e Passagem por Referência (007.cpp)
// =====================================================
int soma(int a, int b) {
   return a + b;
}


int soma(int a, int b, int c) { // sobrecarga
   return a + b + c;
}


void incrementa(int &x) {
   x++;
}


void exercicio6() {
   cout << "\n--- Exercício 6 ---\n";


   cout << "Soma(2,3): " << soma(2, 3) << "\n";
   cout << "Soma(2,3,4): " << soma(2, 3, 4) << "\n";


   int n = 5;
   incrementa(n);
   cout << "Valor incrementado: " << n << "\n";
}


// =====================================================
// 7. Arrays e std::vector (008.cpp)
// =====================================================
void exercicio7() {
   cout << "\n--- Exercício 7 ---\n";


   int arr[5] = {1, 2, 3, 4, 5};
   int somaArr = 0;
   for (int i = 0; i < 5; i++) somaArr += arr[i];
   cout << "Soma dos elementos do array: " << somaArr << "\n";


   vector<int> v = {5, 10, 15};
   v.push_back(20);
   v.push_back(25);


   int somaVec = 0;
   for (int x : v) somaVec += x;


   cout << "Tamanho do vector: " << v.size() << "\n";
   cout << "Soma do vector: " << somaVec << "\n";
}


// =====================================================
// 8. Ponteiros e Referências (009.cpp)
// =====================================================
void exercicio8() {
   cout << "\n--- Exercício 8 ---\n";


   int x = 10;
   int *px = &x;
   *px *= 2; // dobrar com ponteiro
   int &ref = x;
   ref *= 3; // triplicar com referência
   cout << "Valor de x após operações: " << x << "\n";


   int *p = new int(42);
   cout << "Valor armazenado dinamicamente: " << *p << "\n";
   delete p;
}


// =====================================================
// 9. Struct e Classe (010.cpp)
// =====================================================
struct Aluno {
   string nome;
   int idade;
};


class ContaBancaria {
private:
   double saldo;
public:
   ContaBancaria() : saldo(0) {}
   void depositar(double valor) { saldo += valor; }
   void sacar(double valor) { if (saldo >= valor) saldo -= valor; }
   void imprimir() { cout << "Saldo atual: " << saldo << "\n"; }
};


void exercicio9() {
   cout << "\n--- Exercício 9 ---\n";


   Aluno a;
   cout << "Digite nome do aluno: ";
   cin.ignore();
   getline(cin, a.nome);
   cout << "Digite idade: ";
   cin >> a.idade;
   cout << "Aluno: " << a.nome << " - " << a.idade << " anos\n";


   ContaBancaria conta;
   conta.depositar(1000);
   conta.sacar(200);
   conta.imprimir();
}


int main() {
   exercicio1();
   exercicio2();
   exercicio3();
   exercicio4();
   exercicio5();
   exercicio6();
   exercicio7();
   exercicio8();
   exercicio9();
   return 0;
}
// UM RESUMO DO QUE FOI FEITO:
//Exercício 1 → Declaração de variáveis, uso de constante e cálculo da área de um círculo.


//Exercício 2 → Entrada de dados com cin e getline para lidar com nome simples e nome completo.


//Exercício 3 → Operadores aritméticos, casting e operador ternário para pegar o maior valor.


//Exercício 4 → Estruturas de decisão if-else e switch dentro de um menu de nomes.


//Exercício 5 → Três laços: for (ímpares), while (contador regressivo) e do-while (menu até digitar 0).


//Exercício 6 → Criação e uso de funções, incluindo passagem por referência e sobrecarga.


//Exercício 7 → Uso de array e vector, com soma dos elementos.


//Exercício 8 → Manipulação de ponteiros e referências, além de new e delete.


//Exercício 9 → Definição de struct e class, com leitura de dados e simulação de conta bancária.





