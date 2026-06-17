
void __thiscall FUN_36045fa0(void *this,char *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362113fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_36045d00(&param_1,param_1);
  uVar7 = *(undefined4 *)((int)this + 0x3c);
  uVar6 = *puVar1;
  uVar5 = *param_2;
  uVar4 = *(undefined4 *)((int)this + 8);
  uVar3 = *(undefined4 *)**(undefined4 **)((int)this + 4);
  local_4 = 0;
  pcVar2 = Translate(s_ETRS__s__s___s___ZLIB_error___s___36227a04,4);
  ThrowF_t(pcVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  local_4 = 0xffffffff;
  StringFree(param_1);
  ExceptionList = local_c;
  return;
}

