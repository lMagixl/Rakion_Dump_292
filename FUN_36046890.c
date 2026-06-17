
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36046890(void *this,uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2;
  _DAT_362bf32c = 1;
  for (; (int)param_1 < iVar1; param_1 = param_1 + DAT_362bf438) {
    FUN_36046610(&DAT_362bf438,(DWORD)this,~(DAT_362bf438 - 1U) & param_1,1);
  }
  _DAT_362bf32c = 0;
  return;
}

