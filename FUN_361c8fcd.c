
int __thiscall FUN_361c8fcd(void *this,int *param_1,LOGFONTA *param_2)

{
  int iVar1;
  HFONT pHVar2;
  int *piVar3;
  
  if ((param_1 == (int *)0x0) || (param_2 == (LOGFONTA *)0x0)) {
    iVar1 = -0x7789f794;
  }
  else {
    iVar1 = FUN_361dbb0a(param_1,(undefined4 *)((int)this + 0x48));
    if (-1 < iVar1) {
      pHVar2 = CreateFontIndirectA(param_2);
      *(HFONT *)((int)this + 8) = pHVar2;
      if (pHVar2 == (HFONT)0x0) {
        iVar1 = -0x7ff8fff2;
      }
      else {
        *(int **)((int)this + 0x4c) = param_1;
        (**(code **)(*param_1 + 4))(param_1);
        piVar3 = (int *)((int)this + 0xc);
        for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar3 = *param_1;
          param_1 = param_1 + 1;
          piVar3 = piVar3 + 1;
        }
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

