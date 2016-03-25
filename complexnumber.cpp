/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include<iostream>
//#include<fstream>
//#include<cstdlib>
#include "complexnumber.h"

namespace MK_131044034 {
  using std::cout;
  using std::endl;
  using std::fixed;
  //namespace NumberInheritance

  ComplexNumber::ComplexNumber() : realNum(0), virtualNum(0) {
  }

  ComplexNumber::ComplexNumber(long double realNumber, long double virtualNumber) : realNum(realNumber), virtualNum(virtualNumber) {
  }

  long double ComplexNumber::getReal()const {
    return realNum;
  }

  long double ComplexNumber::getVirtual()const {
    return virtualNum;
  }

  void ComplexNumber::setReal(long double realNumber) {
    realNum = realNumber;
  }

  void ComplexNumber::setVirtual(int virtualNumber) {
    virtualNum = virtualNumber;
  }

  // unary (-)

  ComplexNumber operator-(const ComplexNumber &numberComplex) {
    long double negativeReal = -(numberComplex.getReal());
    long double negativeVirtual = -(numberComplex.getVirtual());
    return ComplexNumber(negativeReal, negativeVirtual);
  }

  // binary (+)

  ComplexNumber operator+(const ComplexNumber & firstNumber, const ComplexNumber &secondNumber) {
    long double totalReal = firstNumber.getReal() + secondNumber.getReal();
    long double totalVirtual = firstNumber.getVirtual() + secondNumber.getVirtual();
    return ComplexNumber(totalReal, totalVirtual);
  }
  // binary (-)

  ComplexNumber operator-(const ComplexNumber& firstNumber, const ComplexNumber &secondNumber) {
    long double difReal = firstNumber.getReal() - secondNumber.getReal();
    long double difVirtual = firstNumber.getVirtual() - secondNumber.getVirtual();
    return ComplexNumber(difReal, difVirtual);
  }

  bool operator<(const ComplexNumber & firstNumber, const ComplexNumber & secondNumber) {
    if ((firstNumber.getReal() * firstNumber.getReal() + firstNumber.getVirtual() * firstNumber.getVirtual()) <
            secondNumber.getReal() * secondNumber.getReal() + secondNumber.getVirtual() * secondNumber.getVirtual())
      return true;
    else
      return false;
  }

  std::ostream& operator<<(std::ostream& outputStream, const ComplexNumber &other) {
    outputStream << "Complex Number:" << other.realNum << "+" << "(" << other.virtualNum << "i)";
    return outputStream;
  }



}