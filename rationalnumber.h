/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rationalnumber.h
 * Author: mercankaracabey
 *
 * Created on 15 Aralık 2015 Salı, 20:15
 */

#ifndef RATIONALNUMBER_H
#define RATIONALNUMBER_H
#include "realnumber.h"

namespace MK_131044034 {

    class RationalNumber : public RealNumber {
    public:
        RationalNumber();
        RationalNumber(double numberRational);
        //copy constructor
        RationalNumber(const RationalNumber & numberRational);
        double getDenom()const;
        double getNum()const;
        void setDenom(double denomRat);
        void setNum(double numRat);
        friend RationalNumber operator-(const RationalNumber &rationalNumber);
        friend RationalNumber operator+(const RationalNumber & firstNumber, const RationalNumber &secondNumber);
        friend RationalNumber operator-(const RationalNumber & firstNumber, const RationalNumber &secondNumber);
        friend bool operator<(const RationalNumber & firstNumber, const RationalNumber &secondNumber);
        friend std::ostream& operator<<(std::ostream& outputStream, const RationalNumber &rationalNumber);
    private:
        double num;
        double denom;
    };

}
#endif /* RATIONALNUMBER_H */

