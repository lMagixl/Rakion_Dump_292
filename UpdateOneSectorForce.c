
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMovableEntity::UpdateOneSectorForce(class CBrushSector &,float) */

void __thiscall
CMovableEntity::UpdateOneSectorForce(CMovableEntity *this,CBrushSector *param_1,float param_2)

{
  CEntity *pCVar1;
  CBrushSector CVar2;
  int iVar3;
  CEntity *this_00;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
                    /* 0x1ae710  3917
                       ?UpdateOneSectorForce@CMovableEntity@@QAEXAAVCBrushSector@@M@Z */
  if (_DAT_362280f0 <= param_2) {
    CVar2 = param_1[0x46];
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x38) + 0x14) + 0x668);
    iVar7 = 0;
    iVar4 = FUN_361b3e50(0x363826d4);
    piVar6 = DAT_363826d8;
    piVar5 = DAT_363826d8;
    if (0 < iVar4) {
      do {
        if ((iVar3 == *piVar5) && ((uint)(byte)CVar2 == piVar5[1])) {
          piVar5 = DAT_363826d8 + iVar7 * 3;
          if (piVar5 != (int *)0x0) goto LAB_361ae7eb;
          break;
        }
        iVar7 = iVar7 + 1;
        piVar5 = piVar5 + 3;
      } while (iVar7 < iVar4);
    }
    iVar4 = DAT_363826dc + 1;
    DAT_363826dc = iVar4;
    iVar7 = FUN_361b3eb0((undefined4 *)&DAT_363826d4);
    if (iVar7 < iVar4) {
      iVar4 = FUN_361b3eb0((undefined4 *)&DAT_363826d4);
      FUN_361b4400(&DAT_363826d4,iVar4 + ((int)(0 / (longlong)DAT_363826e0) + 1) * DAT_363826e0);
      piVar6 = DAT_363826d8;
      iVar4 = DAT_363826dc;
    }
    piVar5 = piVar6 + iVar4 * 3 + -3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
    }
    this_00 = (CEntity *)*piVar5;
    if (this_00 != (CEntity *)0x0) {
      pCVar1 = this_00 + 0x18;
      *(int *)pCVar1 = *(int *)pCVar1 + -1;
      if (*(int *)pCVar1 == 0) {
        CEntity::DeleteSelf(this_00);
      }
    }
    *piVar5 = iVar3;
    piVar5[1] = (uint)(byte)CVar2;
    piVar5[2] = 0;
LAB_361ae7eb:
    piVar5[2] = (int)(param_2 + (float)piVar5[2]);
  }
  return;
}

