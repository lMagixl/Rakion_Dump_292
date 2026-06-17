
void __fastcall FUN_360ffb90(int *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_36217529;
  local_c = ExceptionList;
  local_4 = 0;
  iVar1 = param_1[0xc];
  ExceptionList = &local_c;
  param_1[0xc] = 1;
  local_20 = FUN_360ff560((int)param_1);
  if (0 < local_20) {
    do {
      iVar2 = FUN_360ff560((int)param_1);
      pvVar3 = (void *)FUN_360ff550(param_1,iVar2 + -1);
      if (pvVar3 != (void *)0x0) {
        local_4._0_1_ = 3;
        FUN_360fe860((int)pvVar3);
        local_4 = CONCAT31(local_4._1_3_,2);
        iVar2 = CListNode::IsLinked((CListNode *)((int)pvVar3 + 0x414));
        if (iVar2 != 0) {
          CListNode::Remove((CListNode *)((int)pvVar3 + 0x414));
        }
        FUN_360fe8c0(pvVar3);
      }
      FUN_360ff7e0(param_1,(int)pvVar3);
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  param_1[0xc] = iVar1;
  local_4 = local_4 & 0xffffff00;
  if (param_1[4] != 0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  local_4 = 0xffffffff;
  FUN_360ffaf0(param_1);
  ExceptionList = local_c;
  return;
}

