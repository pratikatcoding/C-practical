#include <stdio.h>

int main() {
    float basicSalary, hra, da, grossSalary, incomeTax, netSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    hra = basicSalary * 0.20;
    da = basicSalary * 0.10;
    grossSalary = basicSalary + hra + da;

    incomeTax = grossSalary * 0.05;
    netSalary = grossSalary - incomeTax;

    printf("\nSalary Details:\n");
    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f\n", grossSalary);
    printf("Net Salary = %.2f\n", netSalary);

    return 0;
}
