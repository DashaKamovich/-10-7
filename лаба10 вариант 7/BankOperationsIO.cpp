#include "BankOperationsIO.h"
#include <fstream>
#include <sstream>

std::vector<BankOperation> loadBankOperationsFromFile(const std::string& filename) {
    std::vector<BankOperation> operations;
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            BankOperation operation;
            std::getline(iss, operation.date, ' ');
            std::getline(iss, operation.time, ' ');
            std::getline(iss, operation.type, ' ');
            std::getline(iss, operation.account, ' ');
            std::string amountStr;
            std::getline(iss, amountStr, ' ');
            operation.amount = std::stod(amountStr);
            std::getline(iss, operation.purpose);
            operations.push_back(operation);
        }
        file.close();
    }
    else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }
    return operations;
}

void printIncomingOperations(const std::vector<BankOperation>& operations) {
    std::cout << "Incoming Bank Operations:" << std::endl;
    for (const auto& operation : operations) {
        if (operation.type == "coming") {
            printBankOperation(operation);
            std::cout << std::endl;
        }
    }
}

void printNovember2021Operations(const std::vector<BankOperation>& operations) {
    std::cout << "Bank Operations in November 2021:" << std::endl;
    for (const auto& operation : operations) {
        if (operation.date.substr(3, 2) == "11" && operation.date.substr(6, 2) == "21") {
            printBankOperation(operation);
            std::cout << std::endl;
        }
    }
}