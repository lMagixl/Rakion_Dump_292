
int __thiscall FUN_36022060(void *this,float param_1)

{
  float *pfVar1;
  int iVar2;
  
  if ((this != (void *)0x0) && (DAT_362a6030 < 0)) {
    if (DAT_362a2618 < 0) {
      DAT_362a2618 = 0;
    }
    else if (0xf < DAT_362a2618) {
      DAT_362a2618 = 0xf;
    }
    iVar2 = 0;
    if (0 < DAT_362a2618) {
      pfVar1 = (float *)(*(int *)((int)this + 0x20) + -4 + *(int *)((int)this + 0x1c) * 4);
      do {
        if (*pfVar1 < param_1) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
        pfVar1 = pfVar1 + -1;
      } while (iVar2 < DAT_362a2618);
    }
    return DAT_362a2618;
  }
  return 0;
}

