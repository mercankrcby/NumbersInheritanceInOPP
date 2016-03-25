#include <iostream>
#include "rationalnumber.h"
#include "integernumber.h"

namespace MK_131044034 {
  using namespace std;

  IntegerNumber::IntegerNumber() : RationalNumber(0) {
  }

  IntegerNumber::IntegerNumber(int intNum) : RationalNumber(intNum) {
  }
  //unary

  IntegerNumber operator-(const IntegerNumber &integerNumber) {
    int negativeInteger = -(integerNumber.getReal());
    return IntegerNumber(negativeInteger);
  }

  IntegerNumber operator+(const IntegerNumber & firstNumber, const IntegerNumber &secondNumber) {
    int totalInteger = firstNumber.getReal() + secondNumber.getReal();
    return IntegerNumber(totalInteger);
  }

  IntegerNumber operator-(const IntegerNumber & firstNumber, const IntegerNumber &secondNumber) {
    int difInteger = firstNumber.getReal() - secondNumber.getReal();
    return IntegerNumber(difInteger);
  }

  bool operator<(const IntegerNumber & firstNumber, const IntegerNumber &secondNumber) {
    if (firstNumber.getReal() < secondNumber.getReal())
      return true;
    else
      return false;
  }

  std::ostream& operator<<(std::ostream& outputStream, const IntegerNumber &integerNumber) {
    outputStream << "Integer Number: " << integerNumber.getReal();
    return outputStream;
  }

}

