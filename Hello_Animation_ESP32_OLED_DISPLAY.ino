#include <U8g2lib.h>
#include <Wire.h>
#include "HelloAnimation.cpp"
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE); 

const int framesInHelloAnimation = 85;

const unsigned char* hello_animationallArray[85] = {
  hello_animation2_hello_animation,
  hello_animation3_hello_animation,
  hello_animation4_hello_animation,
  hello_animation5_hello_animation,
  hello_animation6_hello_animation,
  hello_animation7_hello_animation,
  hello_animation8_hello_animation,
  hello_animation9_hello_animation,
  hello_animation10_hello_animation,
  hello_animation11_hello_animation,
  hello_animation12_hello_animation,
  hello_animation13_hello_animation,
  hello_animation14_hello_animation,
  hello_animation15_hello_animation,
  hello_animation16_hello_animation,
  hello_animation17_hello_animation,
  hello_animation18_hello_animation,
  hello_animation19_hello_animation,
  hello_animation20_hello_animation,
  hello_animation21_hello_animation,
  hello_animation22_hello_animation,
  hello_animation23_hello_animation,
  hello_animation24_hello_animation,
  hello_animation25_hello_animation,
  hello_animation26_hello_animation,
  hello_animation27_hello_animation,
  hello_animation28_hello_animation,
  hello_animation29_hello_animation,
  hello_animation30_hello_animation,
  hello_animation31_hello_animation,
  hello_animation32_hello_animation,
  hello_animation33_hello_animation,
  hello_animation34_hello_animation,
  hello_animation35_hello_animation,
  hello_animation36_hello_animation,
  hello_animation37_hello_animation,
  hello_animation38_hello_animation,
  hello_animation39_hello_animation,
  hello_animation40_hello_animation,
  hello_animation41_hello_animation,
  hello_animation42_hello_animation,
  hello_animation43_hello_animation,
  hello_animation44_hello_animation,
  hello_animation45_hello_animation,
  hello_animation46_hello_animation,
  hello_animation47_hello_animation,
  hello_animation48_hello_animation,
  hello_animation49_hello_animation,
  hello_animation50_hello_animation,
  hello_animation51_hello_animation,
  hello_animation52_hello_animation,
  hello_animation53_hello_animation,
  hello_animation54_hello_animation,
  hello_animation55_hello_animation,
  hello_animation56_hello_animation,
  hello_animation57_hello_animation,
  hello_animation58_hello_animation,
  hello_animation59_hello_animation,
  hello_animation60_hello_animation,
  hello_animation61_hello_animation,
  hello_animation62_hello_animation,
  hello_animation63_hello_animation,
  hello_animation64_hello_animation,
  hello_animation65_hello_animation,
  hello_animation66_hello_animation,
  hello_animation67_hello_animation,
  hello_animation68_hello_animation,
  hello_animation69_hello_animation,
  hello_animation70_hello_animation,
  hello_animation71_hello_animation,
  hello_animation72_hello_animation,
  hello_animation73_hello_animation,
  hello_animation74_hello_animation,
  hello_animation75_hello_animation,
  hello_animation76_hello_animation,
  hello_animation77_hello_animation,
  hello_animation78_hello_animation,
  hello_animation79_hello_animation,
  hello_animation80_hello_animation,
  hello_animation81_hello_animation,
  hello_animation82_hello_animation,
  hello_animation83_hello_animation,
  hello_animation84_hello_animation,
  hello_animation85_hello_animation,
  hello_animation86_hello_animation
};

int frame = 0;

unsigned long lastFrame = 0;
int frameRate = 13;

void setup() {
  u8g2.begin(); 
  u8g2.setBusClock(400000);
}

void loop() {
  if (millis() - lastFrame >= (1000 / frameRate)) {
    u8g2.clearBuffer();
    
    lastFrame = millis();
    u8g2.drawXBMP(0, 0, 128, 64, hello_animationallArray[frame]); 
    frame = (frame + 1) % framesInHelloAnimation;
    u8g2.sendBuffer();
  }
}