/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   irrationalnumber.h
 * Author: mercankaracabey
 *
 * Created on 16 Aralık 2015 Çarşamba, 00:40
 */

#ifndef IRRATIONALNUMBER_H
#define IRRATIONALNUMBER_H
#include "realnumber.h"

namespace MK_131044034 {

    class IrrationalNumber : public RealNumber {
    public:
        IrrationalNumber();
        IrrationalNumber(long double numberRational);
        void setIrrational(long double numberRational);

        //copy constructor
        IrrationalNumber(const IrrationalNumber & numberRational);
        friend IrrationalNumber operator-(const IrrationalNumber &rationalNumber);
        friend IrrationalNumber operator+(const IrrationalNumber & firstNumber, const IrrationalNumber &secondNumber);
        friend IrrationalNumber operator-(const IrrationalNumber & firstNumber, const IrrationalNumber &secondNumber);
        friend bool operator<(const IrrationalNumber & firstNumber, const IrrationalNumber &secondNumber);
        friend std::ostream& operator<<(std::ostream& outputStream, const IrrationalNumber &rationalNumber);
    };
}
#endif /* IRRATIONALNUMBER_H */

