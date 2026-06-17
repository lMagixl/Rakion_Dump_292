
DWORD * __thiscall FUN_36044a20(void *this,DWORD param_1,int param_2)

{
  HANDLE pvVar1;
  DWORD DVar2;
  int iVar3;
  
  pvVar1 = GetCurrentProcess();
  *(HANDLE *)((int)this + 0xc) = pvVar1;
  pvVar1 = GetCurrentThread();
  *(HANDLE *)((int)this + 8) = pvVar1;
  DVar2 = GetPriorityClass(*(HANDLE *)((int)this + 0xc));
  *(DWORD *)this = DVar2;
  iVar3 = GetThreadPriority(*(HANDLE *)((int)this + 8));
  *(int *)((int)this + 4) = iVar3;
  SetPriorityClass(*(HANDLE *)((int)this + 0xc),param_1);
  SetThreadPriority(*(HANDLE *)((int)this + 8),param_2);
  return this;
}

