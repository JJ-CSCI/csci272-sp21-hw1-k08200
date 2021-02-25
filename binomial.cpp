#include "binomial.h"

void Binomial::Multiply(float val){
  coefficient1 *= val;
  coefficient2 *= val;
}

void Binomial::Multiply(float monoCoefficient, int monoPower){
  coefficient1 *= monoCoefficient;
  power1 += monoPower;
  coefficient2 *= monoCoefficient;
  power2 += monoPower;
}

Binomial::Binomial() {
  coefficient1 = 1.0f;
  coefficient2 = 1.0f;
  power1 = 1;
  power2 = 1;
}

Binomial::Binomial(float co1) {
  coefficient1 = co1;  
  coefficient2 = 1.0f;
  power1 = 1;
  power2 = 1;
}

Binomial::Binomial(float co1, int pow1) {
  coefficient1 = co1; 
  coefficient2 = 1.0f;
  power2 = 1;
  if (pow1 < 1)
    power1 = 1;
  else
    power1 = pow1;
}

Binomial::Binomial(float co1, int pow1, float co2) {
  coefficient1 = co1; 
  coefficient2 = co2;
  power2 = 1;
  if (pow1 < 1)
    power1 = 1;
  else
    power1 = pow1;
}

Binomial::Binomial(float co1, int pow1, float co2, int pow2) {
  coefficient1 = co1;
  coefficient2 = co2;
  if (pow1 < 1)
    power1 = 1;
  else
    power1 = pow1;
  if (pow2 < 1)
    power2 = 1;
  else 
    power2 = pow2;
}

float Binomial::GetCoefficient(int i) {
  if (i == 1)
    return coefficient1;
  else if (i == 2)
    return coefficient2;
  else
    return -1;
}

int Binomial::GetPower(int i) {
  if (i == 1)
    return power1;
  else if (i == 2)
    return power2;
  else
    return -1;
}

int Binomial::SetPower(int index, int number) {
  if (index == 1) {
    if (number < 1)
      power1 = 1;
    else 
      power1 = number;
    
    return 0;
  } else if (index == 2) {
    if (number < 1)
      power2 = 1;
    else
      power2 = number;

    return 0;
  } else
    return -1;
}

int Binomial::Add(Binomial inputBinomial) {
  if(power1 == inputBinomial.GetPower(1) && power2 == inputBinomial.GetPower(2)) {
    coefficient1 += inputBinomial.GetCoefficient(1);
    coefficient2 += inputBinomial.GetCoefficient(2);
    return 0;
  } else {
    return -1;
  }
}