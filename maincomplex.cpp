
/* 
 * File:   maincomplex.cpp
 * Author: mercankaracabey
 *
 * Created on 13 Aralık 2015 Pazar, 20:04
 */

#include <cstdlib>
#include <cmath>
#include <iostream>
#include "imaginary.h"
#include "realnumber.h"
#include "irrationalnumber.h"
#include "naturalnumber.h"
#include "rationalnumber.h"
#include "complexnumber.h"
//using NumberInheritance::ComplexNumber;
using std::cout;
using std::fixed;
using std::endl;
using namespace MK_131044034;

//fonksiyon prototipi
void test_function();

int main() {

  /*
  ImaginaryNumber imagineNumber1(3);
  ImaginaryNumber imagineNumber2(-5);
  ComplexNumber number1(4.0/3,5);
  cout << number1.getReal()<<endl;
  ComplexNumber number2(6,3);
  ComplexNumber total=number1 +number2;
  cout<<total.getReal()<<"+"<<total.getVirtual()<<"i"<<endl;
  ComplexNumber difference= number1 - number2;
  cout<<difference.getReal() <<"-"<<difference.getVirtual()<<"i"<<endl;
  if(number1<number2)
      cout<<"first smaller than second"<<endl;
  else
      cout<<"second bigger than first"<<endl;
    
  cout<<number2;
  cout<<endl;
  cout<<imagineNumber1<<endl;
  cout<<imagineNumber1.getReal()<<endl;
  cout<<imagineNumber1.getVirtual()<<endl;
  ComplexNumber totalImagine=imagineNumber1+imagineNumber2;
  cout<<totalImagine.getReal()<<" + "<<totalImagine.getVirtual()<<"i"<<endl;
  cout<<imagineNumber2;
  cout<<endl;
  RealNumber number3(6.24);
  ComplexNumber total1=imagineNumber1 + number3;
  cout<<total1;
  //int a=5;
  //int b=8;
    
  double d = 3.14159265358979;
  cout.precision(17);
  cout << "Pi: " << fixed << d << endl;
   */
  test_function();
  //cout.precision(10);
  //cout<<c;
  return 0;
}

