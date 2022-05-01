#ifndef FastPWMdac_H
#define FastPWMdac_H

class FastPWMdac
{ 
public:
  void init(byte _timer1PWMpin, byte resolution);
  void analogWrite8bit(byte value8bit);
  void analogWrite10bit(int value10bit);

private:
  byte timer1PWMpin; 
};

#endif
