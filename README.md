# CPF Validator in C

This repository contains a C implementation for validating Brazilian CPF (Cadastro de Pessoas Físicas) numbers. The program checks if the provided CPF is valid based on the verification digits and the official algorithm rules.

## 📋 Features

- Validation of user-provided CPF numbers.
- Calculation of verification digits.
- Displays messages indicating whether the CPF is valid or invalid.

## 🚀 How to Use

1. Clone this repository:
   ```bash
   git clone https://github.com/wescleyj/cpf-validator.git
   ```
2. Navigate to the cloned repository folder:
   ```bash
   cd cpf-validator
   ```
3. Compile the program:
   ```bash
   gcc -o validator cpf-validator.c
   ```
4. Run the program:
   ```bash
   ./validator
   ```
5. Enter a CPF in the format `12345678909` or `123.456.789-09` (with or without dots and dashes) when prompted.

## 🛠 Code Structure
- **Input**: The program prompts the user to enter a CPF number.
- **Processing**: Validation follows the steps of the official algorithm:
  - Verify the first check digit.
  - Verify the second check digit.
- **Output**: The program displays whether the CPF is valid or invalid.
- The program continues running until EOF is encountered.

