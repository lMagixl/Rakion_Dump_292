
void __thiscall FUN_360d1100(void *this,int param_1)

{
  int iVar1;
  ushort *local_3c;
  Vector<float,3> *local_38;
  long local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_2c = *(undefined4 *)(param_1 + 0x58);
  local_30 = *(float *)(param_1 + 0x54);
  local_28 = *(undefined4 *)(param_1 + 0x5c);
  local_24 = *(undefined4 *)(param_1 + 0x3c);
  local_20 = *(undefined4 *)(param_1 + 0x60);
  local_1c = *(undefined4 *)(param_1 + 100);
  local_18 = *(undefined4 *)(param_1 + 0x68);
  local_14 = *(undefined4 *)(param_1 + 0x40);
  local_10 = *(undefined4 *)(param_1 + 0x6c);
  local_c = *(undefined4 *)(param_1 + 0x70);
  local_8 = *(undefined4 *)(param_1 + 0x74);
  local_4 = *(undefined4 *)(param_1 + 0x44);
  TR_ExtractPolygonsInBox
            (*(CTerrain **)(param_1 + 0x7c),(AABBox<float,3> *)((int)this + 0xf4),&local_30,
             &local_38,&local_34,&local_3c,&param_1);
  iVar1 = 0;
  if (0 < param_1) {
    do {
      FUN_360d0b30(this,(float *)(local_38 + (uint)local_3c[iVar1] * 0xc),
                   (float *)(local_38 + (uint)local_3c[iVar1 + 1] * 0xc),
                   (float *)(local_38 + (uint)local_3c[iVar1 + 2] * 0xc));
      iVar1 = iVar1 + 3;
    } while (iVar1 < param_1);
  }
  return;
}

