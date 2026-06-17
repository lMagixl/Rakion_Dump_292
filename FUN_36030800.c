
undefined4 * __thiscall
FUN_36030800(void *this,undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *this_00;
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f916;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_362255c0;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)((int)this + 8) = pcVar2;
  local_4 = 0;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)((int)this + 0xc) = pcVar2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  this_00 = (int *)((int)this + 0x18);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  pcVar2 = StringDuplicate((char *)*param_1);
  StringFree(*(char **)((int)this + 8));
  *(char **)((int)this + 8) = pcVar2;
  pcVar2 = StringDuplicate((char *)*param_2);
  StringFree(*(char **)((int)this + 0xc));
  *(char **)((int)this + 0xc) = pcVar2;
  FUN_36030d50((undefined4 *)((int)this + 0x10),param_3);
  FUN_36030dd0(this_00,param_4);
  *(undefined4 *)((int)this + 0x30) = 0;
  iVar4 = 0;
  if (0 < *this_00) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)((int)this + 0x1c);
      *(undefined4 *)(iVar3 + 0x10 + iVar1) = 0;
      *(undefined4 *)(iVar3 + 0x14 + iVar1) = 0;
      iVar1 = *(int *)((int)this + 0x1c);
      *(undefined4 *)(iVar3 + 8 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0xc + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x1c + *(int *)((int)this + 0x1c)) = 0;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x20;
    } while (iVar4 < *this_00);
  }
  ExceptionList = local_c;
  return this;
}

