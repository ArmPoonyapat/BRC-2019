void B(unsigned long t)
{
  unsigned long time = millis();
  time = time + t;
  while (time > millis() )
  {
    motor(12, -40);
  }
}
