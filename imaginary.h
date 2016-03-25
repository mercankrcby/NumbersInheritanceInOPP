/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newfile.h
 * Author: mercankaracabey
 *
 * Created on 14 Aralık 2015 Pazartesi, 13:31
 */

#ifndef NEWFILE_H
#define NEWFILE_H
#include "complexnumber.h"

namespace MK_131044034 {


//complex sayidan fonksiyonlari ve data memberlari miras alır

class ImaginaryNumber : public ComplexNumber {
public:
    //***-----------------Constructors--------------------***//
    //real kisim sifirlanir sadece imajinal kisim uzerinden islem yapilir
    ImaginaryNumber();
    ImaginaryNumber(long double virtualPart);
    //***-------------OPERATOR OVERLOADINGS---------------***//

    //complex sayinin a+ib yapisindaki b carpani ve i imajinal kisimi olusturur
    //asagida da imajinal kisim icin gerekli islemleri yapmak icin ozellesmis overloadlar yer almaktadir

    //unary (-) imajinal kismi negatif yapar
    friend ImaginaryNumber operator-(const ImaginaryNumber &imagineNumber);
    //binary (+) iki imajinal sayiyi toplar
    friend ImaginaryNumber operator+(const ImaginaryNumber &firstNumber, const ImaginaryNumber &secondNumber);
    //binary (-) iki imajinal sayiyi birbirinden cikarir
    friend ImaginaryNumber operator-(const ImaginaryNumber &firstNumber, const ImaginaryNumber &secondNumber);
    // iki sayinin imajinal kisimlarini karsilastirarak birincisi buyukse true dondurur
    friend bool operator<(const ImaginaryNumber &firstNumber, const ImaginaryNumber &secondNumber);
    // imajinal sayiyi ekrana basar
    friend std::ostream& operator<<(std::ostream& outputStream, const ImaginaryNumber &otherNumber);
};

}
#endif /* NEWFILE_H */

