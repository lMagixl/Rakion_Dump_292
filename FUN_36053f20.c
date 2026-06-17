
void __fastcall FUN_36053f20(int param_1)

{
  undefined4 *this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  CObjectPolygon *this_00;
  int *piVar4;
  CObjectPolygon *pCVar5;
  int iVar6;
  CObjectPolygon *pCVar7;
  CListHead local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211c2d;
  local_c = ExceptionList;
  this = (undefined4 *)(param_1 + 0x50);
  iVar6 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_3604a760((int)this);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      iVar2 = FUN_3604a750(this,iVar1);
      iVar2 = FUN_3604aa50(iVar2 + 0x4c);
      if (iVar2 < 3) {
        puVar3 = (undefined4 *)FUN_3604a750(this,iVar1);
        *puVar3 = 0;
      }
      else {
        puVar3 = (undefined4 *)FUN_3604a750(this,iVar1);
        *puVar3 = 1;
        iVar6 = iVar6 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_3604a760((int)this);
    } while (iVar1 < iVar2);
  }
  FUN_360543d0(local_20);
  local_4 = 0;
  this_00 = (CObjectPolygon *)FUN_3604d100(local_20,iVar6);
  iVar6 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = FUN_3604a760((int)this);
  if (0 < iVar1) {
    do {
      piVar4 = (int *)FUN_3604a750(this,iVar6);
      pCVar7 = this_00;
      if (*piVar4 != 0) {
        pCVar7 = this_00 + 0xd0;
        pCVar5 = (CObjectPolygon *)FUN_3604a750(this,iVar6);
        CObjectPolygon::operator=(this_00,pCVar5);
      }
      iVar6 = iVar6 + 1;
      iVar1 = FUN_3604a760((int)this);
      this_00 = pCVar7;
    } while (iVar6 < iVar1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_360560c0(this);
  FUN_360551a0(this,local_20);
  local_4 = 0xffffffff;
  thunk_FUN_360560c0((undefined4 *)local_20);
  ExceptionList = local_c;
  return;
}

