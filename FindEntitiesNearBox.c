
/* public: void __thiscall CWorld::FindEntitiesNearBox(class AABBox<float,3> const &,class
   CStaticStackArray<class CEntity *> &) */

void __thiscall
CWorld::FindEntitiesNearBox
          (CWorld *this,AABBox<float,3> *param_1,CStaticStackArray<class_CEntity*> *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_10;
  int local_c;
  uint local_8;
  CWorld *local_4;
  
                    /* 0xd2c00  1633
                       ?FindEntitiesNearBox@CWorld@@QAEXABV?$AABBox@M$02@@AAV?$CStaticStackArray@PAVCEntity@@@@@Z
                        */
  local_4 = this;
  FUN_360d2570(&local_10);
  *(undefined4 *)(param_2 + 8) = 0;
  if ((int)param_1 <= local_c) {
    do {
      uVar5 = local_8;
      if ((int)local_8 <= local_10) {
        do {
          iVar1 = FUN_360d2850(*(void **)(this + 0x94),(uint)param_1,uVar5,0);
          if (-1 < iVar1) {
            iVar4 = *(int *)(this + 0x94);
            for (iVar1 = *(int *)(*(int *)(iVar4 + 0xc) + 8 + iVar1 * 0xc); -1 < iVar1;
                iVar1 = *(int *)(*(int *)(iVar4 + 0x28) + 4 + iVar1 * 8)) {
              iVar4 = *(int *)(*(int *)(iVar4 + 0x28) + iVar1 * 8);
              if (-1 < *(char *)(iVar4 + 0x10)) {
                iVar3 = *(int *)(param_2 + 8);
                *(int *)(param_2 + 8) = iVar3 + 1;
                iVar2 = FUN_360cb7f0((undefined4 *)param_2);
                if (iVar2 < iVar3 + 1) {
                  iVar3 = FUN_360cb7f0((undefined4 *)param_2);
                  FUN_360cc310(param_2,iVar3 + *(int *)(param_2 + 0xc));
                }
                *(int *)(*(int *)(param_2 + 4) + -4 + *(int *)(param_2 + 8) * 4) = iVar4;
                *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 0x80;
                this = local_4;
              }
              iVar4 = *(int *)(this + 0x94);
            }
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 <= local_10);
      }
      param_1 = param_1 + 1;
    } while ((int)param_1 <= local_c);
  }
  iVar4 = 0;
  iVar1 = FUN_360caf20((int)param_2);
  if (0 < iVar1) {
    do {
      iVar1 = *(int *)(*(int *)(param_2 + 4) + iVar4 * 4);
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffffff7f;
      iVar4 = iVar4 + 1;
      iVar1 = FUN_360caf20((int)param_2);
    } while (iVar4 < iVar1);
  }
  return;
}

