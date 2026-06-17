
/* public: class CTString __thiscall CEditModel::GetCollisionBoxName(void) */

undefined4 * __thiscall CEditModel::GetCollisionBoxName(CEditModel *this)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *in_stack_00000004;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0xa92e0  1783  ?GetCollisionBoxName@CEditModel@@QAE?AVCTString@@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362135a2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  local_4 = 1;
  iVar2 = FUN_360b0e00(this + 0x12a8,*(int *)(this + 0x14));
  pcVar3 = StringDuplicate(*(char **)(iVar2 + 0x1c));
  StringFree(pcVar1);
  pcVar1 = StringDuplicate(pcVar3);
  *in_stack_00000004 = pcVar1;
  local_4 = local_4 & 0xffffff00;
  StringFree(pcVar3);
  ExceptionList = local_c;
  return in_stack_00000004;
}

