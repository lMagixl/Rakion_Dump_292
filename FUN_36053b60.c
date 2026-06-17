
void __fastcall FUN_36053b60(int param_1)

{
  void *this;
  int iVar1;
  CObjectPolygon *this_00;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36211b7b;
  local_c = ExceptionList;
  this = (void *)(param_1 + 0x50);
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_3604a760((int)this);
  if (0 < iVar1) {
    do {
      this_00 = (CObjectPolygon *)FUN_3604a750(this,iVar2);
      CObjectPolygon::RemoveRedundantEdges(this_00);
      iVar2 = iVar2 + 1;
      iVar1 = FUN_3604a760((int)this);
    } while (iVar2 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

