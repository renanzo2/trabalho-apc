   // Laço para processar múltiplas mensagens
    for (i = 0; i < quantidade; i++) {
        // Entrada da mensagem hexadecimal
        printf("Digite a mensagem hexadecimal a ser codificada: ");
        scanf("%s", hexadecimal);

        // Entrada do valor da variável 'b'
        printf("Digite a variavel b: ");
        scanf("%d", &b);

        // Calcula o comprimento da mensagem hexadecimal
        tamanho = strlen(hexadecimal);

        // Laço para processar a mensagem hexadecimal em blocos de 2 caracteres
        for (j = 0; j < tamanho; j += 2) {
            // Evita acessar fora dos limites do array
            if (j + 1 >= tamanho) {
                break;
            }

            // Copia dois caracteres da string hexadecimal para 'dupla'
            dupla[0] = hexadecimal[j];
            dupla[1] = hexadecimal[j+1];

            // Verifica se encontrou "00" (indicando fim da mensagem)
            if (strcmp(dupla, "00") == 0) {
                break;
            }

            // Converte a dupla de caracteres hexadecimais para decimal
            decimal = strtol(dupla, NULL, 16);

            // Verifica se o caractere decimal é imprimível (evita caracteres de controle)
            if ((decimal >= 32 && decimal <= 126) || (decimal >= 160 && decimal <= 255)) {
                // Verifica o valor da função, se não for zero, imprime o caractere
                if (func_val(j, b) != 0) {
                    printf("%c", decimal);  // Exibe o caractere decodificado
                }
            }
        }

        // Pula uma linha após decifrar cada mensagem
        printf("\n\n");
    }

    return 0;
}
