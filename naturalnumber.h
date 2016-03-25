
/* 
 * File:   naturalnumber.h
 * Author: mercankaracabey
 *
 * Created on 16 Aralık 2015 Çarşamba, 00:01
 */

#ifndef NATURALNUMBER_H
#define NATURALNUMBER_H
#include "integernumber.h"

namespace MK_131044034 {

    class NaturalNumber : public IntegerNumber {
    public:
        NaturalNumber();
        NaturalNumber(unsigned int naturalNumber);
        friend NaturalNumber operator-(const NaturalNumber &naturalNumber);
        friend NaturalNumber operator+(const NaturalNumber & firstNumber, const NaturalNumber &secondNumber);
        friend NaturalNumber operator-(const NaturalNumber & firstNumber, const NaturalNumber &secondNumber);
        friend bool operator<(const NaturalNumber & firstNumber, const NaturalNumber &secondNumber);
        friend std::ostream& operator<<(std::ostream& outputStream, const NaturalNumber &naturalNumber);
    };

}

#endif /* NATURALNUMBER_H */

