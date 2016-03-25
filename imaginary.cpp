/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "imaginary.h"
#include "complexnumber.h"

namespace MK_131044034 {
  using namespace std;

  ImaginaryNumber::ImaginaryNumber() : ComplexNumber(0, 0) {
  }

  ImaginaryNumber::ImaginaryNumber(long double virtualPart) : ComplexNumber(0, virtualPart) {
  }

  std::ostream& operator<<(ostream& outputStream, const ImaginaryNumber &otherNumber) {
    outputStream << "Imaginary Number: " << otherNumber.getVirtual() << "i";
    return outputStream;
  }

  ImaginaryNumber operator-(const ImaginaryNumber &imagineNumber) {
    long double negativeVirtual = -(imagineNumber.getVirtual());
    return ImaginaryNumber(negativeVirtual);
  }

  ImaginaryNumber operator+(const ImaginaryNumber & firstNumber, const ImaginaryNumber & secondNumber) {
    long double totalVirtual = firstNumber.getVirtual() + secondNumber.getVirtual();
    return ImaginaryNumber(totalVirtual);
  }

  ImaginaryNumber operator-(const ImaginaryNumber& firstNumber, const ImaginaryNumber &secondNumber) {
    long double difVirtual = firstNumber.getVirtual() - secondNumber.getVirtual();
    return ImaginaryNumber(difVirtual);
  }

  bool operator<(const ImaginaryNumber& firstNumber, const ImaginaryNumber &secondNumber) {
    if ((firstNumber.getVirtual() > secondNumber.getVirtual()))
      return true;
    else
      return false;
  }


}
