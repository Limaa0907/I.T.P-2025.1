#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>

/*Implementar uma função que retorne um texto cifrado utilizando a técnica de criptografia RSA 
e depois decodifique usando os mesmos parâmetros. p e q devem ser dados pelo usuário e o programa 
não precisa codificar números e caracteres especiais.*/

void Codificador(const std::string& mensagem, int exp_publico, int n, int* resultado, int& tamanho);
std::string Decodificador (int mensagem_criptografada[], int tamanho, int exp_privado, int n);
bool ehprimo (int primo);
int funcaototiente (int primo1, int primo2);
int funcaoinversomodular(int exp_publico, int totiente_n);
int mdc(int valor1, int valor2);

int main (){
    int primo1;
    std::cout << "Digite o primeiro valor: " << std::endl;
    std::cin >> primo1;

    int primo2;
    std::cout << "Digite o segundo valor: " << std::endl;
    std::cin >> primo2;

    if (ehprimo(primo1) == false && ehprimo(primo2) == false){
        std::cout << "Os dois valores digitados nao sao primos" << std::endl;
        exit(1);
    }
    if (ehprimo(primo1) == false || ehprimo(primo2) == false){
        std::cout << "Um dos valores digitados nao eh primo" << std::endl;
        exit(1);
    }
    
    int n = primo1 * primo2;
    int totiente_n = funcaototiente(primo1, primo2);

    int exp_publico;
    std::cout << "Agora digite o expoente da chave publica: " << std::endl;
    std::cin >> exp_publico;
    if (mdc(exp_publico, totiente_n) != 1 || exp_publico >= totiente_n){
        std::cout << "Numero invalido para expoente da chave publica";
        exit(1);
    }

    int exp_privado = funcaoinversomodular(exp_publico, totiente_n);

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string mensagem;
    std::cout << "Digite sua mensagem:" << std::endl;
    std::getline(std::cin, mensagem);
    int tamanho = mensagem.length();
    int resultado[100];

    Codificador(mensagem, exp_publico, n, resultado, tamanho);

    std::string mensagem_decodificada = Decodificador(resultado, tamanho, exp_privado, n);

    std::cout << "A sua mensagem criptografada eh: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << resultado[i] << " ";
    }
    std::cout << std::endl;

    std::string verificador = "";
    for (std::size_t i = 0; i < mensagem.length(); i++) {
        char c = mensagem[i];
        if (c >= 32 && c <= 126) { 
            verificador += c;
        }
    }

    std::cout << "A sua mensagem decodificada eh: " << mensagem_decodificada << std::endl;

    if (verificador == mensagem_decodificada){
        std::cout << "O decodificador esta funcionando" << std::endl;
    }
    else {
        std::cout << "Ha algo de errado com o decodificador" << std::endl;
    }

    return 0;
}

void Codificador(const std::string& mensagem, int exp_publico, int n, int* resultado, int& tamanho){
    int pos = 0;
    for (std::size_t i = 0; i < mensagem.length(); i++){
        char c = mensagem[i];

        if (c >= 32 && c <= 126){
            int msg;
            msg = c;
        
            int criptografado = 1;
            for (int j = 0; j < exp_publico; j++){
                criptografado = (criptografado * msg) % n;
            }
        resultado[pos++] = criptografado;
        }
        else {
            continue;
        }
    }
    tamanho = pos;
}

std::string Decodificador(int mensagem_criptografada[], int tamanho, int exp_privado, int n){
    std::string mensagem_decodificada = "";

    for (int i = 0; i < tamanho; i++){
        int criptografado = mensagem_criptografada[i];
        int msg = 1;

        for (int j = 0; j < exp_privado; j++){
            msg = (msg * criptografado) % n;
        }
        if (msg >= 32 && msg <= 126){
            mensagem_decodificada += msg;    
        } 
    }
    return mensagem_decodificada;
}


bool ehprimo(int primo){
    if (primo < 2) return false;
        for (int i = 2; i * i <= primo; i++) {
            if (primo % i == 0) {
                return false;
            }
        }
    return true;
}

int funcaototiente(int primo1, int primo2){
    int totiente_n = (primo1 - 1) * (primo2 - 1);
    return totiente_n;
}

int funcaoinversomodular(int a, int m) {
    int m0 = m;
    int s= 1; 
    int t = 0;

    if (m == 1){
        return 0; // não existe inverso mod 1
    }

    while (a > 1){
        int q = a / m; // quociente

        int aux = m; //Troca de variáveis
        m = a % m;
        a = aux;

        aux = t;  //Atualização dos coeficientes de Bezóut
        t = s - q * t; 
        s = aux;
    }

    if (s < 0){ //Ajustar o intervalo entre 0 e m
        s += m0;
    }
    return s;
}

int mdc(int valor1, int valor2){
    while (valor2 != 0) {
        int r;
        r = valor1 % valor2;
        valor1 = valor2;
        valor2 = r;
    }
    return valor1;
}