
void __thiscall FUN_36120ea0(void *this,int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621853b;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    *(int *)this = param_1;
    pvVar1 = AllocMemoryAligned((param_1 + 1) * 0x10,0x20);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      FUN_36006680(pvVar1,0x10,param_1 + 1,&LAB_36120260);
    }
    *(void **)((int)this + 4) = pvVar1;
  }
  ExceptionList = local_c;
  return;
}

