/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include<iostream>
#include "rationalnumber.h"
#include "complexnumber.h"

namespace MK_131044034 {
  using namespace std;

  RationalNumber::RationalNumber() : RealNumber(0) {
  }

  RationalNumber::RationalNumber(double numberRational) : RealNumber(numberRational) {
  }

  double RationalNumber::getDenom() const {
    return denom;
  }

  double RationalNumber::getNum() const {
    return num;
  }

  void RationalNumber::setNum(double numRat) {
    num = numRat;
  }

  void RationalNumber::setDenom(double denomRat) {
    denom = denomRat;
  }
  //unary

  RationalNumber operator-(const RationalNumber &rationalNumber) {
    if (rationalNumber.getDenom() != 0 && rationalNumber.getNum() != 0) {
      double fraction = rationalNumber.getNum() / rationalNumber.getDenom();
      double negativeFraction = -fraction;
      return RationalNumber(negativeFraction);
    } else {
      double negativeReal = -(rationalNumber.getReal());
      return RationalNumber(negativeReal);
    }
  }

  RationalNumber operator+(const RationalNumber &firstNumber, const RationalNumber &secondNumber) {
    if (firstNumber.getDenom() != 0 && firstNumber.getNum() != 0) {
      double totalRational = (((firstNumber.getNum() * secondNumber.getDenom())+(secondNumber.getNum() * firstNumber.getDenom()))
              / (firstNumber.getDenom() * secondNumber.getDenom()));
      return RationalNumber(totalRational);
    } else {
      double totalRational = firstNumber.getReal() + secondNumber.getReal();
      return RationalNumber(totalRational);
    }
  }
  //binary

  RationalNumber operator-(const RationalNumber &firstNumber, const RationalNumber &secondNumber) {
    if (firstNumber.getDenom() != 0 && firstNumber.getNum() != 0) {
      double difRational = (((firstNumber.getNum() * secondNumber.getDenom())-(secondNumber.getNum() * firstNumber.getDenom()))
              / (firstNumber.getDenom() * secondNumber.getDenom()));
      return RationalNumber(difRational);
    } else {
      double difRational = firstNumber.getReal() - secondNumber.getReal();
      return RationalNumber(difRational);
    }
  }

  bool operator<(const RationalNumber & firstNumber, const RationalNumber &secondNumber) {
    if (firstNumber.getDenom() != 0 && firstNumber.getNum() != 0) {
      if (firstNumber.getDenom() == secondNumber.getDenom()) {
        if (firstNumber.getNum() < secondNumber.getNum())
          return true;
        else
          return false;
      } else {
        double newFraction1Num = firstNumber.getNum() * secondNumber.getDenom();
        double newFraction2Num = secondNumber.getNum() * firstNumber.getDenom();
        if (newFraction1Num < newFraction2Num)
          return true;
        else
          return false;
      }
    } else {
      if (firstNumber.getReal() < secondNumber.getReal())
        return true;
      else
        return false;
    }
  }

  std::ostream& operator<<(std::ostream& outputStream, const RationalNumber &rationalNumber) {
    if (rationalNumber.getDenom() != 0 && rationalNumber.getNum() != 0) {
      outputStream << rationalNumber.getNum() << " / " << rationalNumber.getDenom();
      return outputStream;
    } else {
      outputStream << rationalNumber.getReal();
      return outputStream;
    }
  }
}

