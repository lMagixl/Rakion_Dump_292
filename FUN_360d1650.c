
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_360d1650(void *param_1)

{
  CMovableEntity *pCVar1;
  int iVar2;
  int iVar3;
  
  if (-1 < *(int *)(*(int *)((int)param_1 + 4) + 0xc)) {
    if ((DAT_362cbdd4 & 1) == 0) {
      DAT_362cbdd4 = DAT_362cbdd4 | 1;
      _DAT_362cbdc4 = 0;
      DAT_362cbdc8 = 0;
      _DAT_362cbdcc = 0;
      _DAT_362cbdd0 = 0x10;
      _atexit((_func_4879 *)&LAB_36220710);
    }
    CWorld::FindEntitiesNearBox
              (*(CWorld **)((int)param_1 + 0x114),(AABBox<float,3> *)((int)param_1 + 0xf4),
               (CStaticStackArray<class_CEntity*> *)&DAT_362cbdc4);
    iVar3 = 0;
    iVar2 = FUN_360caf20(0x362cbdc4);
    if (0 < iVar2) {
      do {
        pCVar1 = *(CMovableEntity **)(DAT_362cbdc8 + iVar3 * 4);
        if ((((pCVar1 != *(CMovableEntity **)((int)param_1 + 4)) && (((byte)pCVar1[0x10] & 4) == 0))
            && ((*(uint *)((int)param_1 + 0x10) & *(uint *)(pCVar1 + 0xc)) != 0)) &&
           (((*(uint *)((int)param_1 + 0x14) & *(uint *)(pCVar1 + 0xc)) != 0 &&
            (((iVar2 = *(int *)(pCVar1 + 4), iVar2 == 3 || (iVar2 == 5)) ||
             ((iVar2 == 9 || (iVar2 == 10)))))))) {
          FUN_360d0eb0(param_1,pCVar1);
        }
        iVar3 = iVar3 + 1;
        iVar2 = FUN_360caf20(0x362cbdc4);
      } while (iVar3 < iVar2);
    }
    _DAT_362cbdcc = 0;
  }
  return;
}

