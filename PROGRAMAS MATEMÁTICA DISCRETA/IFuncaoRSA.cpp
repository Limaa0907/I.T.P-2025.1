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
    
    int n = primo1 * primo2;    //Calcula o n pela multiplicação dos 2 primos p e q
    int totiente_n = funcaototiente(primo1, primo2);    //Calcula o totiente de n para realizar a chave privada

    int exp_publico;    //declaração do e
    std::cout << "Agora digite o expoente da chave publica: " << std::endl;
    std::cin >> exp_publico;
    if (mdc(exp_publico, totiente_n) != 1 || exp_publico >= totiente_n){    //Verifica se o 'e' e totiente n são coprimos 
        std::cout << "Numero invalido para expoente da chave publica";
        exit(1);
    }

    int exp_privado = funcaoinversomodular(exp_publico, totiente_n);    //Calcula o d pelo inverso modular de e

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Limpa o buffer para que o getline seja usado melhor
    std::string mensagem;
    std::cout << "Digite sua mensagem:" << std::endl;
    std::getline(std::cin, mensagem);
    int tamanho = mensagem.length();
    int resultado[100]; 

    Codificador(mensagem, exp_publico, n, resultado, tamanho);  //Chama a função para codificar a mensagem

    std::string mensagem_decodificada = Decodificador(resultado, tamanho, exp_privado, n);  //Decodifica a mensagem

    std::cout << "A sua mensagem criptografada eh: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << resultado[i] << " ";   //Atribui cada caractere ao resultado final da mensagem criptografada
    }
    std::cout << std::endl;

    std::string verificador = "";
    for (std::size_t i = 0; i < mensagem.length(); ++i) {   //Verifica se a decodificação ocorreu como o esperado
        char c = mensagem[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
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
    int pos = 0;    //Armazenar a posição atual de cada caractere no resultado

    for (std::size_t i = 0; i < mensagem.length(); i++){
        int msg;    //Variável para guardar o número do caractere
        char c = mensagem[i];   //Caractere atual

        if (c >= 'A' && c <= 'Z'){  // Se for letra maiúscula, transforma em número 0-25
            msg = c - 'A';
        } 
        else if (c >= 'a' && c <= 'z'){   //Se for letra minúscula, transfomra também em número 26-51
            msg = c - 'a' + 26;
        } 

        int criptografado = 1;
        for (int j = 0; j < exp_publico; j++){  // Faz a exponenciação modular por msg^exp_publico mod n ou m^e mod n
            criptografado = (criptografado * msg) % n;  
        }

        resultado[pos++] = criptografado;   //Resultado no índice recebe o valor criptografado
    }
    tamanho = pos;  //Atualiza o tamanho da mensagem para o que realmente foi alocado na memória
}

std::string Decodificador(int mensagem_criptografada[], int tamanho, int exp_privado, int n){
    std::string mensagem_decodificada = ""; //String para reconstruir a mensagem do 0

    for (int i = 0; i < tamanho; i++){
        int criptografado = mensagem_criptografada[i];  //Valor cifrado no indice
        int msg = 1;    //m da exponenciação modular

        for (int j = 0; j < exp_privado; j++){  // Calcula o msg pelo processo inverso criptografado^exp_privado mod n ou c^d mod n 
            msg = (msg * criptografado) % n;
        }
        if (msg >= 0 && msg <= 25){ //Se é letra maiúscula, volta para o caractere ASCII
            mensagem_decodificada += msg + 'A';    
        } 
        else if (msg >= 26 && msg <= 51){   //Se é minúscula, faz o mesmo processo para encontrar o valor ASCII
            mensagem_decodificada += msg - 26 + 'a'; 
        }
    }
    return mensagem_decodificada;
}


bool ehprimo(int primo){
    if (primo < 2) return false;
        for (int i = 2; i * i <= primo; i++) {  //Verifica se os parâmetros são primos
            if (primo % i == 0) {
                return false;
            }
        }
    return true;
}

int funcaototiente(int primo1, int primo2){
    int totiente_n = (primo1 - 1) * (primo2 - 1);   //Fórmula de cálculo do totiente de n
    return totiente_n;
}

int funcaoinversomodular(int a, int m) {
    int m0 = m;
    int s= 1; //Coeficientes de Bezóut
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
    while (valor2 != 0){    //Verifica o mdc entre os dois parâmetros
        int r;
        r = valor1 % valor2;
        valor1 = valor2;
        valor2 = r;
    }
    return valor1;
}