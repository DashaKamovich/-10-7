#include <iostream>
#include <vector>
#include "BankOperation.h"
#include "BankOperationsIO.h"

int main() {
    std::vector<BankOperation> bankOperations = loadBankOperationsFromFile("сикпо.txt");

    // Вывод всех приходных операций
    printIncomingOperations(bankOperations);

    // Вывод всех операций за ноябрь 2021 года
    printNovember2021Operations(bankOperations);

    return 0;
}