void test_function() {
  cout << "-----Natural Numbers-----" << endl;
  NaturalNumber testNumber1(356);
  NaturalNumber testNumber2(345);
  cout << testNumber1;
  cout << endl;
  cout << testNumber2;
  cout << endl;
  cout << "Addition of two natural number :" << endl;
  NaturalNumber totalNatural = testNumber1 + testNumber2;
  cout << totalNatural;
  cout << endl;

  cout << "Difference of two natural number :" << endl;
  if (testNumber1.getReal() > testNumber2.getReal()) {
    NaturalNumber difNatural = testNumber1 - testNumber2;
    cout << difNatural;
    cout << endl;
  } else
    cout << "Wrong Value , in difference operation of natural number ,'Can't subtract small number from big number'" << endl;
  cout << "Negative of First Natural Number : " << endl;
  NaturalNumber negativeNatural = -testNumber1;
  cout << negativeNatural;
  cout << endl;
  cout << "Compare of two natural numbers :" << endl;
  if (testNumber1 < testNumber2)
    cout << "First number smaller than second number" << endl;
  else
    cout << "Second number bigger than first number" << endl;

  cout << "-----Integer Numbers-----" << endl;
  IntegerNumber testNumber3(25);
  IntegerNumber testNumber4(-34);
  cout << testNumber3;
  cout << endl;
  cout << testNumber4;
  cout << endl;

  cout << "Addition of two integer numbers :" << endl;
  IntegerNumber totalInteger = testNumber3 + testNumber4;
  cout << totalInteger;
  cout << endl;

  cout << "Difference of two integer numbers :" << endl;

  IntegerNumber difInteger = testNumber3 - testNumber4;
  cout << difInteger;
  cout << endl;

  cout << "Compare of two integer numbers :" << endl;
  if (testNumber3 < testNumber4)
    cout << "First number smaller than second number" << endl;
  else
    cout << "Second number smaller than first number" << endl;

  IntegerNumber negativeInteger = -testNumber3;
  cout << "Negative of first integer number" << endl;
  cout << negativeInteger;
  cout << endl;
  cout << "-----Rational Numbers-----" << endl;
  cout << "->For fractional expression" << endl;
  RationalNumber fraction1;
  RationalNumber fraction2;
  fraction1.setNum(5);
  fraction1.setDenom(10);

  fraction2.setNum(7);
  fraction2.setDenom(25);
  cout << "First Fraction :";
  cout << fraction1;
  cout << endl;
  cout << "Second Fraction :";
  cout << fraction2;
  cout << endl;
  cout << "Addition of two rational -fraction- numbers :" << endl;
  RationalNumber totalFraction = fraction1 + fraction2;
  cout << totalFraction;
  cout << endl;

  cout << "Difference of two rational -fraction- numbers :" << endl;

  RationalNumber difFraction = fraction1 - fraction2;
  cout << difFraction;
  cout << endl;

  cout << "Compare of two rational -fraction- numbers :" << endl;
  if (fraction1 < fraction2)
    cout << "First number smaller than second number" << endl;
  else
    cout << "Second number smaller than first number" << endl;

  RationalNumber negativeFraction = -fraction1;
  cout << "Negative of first rational -fraction - number" << endl;
  cout << negativeFraction;
  cout << endl;

  cout << "->For normal Rational expression" << endl;
  RationalNumber testNumberRational1(8.0);
  RationalNumber testNumberRational2(9.4);
  testNumberRational1.setNum(0);
  testNumberRational1.setDenom(0);

  testNumberRational2.setNum(0);
  testNumberRational2.setDenom(0);
  cout << "First Rational Number :";
  cout << testNumberRational1;
  cout << endl;
  cout << "Second Rational Number :";
  cout << testNumberRational2;
  cout << endl;
  cout << "Addition of two rational numbers :" << endl;
  RationalNumber totalRational = testNumberRational1 + testNumberRational2;
  cout << totalRational;
  cout << endl;

  cout << "Difference of two rational numbers :" << endl;

  RationalNumber difRational = testNumberRational1 - testNumberRational2;
  cout << difRational;
  cout << endl;

  cout << "Compare of two rational numbers :" << endl;
  if (testNumberRational1 < testNumberRational2)
    cout << "First number smaller than second number" << endl;
  else
    cout << "Second number smaller than first number" << endl;

  RationalNumber negativeRational = -testNumberRational1;
  cout << "Negative of first rational number" << endl;
  cout << negativeRational;
  cout << endl;


  cout << "-----Real Numbers-----" << endl;
  RealNumber testRealNumber1(sqrt(4.0 / 9));
  RealNumber testRealNumber2(sqrt(9 / 4));
  cout << testRealNumber1;
  cout << endl;
  cout << testRealNumber2;
  cout << endl;

  cout << "Addition of two real numbers :" << endl;
  RealNumber totalReal = testRealNumber1 + testRealNumber2;
  cout << totalReal;
  cout << endl;

  cout << "Difference of two real numbers :" << endl;

  RealNumber difReal = testRealNumber1 - testRealNumber2;
  cout << difReal;
  cout << endl;

  cout << "Compare of two real numbers :" << endl;
  if (testRealNumber1 < testRealNumber2)
    cout << "First number smaller than second number" << endl;
  else
    cout << "Second number smaller than first number" << endl;

  RealNumber negativeReal = -testRealNumber1;
  cout << "Negative of first real number" << endl;
  cout << negativeReal;
  cout << endl;

  cout << "-----Imaginary Numbers-----" << endl;
  ImaginaryNumber testImaginaryNumber1(sqrt(7));
  ImaginaryNumber testImaginaryNumber2(sqrt(5));
  cout << testImaginaryNumber1;
  cout << endl;
  cout << testImaginaryNumber2;
  cout << endl;

  cout << "Addition of two imaginary numbers :" << endl;
  ImaginaryNumber totalImaginary = testImaginaryNumber1 + testImaginaryNumber2;
  cout << totalImaginary;
  cout << endl;

  cout << "Difference of two imaginary numbers :" << endl;

  ImaginaryNumber difImaginary = testImaginaryNumber1 - testImaginaryNumber2;
  cout << difImaginary;
  cout << endl;

  cout << "Compare of two imaginary numbers :" << endl;
  if (testImaginaryNumber1 < testImaginaryNumber2)
    cout << "First number smaller than second number" << endl;
  else
    cout << "Second number smaller than first number" << endl;

  ImaginaryNumber negativeImaginary = -testImaginaryNumber1;
  cout << "Negative of first imaginary number" << endl;
  cout << negativeImaginary;
  cout << endl;

  cout << "-----Complex Numbers-----" << endl;
  ComplexNumber testComplexNumber1(2, 3);
  ComplexNumber testComplexNumber2(4, 5);
  cout << testComplexNumber1;
  cout << endl;
  cout << testComplexNumber2;
  cout << endl;

  cout << "Addition of two complex numbers :" << endl;
  ComplexNumber totalComplex = testComplexNumber1 + testComplexNumber2;
  cout << totalComplex;
  cout << endl;

  cout << "Difference of two complex numbers :" << endl;

  ComplexNumber difComplex = testComplexNumber1 - testComplexNumber2;
  cout << difComplex;
  cout << endl;

  cout << "Compare of two complex numbers :" << endl;
  if (testComplexNumber1 < testComplexNumber2)
    cout << "First number smaller than second number" << endl;
  else
    cout << "Second number smaller than first number" << endl;

  ComplexNumber negativeComplex = -testComplexNumber1;
  cout << "Negative of first complex number" << endl;
  cout << negativeComplex;
  cout << endl;

  cout << "-----Irrational Numbers-----" << endl;
  IrrationalNumber testIrrationalNumber1;
  IrrationalNumber testIrrationalNumber2;
  testIrrationalNumber1.setIrrational(20 / 3);
  testIrrationalNumber2.setIrrational(17 / 7);
  cout << testIrrationalNumber1;
  cout << endl;
  cout << testIrrationalNumber2;
  cout << endl;

  cout << "Addition of two irrational numbers :" << endl;
  IrrationalNumber totalIrrational = testIrrationalNumber1 + testIrrationalNumber2;
  cout << totalIrrational;
  cout << endl;

  cout << "Difference of two irrational numbers :" << endl;

  IrrationalNumber difIrrational = testIrrationalNumber1 - testIrrationalNumber2;
  cout << difIrrational;
  cout << endl;

  cout << "Compare of two irrational numbers :" << endl;
  if (testIrrationalNumber1 < testIrrationalNumber2)
    cout << "First number smaller than second number" << endl;
  else
    cout << "Second number smaller than first number" << endl;

  IrrationalNumber negativeIrrational = -testIrrationalNumber1;
  cout << "Negative of first irrational number" << endl;
  cout << negativeIrrational;
  cout << endl;

  //karisik olarak toplama cikarma karsilastirma ornekleri
  //------>Imaginary + Real = Complex
  cout << "Imaginary number + Real number  =Complex number" << endl;
  ImaginaryNumber numberImaginary(5);
  cout << numberImaginary;
  cout << endl;
  RealNumber numberReal(10);
  cout << numberReal;
  cout << endl;
  ComplexNumber newComplex;
  newComplex = numberReal + numberImaginary;
  cout << newComplex;
  cout << endl;

  //------>Real-Rational = Real
  cout << "Real number + Rational number =Real number" << endl;
  RationalNumber numberRational(12 / 5);
  RealNumber numberReal1(345.456);
  RealNumber newReal;
  cout << numberReal1;
  cout << endl;
  newReal = numberReal1 - numberRational;
  cout << newReal;
  cout << endl;

  //------>Natural + Imaginary =Complex
  cout << "Natural number + ImaginaryNumber =Complex Number" << endl;
  NaturalNumber numberNatural(9);
  cout << numberNatural;
  cout << endl;
  ImaginaryNumber numberImaginary1(98);
  cout << numberImaginary1;
  cout << endl;
  ComplexNumber new1Complex;
  new1Complex = numberNatural + numberImaginary1;
  cout << new1Complex;
  cout << endl;
}


