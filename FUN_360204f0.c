
short __cdecl FUN_360204f0(CListHead *param_1,char *param_2)

{
  int iVar1;
  CFileNameNode *this;
  short sVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ed18;
  local_c = ExceptionList;
  piVar3 = *(int **)param_1;
  sVar2 = 0;
  ExceptionList = &local_c;
  while( true ) {
    if (*piVar3 == 0) {
      this = (CFileNameNode *)FUN_361bf99c(0x10c);
      local_4 = 0;
      if (this != (CFileNameNode *)0x0) {
        CFileNameNode::CFileNameNode(this,param_2,param_1);
      }
      ExceptionList = local_c;
      return sVar2;
    }
    iVar1 = _strcmpi((char *)(piVar3 + -0x41),param_2);
    if (iVar1 == 0) break;
    piVar3 = (int *)*piVar3;
    sVar2 = sVar2 + 1;
  }
  ExceptionList = local_c;
  return sVar2;
}

