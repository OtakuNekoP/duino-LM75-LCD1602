#ifndef LM75_h
#define LM75_h

#define LM75_ADDRESS 0x48

#define LM75_TEMP_REGISTER 0
#define LM75_CONF_REGISTER 1
#define LM75_THYST_REGISTER 2
#define LM75_TOS_REGISTER 3

class LM75 {
  public:
    LM75 (unsigned char addr);
    float temp ();
  private:
unsigned char address;
};

#endif
