/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   realnumber.h
 * Author: mercankaracabey
 *
 * Created on 14 Aralık 2015 Pazartesi, 23:32
 */

#ifndef REALNUMBER_H
#define REALNUMBER_H
#include "complexnumber.h"

namespace MK_131044034 {
    //Real number adli class ComplexNumber adli base class dan fonksiyonlari ve data 
    //memberlari miras alir

    class RealNumber : public ComplexNumber {
    public:
        //***---------------------CONSTRUCTORS-----------------------***//
        RealNumber();
        // imajinal kismi sifirlar real kisim uzerinden islem yapilmasini saglar
        RealNumber(long double realNumber);
        //***-----------------OPERATOR OVERLOADINS-------------------***//
        //unary (-) real kismin negatifini olusturur 
        friend RealNumber operator-(const RealNumber &realNumber);
        // binary (+) girilen iki sayinin real kisimlarini toplar
        friend RealNumber operator+(const RealNumber & firstNumber, const RealNumber &secondNumber);
        // binary (- )girilen iki sayinin real kisimlarini cikartir 
        friend RealNumber operator-(const RealNumber & firstNumber, const RealNumber &secondNumber);
        // girilen iki sayiyi karsilastirir birincisi kucukse true dondurur
        friend bool operator<(const RealNumber & firstNumber, const RealNumber &secondNumber);
        // real sayiyi ekrana basar
        friend std::ostream& operator<<(std::ostream& outputStream, const RealNumber &realNumber);
    };
}

#endif /* REALNUMBER_H */

