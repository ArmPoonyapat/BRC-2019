int r; //ค่าrandom มุมเลี้ยว
/*
 เซนเซอร์ จับเส้น ซ้าย2 ขวา 3
 IR 456 เรียงจากซ้ายไปขวา
*/
#include <popx2.h>
void setup()
{
  OK();
}
void loop()
{
  int re = digitalRead(24);
    if (re==1)
    {
  if (analog(2) > 250 || analog(3) > 250)
   
  {
    if (analog(2) > analog(3))
    {
      B(700);
      r = random(250, 520);
      L(r);
    }
    else
    {
      B(700);
      r = random(250, 520);
      R(r);
    }
  }
  else if (analog(5) > 180 && (analog(2) < 250 && analog(3) < 250))
  {
    unsigned long s = 800;
    unsigned long time = millis();
    time = time + s;
    while ((analog(2) < 250 && analog(3) < 250) && analog(5) > 100 && time > millis())
    {
      motor(12, 100);
    }
  }

  else
  {
    if ((analog(2) < 250 && analog(3) < 250))
    {
      motor(12, 70);
    }
    else if (analog(4) > 170)
    {
      L(300);

    }
    else if (analog(6) > 120)
    {
      R(300);
    }
  }}
  else 
  {
    ao();
  }
  
   
