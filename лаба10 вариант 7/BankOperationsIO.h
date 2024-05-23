#pragma once
#ifndef BANK_OPERATIONS_IO_H
#define BANK_OPERATIONS_IO_H

#include <vector>
#include "BankOperation.h"

// ������� ��� �������� ���������� �������� �� �����
std::vector<BankOperation> loadBankOperationsFromFile(const std::string& filename);

// ������� ��� ������ ���� ��������� ��������
void printIncomingOperations(const std::vector<BankOperation>& operations);

// ������� ��� ������ ���� �������� �� ������ 2021 ����
void printNovember2021Operations(const std::vector<BankOperation>& operations);

#endif // BANK_OPERATIONS_IO_H