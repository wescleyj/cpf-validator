# Verificador de CPF em C

Este repositório contém uma implementação em C para a validação de números de CPF (Cadastro de Pessoas Físicas). O programa verifica se o CPF fornecido é válido com base nos dígitos verificadores e nas regras do algoritmo oficial.

## 📋 Funcionalidades

- Validação de números de CPF informados pelo usuário.
- Cálculo dos dígitos verificadores.
- Exibição de mensagens indicando se o CPF é válido ou inválido.

## 🚀 Como Usar

1. Clone este repositório:
   ```bash
   git clone https://github.com/wescleyj/verificador-cpf-c.git
   ```
2. Entre na pasta do repositório clonado:
   ```bash
   cd verificador-cpf-c
   ```
3. Clone este repositório:
   ```bash
    gcc -o verificador verificador_cpf.c
    ```
4. Execute o programa:
   ```bash
   ./verificador
   ```
5.Insira um CPF no formato 12345678909 ou 123.456.789-09 (com ou sem pontos e traços) quando solicitado.

## 🛠 Estrutura do Código
- Entrada: O programa solicita ao usuário que insira um número de CPF.
- Processamento: A validação é realizada seguindo os passos do algoritmo oficial:
- Verificar o primeiro dígito verificador.
- Verificar o segundo dígito verificador.
- Saída: O programa exibe se o CPF é válido ou inválido.
- O programa continua até encontrar o EOF.
