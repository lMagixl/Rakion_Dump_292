
void __thiscall FUN_360bb960(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if (*param_1 <= *(int *)this) {
    iVar1 = *(int *)this;
  }
  *(int *)this = iVar1;
  iVar1 = param_1[2];
  if (*(int *)((int)this + 8) <= param_1[2]) {
    iVar1 = *(int *)((int)this + 8);
  }
  *(int *)((int)this + 8) = iVar1;
  iVar1 = param_1[1];
  if (param_1[1] <= *(int *)((int)this + 4)) {
    iVar1 = *(int *)((int)this + 4);
  }
  *(int *)((int)this + 4) = iVar1;
  iVar1 = param_1[3];
  if (*(int *)((int)this + 0xc) <= param_1[3]) {
    iVar1 = *(int *)((int)this + 0xc);
  }
  *(int *)((int)this + 0xc) = iVar1;
  iVar1 = 1;
  piVar2 = (int *)((int)this + 8);
  do {
    if (*piVar2 < piVar2[-2]) {
      *(undefined4 *)this = 0x7fffffff;
      *(undefined4 *)((int)this + 8) = 0x80000000;
      *(undefined4 *)((int)this + 4) = 0x7fffffff;
      *(undefined4 *)((int)this + 0xc) = 0x80000000;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 3);
  return;
}

