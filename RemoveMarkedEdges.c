
/* public: void __thiscall CObjectPolygon::RemoveMarkedEdges(long) */

void __thiscall CObjectPolygon::RemoveMarkedEdges(CObjectPolygon *this,long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  CObjectPolygon *this_00;
  int iVar6;
  CListHead local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x51830  3136  ?RemoveMarkedEdges@CObjectPolygon@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211b0a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_3604a6e0(local_20);
  iVar6 = 0;
  local_4 = 0;
  if (0 < param_1) {
    FUN_3604b1a0(local_20,param_1);
  }
  this_00 = this + 0x4c;
  iVar5 = 0;
  iVar1 = FUN_3604aa50((int)this_00);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_3604a700(this_00,iVar6);
      if (*piVar2 != 0) {
        puVar3 = (undefined4 *)FUN_3604a700(this_00,iVar6);
        puVar4 = (undefined4 *)FUN_3604a700(local_20,iVar5);
        *puVar4 = *puVar3;
        puVar4[1] = puVar3[1];
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar1 = FUN_3604aa50((int)this_00);
    } while (iVar6 < iVar1);
  }
  FUN_3604b1f0((undefined4 *)this_00);
  FUN_36055020(this_00,local_20);
  local_4 = 0xffffffff;
  FUN_3604b5b0((undefined4 *)local_20);
  ExceptionList = pvStack_c;
  return;
}

