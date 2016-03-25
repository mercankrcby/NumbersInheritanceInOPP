/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "complexnumber.h"
#include "realnumber.h"

namespace MK_131044034 {

  RealNumber::RealNumber() : ComplexNumber(0, 0) {
  }

  RealNumber::RealNumber(long double realNumber) : ComplexNumber(realNumber, 0) {
  }

  std::ostream& operator<<(std::ostream& outputStream, const RealNumber &realNumber) {
    outputStream << "Real Number: " << realNumber.getReal();
    return outputStream;
  }

  RealNumber operator-(const RealNumber &realNumber) {
    long double negativeReal = -(realNumber.getReal());
    return RealNumber(negativeReal);
  }

  RealNumber operator+(const RealNumber & firstNumber, const RealNumber & secondNumber) {
    long double totalReal = firstNumber.getReal() + secondNumber.getReal();
    return RealNumber(totalReal);
  }

  RealNumber operator-(const RealNumber& firstNumber, const RealNumber &secondNumber) {
    long double difReal = firstNumber.getReal() - secondNumber.getReal();
    return RealNumber(difReal);
  }

  bool operator<(const RealNumber& firstNumber, const RealNumber &secondNumber) {
    if ((firstNumber.getReal() < secondNumber.getReal()))
      return true;
    else
      return false;
  }
}

