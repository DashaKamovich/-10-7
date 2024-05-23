#pragma once
#pragma once
#ifndef BANK_OPERATION_H
#define BANK_OPERATION_H

#include <string>

// ��������� ��� �������� ���������� � ���������� ��������
struct BankOperation {
    std::string date;
    std::string time;
    std::string type;
    std::string account;
    double amount;
    std::string purpose;
};

// ������� ��� ����� ���������� � ���������� ��������
BankOperation inputBankOperation();

// ������� ��� ������ ���������� � ���������� ��������
void printBankOperation(const BankOperation& operation);

#endif // BANK_OPERATION_H