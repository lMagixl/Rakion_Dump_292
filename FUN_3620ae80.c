
int * __thiscall FUN_3620ae80(void *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  
  piVar1 = malloc(0x14);
  *piVar1 = param_1;
  if (param_1 == 0) {
    piVar1[1] = 0;
    pvVar2 = malloc(*(int *)this << 2);
    piVar1[2] = (int)pvVar2;
    pvVar2 = malloc(*(int *)this << 2);
    piVar1[3] = (int)pvVar2;
    pvVar2 = malloc(0x20);
    piVar1[4] = (int)pvVar2;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    return piVar1;
  }
  if (param_1 != 1) {
    return (int *)0x0;
  }
  piVar1[1] = -1;
  piVar1[3] = 0;
  piVar1[4] = 0;
  return piVar1;
}

