#include "BankOperation.h"
#include <iostream>

BankOperation inputBankOperation() {
    BankOperation operation;
    std::cout << "Enter date (dd.mm.yy): ";
    std::getline(std::cin, operation.date);
    std::cout << "Enter time (hh:mm:ss): ";
    std::getline(std::cin, operation.time);
    std::cout << "Enter type (приход/расход): ";
    std::getline(std::cin, operation.type);
    std::cout << "Enter account: ";
    std::getline(std::cin, operation.account);
    std::cout << "Enter amount: ";
    std::cin >> operation.amount;
    std::cin.ignore(); // Очищаем буфер ввода
    std::cout << "Enter purpose: ";
    std::getline(std::cin, operation.purpose);
    return operation;
}

void printBankOperation(const BankOperation& operation) {
    std::cout << "Date: " << operation.date << std::endl;
    std::cout << "Time: " << operation.time << std::endl;
    std::cout << "Type: " << operation.type << std::endl;
    std::cout << "Account: " << operation.account << std::endl;
    std::cout << "Amount: " << operation.amount << std::endl;
    std::cout << "Purpose: " << operation.purpose << std::endl;
}