
void FUN_3606df10(void)

{
  undefined4 *in_EAX;
  
  for (; in_EAX != (undefined4 *)0x0; in_EAX = (undefined4 *)*in_EAX) {
    if ((int *)in_EAX[0x31] != (int *)0x0) {
      (**(code **)(*(int *)in_EAX[0x31] + 4))();
    }
  }
  return;
}

