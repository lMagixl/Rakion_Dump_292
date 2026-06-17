
undefined4 * __thiscall FUN_36001a30(void *this,LONG *param_1)

{
  int iVar1;
  
  *(LONG **)this = param_1;
  iVar1 = InterlockedExchange(param_1,1);
  while (iVar1 != 0) {
    Sleep(1);
    iVar1 = InterlockedExchange(*(LONG **)this,1);
  }
  return this;
}

