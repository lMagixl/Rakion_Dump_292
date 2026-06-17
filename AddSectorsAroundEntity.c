
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCastRay::AddSectorsAroundEntity(class CEntity *) */

void __thiscall CCastRay::AddSectorsAroundEntity(CCastRay *this,CEntity *param_1)

{
  CRelationSrc *pCVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0xdd3a0  1011  ?AddSectorsAroundEntity@CCastRay@@QAEXPAVCEntity@@@Z */
  for (piVar3 = *(int **)(param_1 + 0xac); *piVar3 != 0; piVar3 = (int *)*piVar3) {
    pCVar1 = CRelationLnk::GetSrc((CRelationLnk *)(piVar3 + -4));
    if ((*(int *)(*(int *)(*(int *)(*(int *)(pCVar1 + -100) + 0x14) + 0x668) + 4) == 4) &&
       (((byte)pCVar1[-0x58] & 0x40) == 0)) {
      DAT_362cc0cc = DAT_362cc0cc + 1;
      iVar2 = FUN_360de590((undefined4 *)&DAT_362cc0c4);
      if (iVar2 < DAT_362cc0cc) {
        iVar2 = FUN_360de590((undefined4 *)&DAT_362cc0c4);
        FUN_360de680(&DAT_362cc0c4,iVar2 + _DAT_362cc0d0);
      }
      *(CRelationSrc **)(DAT_362cc0c8 + -4 + DAT_362cc0cc * 4) = pCVar1 + -0x9c;
      *(uint *)(pCVar1 + -0x58) = *(uint *)(pCVar1 + -0x58) | 0x40;
    }
  }
  return;
}

