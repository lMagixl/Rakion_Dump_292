
uint * __thiscall FUN_361a3110(void *this,uint param_1)

{
  int iVar1;
  HANDLE pvVar2;
  uint uVar3;
  
  FUN_361a3190(this,param_1);
  uVar3 = 0;
  if (*(int *)this != 0) {
    do {
      iVar1 = *(int *)((int)this + 4);
      pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
      *(HANDLE *)(iVar1 + uVar3 * 4) = pvVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)this);
  }
  return this;
}

