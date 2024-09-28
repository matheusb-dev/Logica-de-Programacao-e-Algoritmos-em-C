/*  Autor: Luiz Eduardo Marques da Silva
    Data: 06/05/2024
    Objetivo:
*/

#include <stdio.h>

int main() {
    float salario_bruto, premio, base_inss, base_ir, taxa_inss, taxa_ir;
    float rendimento, desconto_inss, desconto_ir, salario_liquido;

    // Entrada de dados
    printf("Informe o salário bruto: ");
    scanf("%f", &salario_bruto);
    printf("Informe o prêmio: ");
    scanf("%f", &premio);
    printf("Informe a base do INSS: ");
    scanf("%f", &base_inss);
    printf("Informe a taxa do INSS (em decimal): ");
    scanf("%f", &taxa_inss);
    printf("Informe a base do Imposto de Renda: ");
    scanf("%f", &base_ir);
    printf("Informe a taxa do Imposto de Renda (em decimal): ");
    scanf("%f", &taxa_ir);

    // Cálculo do rendimento
    rendimento = salario_bruto + premio;

    // Cálculo do desconto do INSS
    if (rendimento > base_inss) {
        desconto_inss = salario_bruto * taxa_inss;
    } else {
        desconto_inss = 0;
    }

    // Cálculo do desconto do IR
    if ((rendimento - desconto_inss) > base_ir) {
        desconto_ir = (rendimento - desconto_inss - base_ir) * taxa_ir;
    } else {
        desconto_ir = 0;
    }

    // Cálculo do salário líquido
    salario_liquido = rendimento - desconto_inss - desconto_ir;

    // Saída de dados
    printf("\n--- Demonstrativo de Pagamento ---\n");
    printf("Salário Bruto: %.2f\n", salario_bruto);
    printf("Prêmio: %.2f\n", premio);
    printf("Rendimento: %.2f\n", rendimento);
    printf("Desconto de INSS: %.2f\n", desconto_inss);
    printf("Desconto de IR: %.2f\n", desconto_ir);
    printf("Salário Líquido: %.2f\n", salario_liquido);

    return 0;
}