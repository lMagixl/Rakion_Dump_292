
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36147150(void *this,byte *param_1,byte *param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  byte *pbVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  float local_c;
  float local_8;
  float local_4;
  
  pbVar4 = param_1;
  DAT_362fdb14 = *(int *)(param_1 + 0x24) >> ((byte)*(undefined4 *)((int)this + 0x1c) & 0x1f);
  DAT_362fdb10 = *(int *)(param_1 + 0x28) >> ((byte)*(undefined4 *)((int)this + 0x1c) & 0x1f);
  if ((*(int *)((int)this + 0x28) < DAT_362fdb14) && (param_2 == (byte *)0x0)) {
    DAT_362fdb14 = *(int *)((int)this + 0x28);
  }
  if (*(int *)((int)this + 0x2c) < DAT_362fdb10) {
    DAT_362fdb10 = *(int *)((int)this + 0x2c);
  }
  _DAT_362fdb0c = (*(int *)((int)this + 0x20) - DAT_362fdb14) * 4;
  DAT_362fdadc = *(undefined4 *)((int)this + 0x30);
  bVar6 = (byte)*(undefined4 *)((int)this + 0x1c);
  if ((((*(int *)(param_1 + 0x24) >> (bVar6 & 0x1f) != 0) &&
       (*(int *)(param_1 + 0x28) >> (bVar6 & 0x1f) != 0)) && (0 < DAT_362fdb14)) &&
     (0 < DAT_362fdb10)) {
    iVar2 = *(int *)(param_1 + 0x18);
    *(int *)((int)this + 0x5c) = iVar2;
    uVar7 = 0xffffff00;
    param_1 = (byte *)0x3f800000;
    if ((*(uint *)(*(int *)((int)this + 4) + 200) & 0x100000) == 0) {
      AnglesToDirectionVector
                ((Vector<float,3> *)(*(int *)(iVar2 + 0xc) + 0x48),(Vector<float,3> *)&local_c);
      iVar2 = **(int **)((int)this + 4);
      fVar3 = local_c * *(float *)(iVar2 + 4) +
              local_4 * *(float *)(iVar2 + 0xc) + local_8 * *(float *)(iVar2 + 8);
      if (fVar3 <= _DAT_3622376c) {
        uVar1 = (uint)ROUND(-fVar3 * 255.0);
        uVar7 = ((uVar1 << 8 | uVar1) << 8 | uVar1) << 8;
      }
      else {
        uVar7 = 0;
        param_1 = (byte *)(_DAT_36223384 - fVar3);
      }
    }
    *(undefined4 *)((int)this + 100) = 0;
    if ((*(uint *)(*(int *)((int)this + 4) + 200) & 0x1000000) != 0) {
      uVar5 = CLightSource::GetLightAmbient(*(CLightSource **)((int)this + 0x5c));
      *(ulong *)((int)this + 100) = uVar5;
      if (_DAT_362280f0 < *(float *)(*(int *)((int)this + 0x5c) + 0x30)) {
        uVar1 = (uint)ROUND((((float)param_1 - _DAT_36223384) *
                             *(float *)(*(int *)((int)this + 0x5c) + 0x30) + _DAT_36223384) * 255.0)
        ;
        uVar5 = MulColors(*(ulong *)((int)this + 100),((uVar1 << 8 | uVar1) << 8 | uVar1) << 8);
        *(ulong *)((int)this + 100) = uVar5;
      }
    }
    *(undefined4 *)((int)this + 0x60) = 0;
    if (((*(uint *)(*(int *)((int)this + 4) + 200) & 0x10000) != 0) && ((*pbVar4 & 4) == 0)) {
      uVar5 = CLightSource::GetLightColor(*(CLightSource **)((int)this + 0x5c));
      *(ulong *)((int)this + 0x60) = uVar5;
      *(ulong *)(pbVar4 + 0x34) = uVar5;
      uVar7 = MulColors(*(ulong *)((int)this + 0x60),uVar7);
      *(ulong *)((int)this + 0x60) = uVar7;
    }
    if (param_2 == (byte *)0x0) {
      FUN_36146de0((int)this);
      return;
    }
    FUN_36146e70(this,param_2,param_3);
  }
  return;
}

