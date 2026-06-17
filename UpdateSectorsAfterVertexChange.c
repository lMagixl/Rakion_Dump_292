
/* public: void __thiscall CWorld::UpdateSectorsAfterVertexChange(class CSelection<class
   CBrushVertex,2> &) */

void __thiscall
CWorld::UpdateSectorsAfterVertexChange(CWorld *this,CSelection<class_CBrushVertex,2> *param_1)

{
  int iVar1;
  CBrushSector *this_00;
  int iVar2;
  int local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xc9da0  3924
                       ?UpdateSectorsAfterVertexChange@CWorld@@QAEXAAV?$CSelection@VCBrushVertex@@$01@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362145d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_360cc7f0(local_1c);
  iVar2 = 0;
  local_4 = 1;
  iVar1 = FUN_360cb7c0((int)param_1);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb210(param_1,iVar2);
      iVar1 = FUN_360cbfa0(local_1c,*(int *)(iVar1 + 0x40));
      if (iVar1 == 0) {
        iVar1 = FUN_360cb210(param_1,iVar2);
        FUN_360cc810(local_1c,*(undefined4 *)(iVar1 + 0x40));
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360cb7c0((int)param_1);
    } while (iVar2 < iVar1);
  }
  iVar2 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar1 = FUN_360cb790((int)local_1c);
  if (0 < iVar1) {
    do {
      this_00 = (CBrushSector *)FUN_360cb0d0(local_1c,iVar2);
      CBrushSector::UpdateVertexChanges(this_00);
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360cb790((int)local_1c);
    } while (iVar2 < iVar1);
  }
  FUN_360cce00(local_1c);
  ExceptionList = local_c;
  return;
}

