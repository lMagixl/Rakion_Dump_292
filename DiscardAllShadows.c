
/* public: void __thiscall CWorld::DiscardAllShadows(void) */

void __thiscall CWorld::DiscardAllShadows(CWorld *this)

{
  int *this_00;
  CWorld *this_01;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_3c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xc87f0  1508  ?DiscardAllShadows@CWorld@@QAEXXZ */
  puStack_8 = &LAB_362144d4;
  local_c = ExceptionList;
  this_01 = this + 0x15c;
  local_24 = 0x7f61b1e6;
  local_18 = 0xff61b1e6;
  local_20 = 0x7f61b1e6;
  local_14 = 0xff61b1e6;
  local_1c = 0x7f61b1e6;
  local_10 = 0xff61b1e6;
  local_3c = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this_01);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cafb0(this_01,local_3c);
      if (*(int *)(iVar1 + 4) == 4) {
        iVar1 = FUN_360cafb0(this_01,local_3c);
        for (piVar3 = *(int **)(*(int *)(iVar1 + 0x7c) + 0x674); *piVar3 != 0;
            piVar3 = (int *)*piVar3) {
          FUN_360b1850(&local_24,(float *)(piVar3 + 3));
          this_00 = piVar3 + -6;
          iVar2 = 0;
          iVar1 = FUN_36043600((int)this_00);
          if (0 < iVar1) {
            do {
              iVar1 = FUN_36043710(this_00,iVar2);
              iVar4 = 0;
              local_4 = CONCAT31(local_4._1_3_,2);
              if (0 < *(int *)(iVar1 + 0x18)) {
                do {
                  CBrushPolygon::DiscardShadows
                            ((CBrushPolygon *)(iVar4 * 0x1d0 + *(int *)(iVar1 + 0x1c)));
                  iVar4 = iVar4 + 1;
                } while (iVar4 < *(int *)(iVar1 + 0x18));
              }
              iVar2 = iVar2 + 1;
              iVar1 = FUN_36043600((int)this_00);
            } while (iVar2 < iVar1);
          }
        }
      }
      local_3c = local_3c + 1;
      iVar1 = FUN_360caf20((int)this_01);
    } while (local_3c < iVar1);
  }
  local_4 = 0xffffffff;
  FindShadowLayers(this,(AABBox<float,3> *)&local_24,0,1);
  ExceptionList = local_c;
  return;
}

