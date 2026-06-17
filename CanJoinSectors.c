
/* public: int __thiscall CWorld::CanJoinSectors(class CSelection<class CBrushSector,1> &) */

int __thiscall CWorld::CanJoinSectors(CWorld *this,CSelection<class_CBrushSector,1> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0xd3c70  1146
                       ?CanJoinSectors@CWorld@@QAEHAAV?$CSelection@VCBrushSector@@$00@@@Z */
  iVar1 = FUN_360cb790((int)param_1);
  if (iVar1 < 2) {
    return 0;
  }
  iVar1 = FUN_360cb0d0(param_1,0);
  iVar1 = *(int *)(iVar1 + 0x38);
  iVar4 = 0;
  iVar2 = FUN_360cb790((int)param_1);
  if (0 < iVar2) {
    do {
      iVar3 = FUN_360cb0d0(param_1,iVar4);
      if (*(int *)(iVar3 + 0x38) != iVar1) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 1;
}

