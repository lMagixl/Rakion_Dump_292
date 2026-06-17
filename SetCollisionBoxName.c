
/* public: void __thiscall CEditModel::SetCollisionBoxName(class CTString) */

void __thiscall CEditModel::SetCollisionBoxName(CEditModel *this,char *param_2)

{
  int iVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa9380  3416  ?SetCollisionBoxName@CEditModel@@QAEXVCTString@@@Z */
  puStack_8 = &LAB_362135b4;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360b0e00(this + 0x12a8,*(int *)(this + 0x14));
  pcVar2 = StringDuplicate(param_2);
  StringFree(*(char **)(iVar1 + 0x1c));
  *(char **)(iVar1 + 0x1c) = pcVar2;
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return;
}

