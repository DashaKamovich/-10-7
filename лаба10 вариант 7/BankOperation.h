#pragma once
#pragma once
#ifndef BANK_OPERATION_H
#define BANK_OPERATION_H

#include <string>

// Структура для хранения информации о банковской операции
struct BankOperation {
    std::string date;
    std::string time;
    std::string type;
    std::string account;
    double amount;
    std::string purpose;
};

// Функция для ввода информации о банковской операции
BankOperation inputBankOperation();

// Функция для вывода информации о банковской операции
void printBankOperation(const BankOperation& operation);

#endif // BANK_OPERATION_H