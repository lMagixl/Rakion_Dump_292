
undefined4 * __thiscall FUN_36001e60(void *this,undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620d13c;
  local_c = ExceptionList;
  puVar3 = param_1;
  puVar4 = this;
  ExceptionList = &local_c;
  for (iVar2 = 0x4b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)((int)this + 300) = param_1[0x4b];
  *(undefined4 *)((int)this + 0x130) = param_1[0x4c];
  *(undefined4 *)((int)this + 0x134) = param_1[0x4d];
  pcVar1 = StringDuplicate((char *)param_1[0x4e]);
  *(char **)((int)this + 0x138) = pcVar1;
  local_4 = 0;
  pcVar1 = StringDuplicate((char *)param_1[0x4f]);
  *(char **)((int)this + 0x13c) = pcVar1;
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar1 = StringDuplicate((char *)param_1[0x50]);
  *(char **)((int)this + 0x140) = pcVar1;
  ExceptionList = local_c;
  return this;
}

