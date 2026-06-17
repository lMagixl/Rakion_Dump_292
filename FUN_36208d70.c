
int * __thiscall FUN_36208d70(void *this,int param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621d0dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_2;
  pvVar1 = (void *)FUN_361bf99c(0x10);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_36208d20(pvVar1,this,*(int *)this,*(int *)((int)this + 4));
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0xc) = puVar2;
  pvVar1 = (void *)FUN_361bf99c(0x10);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_36208d20(pvVar1,this,*(int *)this,*(int *)((int)this + 4));
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0x10) = puVar2;
  pvVar1 = (void *)FUN_361bf99c(0x10);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_36208d20(pvVar1,this,*(int *)this,*(int *)((int)this + 4));
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0x14) = puVar2;
  pvVar1 = (void *)FUN_361bf99c(0x10);
  local_4 = 3;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_36208d20(pvVar1,this,*(int *)this,*(int *)((int)this + 4));
  }
  *(undefined4 **)((int)this + 0x18) = puVar2;
  *(undefined4 *)((int)this + 8) = 4;
  ExceptionList = local_c;
  return this;
}

