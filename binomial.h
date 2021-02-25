#ifndef Binomial_h
#define Binomial_h

class Binomial {
public:
  Binomial();
  Binomial(float co1);
  Binomial(float co1, int pow1);
  Binomial(float co1, int pow1, float co2);
  Binomial(float co1, int pow1, float co2, int pow2);

  float GetCoefficient(int i);
  int GetPower(int i);
  int SetPower(int index, int number);
  int Add(Binomial inputBinomial);
  void Multiply(float val);
  void Multiply(float monoCoefficient, int monoPower);

private:
  float coefficient1;
  float coefficient2;
  int power1;
  int power2;

};

#endif