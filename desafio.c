int main() {
    setlocale(LC_ALL, "");  // Ativa o suporte a acentuação com base no sistema operacional

    // Variáveis para controle do laço e armazenamento de dados
    int quantidade, i, tamanho, j, decimal, b;
    char hexadecimal[101];  // Array para armazenar a mensagem hexadecimal
    char dupla[3] = "00";   // Usado para armazenar dois caracteres hexadecimais

    // Recebe a quantidade de mensagens que o usuário quer decifrar
    printf("Quantas mensagens voce quer decifrar? ");
    scanf("%d", &quantidade);
