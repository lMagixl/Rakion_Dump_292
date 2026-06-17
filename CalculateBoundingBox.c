
/* public: void __thiscall CBrushPolygon::CalculateBoundingBox(void) */

void __thiscall CBrushPolygon::CalculateBoundingBox(CBrushPolygon *this)

{
  CBrushPolygon *this_00;
  int iVar1;
  int iVar2;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x13a630  1122  ?CalculateBoundingBox@CBrushPolygon@@QAEXXZ */
  if (((*(byte *)(*(int *)(this + 0x1ac) + 0x4c) & 2) == 0) && (DAT_362fcc40 == 0)) {
    FUN_360325f0((undefined4 *)(this + 0x1b0));
  }
  this_00 = this + 0x194;
  *(undefined4 *)this_00 = 0x7f61b1e6;
  *(undefined4 *)(this + 0x198) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x19c) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x1a0) = 0xff61b1e6;
  *(undefined4 *)(this + 0x1a4) = 0xff61b1e6;
  *(undefined4 *)(this + 0x1a8) = 0xff61b1e6;
  iVar2 = 0;
  if (0 < *(int *)(this + 4)) {
    do {
      iVar1 = **(int **)(*(int *)(this + 8) + iVar2 * 8);
      local_30 = *(float *)(iVar1 + 4);
      local_2c = *(undefined4 *)(iVar1 + 8);
      local_28 = *(undefined4 *)(iVar1 + 0xc);
      local_24 = local_30;
      local_20 = local_2c;
      local_1c = local_28;
      FUN_360b1850(this_00,&local_30);
      iVar1 = *(int *)(*(int *)(*(int *)(this + 8) + iVar2 * 8) + 4);
      local_18 = *(float *)(iVar1 + 4);
      local_14 = *(undefined4 *)(iVar1 + 8);
      local_10 = *(undefined4 *)(iVar1 + 0xc);
      local_c = local_18;
      local_8 = local_14;
      local_4 = local_10;
      FUN_360b1850(this_00,&local_18);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 4));
  }
  return;
}

