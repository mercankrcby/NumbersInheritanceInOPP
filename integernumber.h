
/* 
 * File:   integernumber.h
 * Author: mercankaracabey
 *
 * Created on 15 Aralık 2015 Salı, 23:40
 */

#ifndef INTEGERNUMBER_H
#define INTEGERNUMBER_H
#include "rationalnumber.h"

namespace MK_131044034 {

    class IntegerNumber : public RationalNumber {
    public:
        IntegerNumber();
        IntegerNumber(int intNumber);
        friend IntegerNumber operator-(const IntegerNumber &integerNumber);
        friend IntegerNumber operator+(const IntegerNumber & firstNumber, const IntegerNumber &secondNumber);
        friend IntegerNumber operator-(const IntegerNumber & firstNumber, const IntegerNumber &secondNumber);
        friend bool operator<(const IntegerNumber & firstNumber, const IntegerNumber &secondNumber);
        friend std::ostream& operator<<(std::ostream& outputStream, const IntegerNumber &integerNumber);
    };

}
#endif /* INTEGERNUMBER_H */

