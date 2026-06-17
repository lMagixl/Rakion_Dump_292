
void __fastcall FUN_360519e0(void *param_1)

{
  void *this;
  int iVar1;
  CObjectPolygon *this_00;
  int iVar2;
  CDynamicArray<class_CObjectEdge> *pCVar3;
  int local_24;
  void *local_20;
  int local_1c;
  void *local_18;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_36211b3e;
  local_c = ExceptionList;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_1c = 0;
  local_18 = (void *)0x0;
  local_4 = 1;
  uStack_3 = 0;
  ExceptionList = &local_c;
  local_24 = FUN_360543c0((int)param_1 + 0x3c);
  FUN_36050dd0(param_1,&local_14,&local_1c,&local_24);
  this = (void *)((int)param_1 + 0x50);
  iVar2 = 0;
  local_24 = 0;
  _local_4 = CONCAT31(uStack_3,2);
  local_20 = this;
  iVar1 = FUN_3604a760((int)this);
  if (0 < iVar1) {
    do {
      pCVar3 = (CDynamicArray<class_CObjectEdge> *)((int)param_1 + 0x3c);
      this_00 = (CObjectPolygon *)FUN_3604a750(this,iVar2);
      CObjectPolygon::JoinContinuingEdges(this_00,pCVar3);
      iVar2 = iVar2 + 1;
      local_24 = iVar2;
      iVar1 = FUN_3604a760((int)this);
    } while (iVar2 < iVar1);
  }
  if (local_1c != 0) {
    operator_delete__(local_18);
  }
  if (local_14 != 0) {
    operator_delete__(local_10);
  }
  ExceptionList = local_c;
  return;
}

