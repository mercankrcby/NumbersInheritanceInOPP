//abs nin kullanımı !
#include <iostream>
#include <cstdlib>
#include "integernumber.h"
#include "naturalnumber.h"

namespace MK_131044034 {
  using namespace std;

  NaturalNumber::NaturalNumber() : IntegerNumber(0) {
  }

  NaturalNumber::NaturalNumber(unsigned int naturalNumber) : IntegerNumber(naturalNumber) {
  }
  //unary

  NaturalNumber operator-(const NaturalNumber &naturalNumber) {
    unsigned int negativeNatural = -((naturalNumber.getReal()));
    return NaturalNumber(negativeNatural);
  }

  NaturalNumber operator+(const NaturalNumber &firstNumber, const NaturalNumber &secondNumber) {
    unsigned int totalNatural = ((firstNumber.getReal()) + (secondNumber.getReal()));
    return NaturalNumber(totalNatural);
  }

  NaturalNumber operator-(const NaturalNumber &firstNumber, const NaturalNumber &secondNumber) {
    unsigned int difNatural = ((firstNumber.getReal())- (secondNumber.getReal()));
    return NaturalNumber(difNatural);
  }

  bool operator<(const NaturalNumber &firstNumber, const NaturalNumber &secondNumber) {
    if ((firstNumber.getReal()) < (secondNumber.getReal()))
      return true;
    else
      return false;
  }

  std::ostream& operator<<(std::ostream& outputStream, const NaturalNumber &naturalNumber) {
    outputStream << "Natural Number: " << (naturalNumber.getReal());
    return outputStream;
  }
}