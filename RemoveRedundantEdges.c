
/* public: void __thiscall CObjectPolygon::RemoveRedundantEdges(void) */

void __thiscall CObjectPolygon::RemoveRedundantEdges(CObjectPolygon *this)

{
  CObjectPolygon *this_00;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int local_c;
  
                    /* 0x51ac0  3141  ?RemoveRedundantEdges@CObjectPolygon@@QAEXXZ */
  this_00 = this + 0x4c;
  local_c = FUN_3604aa50((int)this_00);
  iVar7 = 0;
  iVar1 = FUN_3604aa50((int)this_00);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_3604a700(this_00,iVar7);
      if ((*piVar2 != 0) && (iVar1 = FUN_3604aa50((int)this_00), 0 < iVar1)) {
        iVar8 = 0;
        do {
          piVar2 = (int *)FUN_3604a700(this_00,iVar8);
          piVar3 = (int *)FUN_3604a700(this_00,iVar7);
          if (*piVar2 == *piVar3) {
            iVar4 = FUN_3604a700(this_00,iVar8);
            iVar5 = FUN_3604a700(this_00,iVar7);
            if (*(int *)(iVar4 + 4) != *(int *)(iVar5 + 4)) {
              puVar6 = (undefined4 *)FUN_3604a700(this_00,iVar8);
              *puVar6 = 0;
              puVar6 = (undefined4 *)FUN_3604a700(this_00,iVar7);
              *puVar6 = 0;
              local_c = local_c + -2;
              break;
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar1);
      }
      iVar7 = iVar7 + 1;
      iVar1 = FUN_3604aa50((int)this_00);
    } while (iVar7 < iVar1);
  }
  RemoveMarkedEdges(this,local_c);
  return;
}

