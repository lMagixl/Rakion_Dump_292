
void __thiscall FUN_36045ee0(void *this,int param_1)

{
  void *pvVar1;
  HANDLE pvVar2;
  
  pvVar1 = AllocMemory(param_1);
  *(void **)((int)this + 8) = pvVar1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = param_1 * -100;
  *(undefined4 *)((int)this + 0x24) = 0;
  pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x20) = pvVar2;
  return;
}

