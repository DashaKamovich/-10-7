#pragma once
#ifndef BANK_OPERATIONS_IO_H
#define BANK_OPERATIONS_IO_H

#include <vector>
#include "BankOperation.h"

// ‘ункци€ дл€ загрузки банковских операций из файла
std::vector<BankOperation> loadBankOperationsFromFile(const std::string& filename);

// ‘ункци€ дл€ вывода всех приходных операций
void printIncomingOperations(const std::vector<BankOperation>& operations);

// ‘ункци€ дл€ вывода всех операций за но€брь 2021 года
void printNovember2021Operations(const std::vector<BankOperation>& operations);

#endif // BANK_OPERATIONS_IO_H