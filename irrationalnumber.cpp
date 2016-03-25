/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "complexnumber.h"
#include "realnumber.h"
#include "irrationalnumber.h"
#include <cmath>

namespace MK_131044034 {

  IrrationalNumber::IrrationalNumber() : RealNumber(0) {
  }

  IrrationalNumber::IrrationalNumber(long double numberRational) : RealNumber(numberRational) {
  }

  void IrrationalNumber::setIrrational(long double irrationalNumber) {

      realNum = irrationalNumber;

  }

  IrrationalNumber operator+(const IrrationalNumber & firstNumber, const IrrationalNumber &secondNumber) {
    long double totalIrrational = firstNumber.getReal() + secondNumber.getReal();
    return IrrationalNumber(totalIrrational);
  }
  //unary

  IrrationalNumber operator-(const IrrationalNumber &rationalNumber) {
    long double negativeIrrational = -(rationalNumber.getReal());
    return IrrationalNumber(negativeIrrational);
  }

  IrrationalNumber operator-(const IrrationalNumber & firstNumber, const IrrationalNumber &secondNumber) {
    long double difIrrational = firstNumber.getReal() - secondNumber.getReal();
    return IrrationalNumber(difIrrational);
  }

  bool operator<(const IrrationalNumber & firstNumber, const IrrationalNumber &secondNumber) {
    if (firstNumber.getReal() < secondNumber.getReal())
      return true;
    else
      return false;
  }

  std::ostream& operator<<(std::ostream& outputStream, const IrrationalNumber &rationalNumber) {
    outputStream << "Irrational Number: " << rationalNumber.getReal();
    return outputStream;
  }



}
