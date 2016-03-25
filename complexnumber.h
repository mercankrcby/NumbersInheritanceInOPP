/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   complexnumber.h
 * Author: mercankaracabey
 *
 * Created on 13 Aralık 2015 Pazar, 18:55
 */

#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

namespace MK_131044034 {


    // ***-------------------BASE CLASS--------------------***//

    class ComplexNumber {
    public:
        //constructorlar
        ComplexNumber();
        ComplexNumber(long double realNumber, long double virtualNumber);
        //***--------------GETTERS&SETTERS-----------------***//
        long double getReal()const;
        long double getVirtual()const;

        void setReal(long double realNumber);
        void setVirtual(int virtualNumber);

        //***-----------OPERATOR OVERLOADINGS--------------***//

        //unary (-) opetor overloadu sayesinde girilen complex sayi - ile carpilir
        friend ComplexNumber operator-(const ComplexNumber & numberComplex);
        //binary (+) operator overloadu sayesinde girilen iki complex sayi toplanir
        friend ComplexNumber operator+(const ComplexNumber & firstNumber, const ComplexNumber & secondNumber);
        //binary (-) operator overloadu sayesinde girilen iki complex sayi cıkartilir
        friend ComplexNumber operator-(const ComplexNumber & firstNumber, const ComplexNumber & secondNumber);
        // girilen iki complex sayiyi birincisi kucukse true dondurecek sekilde karsilastirir
        friend bool operator<(const ComplexNumber & firstNumber, const ComplexNumber & secondNumber);
        // girilen complex sayiyi ekrana basar
        friend std::ostream& operator<<(std::ostream& outputStream, const ComplexNumber &numberComplex);
    protected:
        //complex sayi a+ib seklinde yapilanmistir bu takdirde a real kısmı b ise imaginal sanal kısmı ifade eder
        long double realNum; //real kisim
        long double virtualNum; //sanal kisim
    };
}
//}
#endif /* COMPLEXNUMBER_H */

