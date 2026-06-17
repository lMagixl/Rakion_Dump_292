
void __cdecl FUN_360c2270(int *param_1)

{
  void *this;
  
  if (param_1[0x4b4] == 0) {
    this = (void *)0x0;
    if (0 < param_1[0x15]) {
      do {
        FUN_360c1e20(this,param_1);
        this = (void *)((int)this + 1);
      } while ((int)this < param_1[0x15]);
    }
    param_1[0x4b4] = 1;
  }
  return;
}

