void L(unsigned long t)
{
  unsigned long time = millis();
  time = time + t;
  while ((time > millis()) &&  (analog(2) < 250 && analog(3) < 250) && analog(5) < 180)
  {
    motor(2, -70);
    motor(1, 70);
  }
}
