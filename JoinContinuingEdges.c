
/* public: void __thiscall CObjectPolygon::JoinContinuingEdges(class CDynamicArray<class
   CObjectEdge> &) */

void __thiscall
CObjectPolygon::JoinContinuingEdges(CObjectPolygon *this,CDynamicArray<class_CObjectEdge> *param_1)

{
  CObjectPolygon *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_34;
  int local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x51410  2520
                       ?JoinContinuingEdges@CObjectPolygon@@QAEXAAV?$CDynamicArray@VCObjectEdge@@@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211ace;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_3604a6e0((CListHead *)&local_24);
  this_00 = this + 0x4c;
  local_2c = 0;
  local_4 = 1;
  iVar3 = FUN_3604aa50((int)this_00);
  if (0 < iVar3) {
    do {
      piVar4 = (int *)FUN_3604a700(this_00,local_2c);
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_3604a700(this_00,local_2c);
        iVar6 = *piVar4;
        if (piVar4[1] == 0) {
          local_34 = *(int *)(iVar6 + 0x14);
          iVar9 = *(int *)(iVar6 + 0x10);
        }
        else {
          iVar9 = *(int *)(iVar6 + 0x14);
          local_34 = *(int *)(iVar6 + 0x10);
        }
        puVar5 = (undefined4 *)FUN_3604a700(this_00,local_2c);
        *puVar5 = 0;
        do {
          bVar1 = false;
          iVar10 = 0;
          iVar6 = FUN_3604aa50((int)this_00);
          if (iVar6 < 1) break;
          do {
            piVar4 = (int *)FUN_3604a700(this_00,iVar10);
            if ((*piVar4 != 0) &&
               (iVar6 = FUN_36054c90(*(int *)(iVar3 + 8),*(int *)(*piVar4 + 8)), iVar6 == 0)) {
              piVar4 = (int *)FUN_3604a700(this_00,iVar10);
              iVar6 = *piVar4;
              if (piVar4[1] == 0) {
                iVar7 = *(int *)(iVar6 + 0x10);
                iVar6 = *(int *)(iVar6 + 0x14);
              }
              else {
                iVar7 = *(int *)(iVar6 + 0x14);
                iVar6 = *(int *)(iVar6 + 0x10);
              }
              iVar8 = iVar9;
              iVar2 = iVar6;
              if ((iVar7 == local_34) || (iVar8 = iVar7, iVar2 = local_34, iVar9 == iVar6)) {
                local_34 = iVar2;
                puVar5 = (undefined4 *)FUN_3604a700(this_00,iVar10);
                *puVar5 = 0;
                bVar1 = true;
                iVar9 = iVar8;
              }
            }
            iVar10 = iVar10 + 1;
            iVar6 = FUN_3604aa50((int)this_00);
          } while (iVar10 < iVar6);
        } while (bVar1);
        puVar5 = (undefined4 *)FUN_3604c300(param_1,1);
        *puVar5 = local_24;
        puVar5[1] = local_20;
        puVar5[2] = local_1c;
        puVar5[3] = local_18;
        puVar5[4] = iVar9;
        puVar5[5] = local_34;
        piVar4 = (int *)FUN_3604b1a0(&local_24,1);
        *piVar4 = (int)puVar5;
        piVar4[1] = 0;
      }
      local_2c = local_2c + 1;
      iVar3 = FUN_3604aa50((int)this_00);
    } while (local_2c < iVar3);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_3604b1f0((undefined4 *)this_00);
  FUN_36055020(this_00,(CListHead *)&local_24);
  local_4 = 0xffffffff;
  FUN_3604b5b0(&local_24);
  ExceptionList = pvStack_c;
  return;
}

