
/* public: void __thiscall CObjectPolygon::RemoveDummyEdgeReferences(void) */

void __thiscall CObjectPolygon::RemoveDummyEdgeReferences(CObjectPolygon *this)

{
  CObjectPolygon *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
                    /* 0x51900  3128  ?RemoveDummyEdgeReferences@CObjectPolygon@@QAEXXZ */
  this_00 = this + 0x4c;
  iVar1 = FUN_3604aa50((int)this_00);
  iVar6 = 0;
  iVar2 = FUN_3604aa50((int)this_00);
  if (0 < iVar2) {
    do {
      piVar3 = (int *)FUN_3604a700(this_00,iVar6);
      piVar4 = (int *)FUN_3604a700(this_00,iVar6);
      if (*(int *)(*piVar4 + 0x10) == *(int *)(*piVar3 + 0x14)) {
        puVar5 = (undefined4 *)FUN_3604a700(this_00,iVar6);
        *puVar5 = 0;
        iVar1 = iVar1 + -1;
      }
      iVar6 = iVar6 + 1;
      iVar2 = FUN_3604aa50((int)this_00);
    } while (iVar6 < iVar2);
  }
  RemoveMarkedEdges(this,iVar1);
  return;
}

