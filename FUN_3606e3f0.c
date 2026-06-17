
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_3606e3f0(void)

{
  int iVar1;
  int iVar2;
  CTextureData *this;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  bool bVar7;
  int in_EAX;
  ulong uVar8;
  int unaff_ESI;
  float local_14;
  int local_10;
  int local_c;
  float local_4;
  
  bVar7 = false;
  iVar1 = in_EAX + 0x14 + unaff_ESI * 0x24;
  if (unaff_ESI < 3) {
    this = *(CTextureData **)(*(int *)(in_EAX + 0xb8 + unaff_ESI * 4) + 0x14);
    local_10 = *(int *)(this + 0x20);
    local_c = *(int *)(this + 0x24);
    bVar6 = *(byte *)(in_EAX + 0xb4 + unaff_ESI) & 0x70;
    if (bVar6 == 0x30) {
      if ((((byte)this[0x1c] & 0x10) != 0) &&
         ((*(uint *)(in_EAX + 0xa4 + unaff_ESI * 4) & 0xffffff00) == 0xffffff00)) {
        fVar4 = *(float *)(in_EAX + 0xd4) / *(float *)(DAT_362c3a70 + 0x18c);
        fVar3 = *(float *)(in_EAX + 0xd4) / *(float *)(DAT_362c3a70 + 400);
        local_4 = ABS(fVar4 * *(float *)(iVar1 + 0xc));
        fVar5 = ABS(fVar3 * *(float *)(iVar1 + 0x10));
        local_14 = ABS(fVar4 * *(float *)(iVar1 + 0x18));
        fVar3 = ABS(fVar3 * *(float *)(iVar1 + 0x1c));
        if (local_14 < fVar3) {
          local_14 = fVar3;
        }
        if (local_4 < fVar5) {
          local_4 = fVar5;
        }
        if (local_4 < local_14) {
          local_4 = local_14;
        }
        iVar2 = ((int)local_4 >> 0x17) + -0x75 + DAT_362a4178;
        uVar8 = CTextureData::GetNoOfMips(this);
        bVar7 = (int)((uVar8 - 1) + *(int *)(this + 0x28)) <= iVar2;
        if (DAT_362c5458 != 0) {
          if (unaff_ESI == 2) {
            *(undefined4 *)(in_EAX + 0xac) = 0xff00ffff;
          }
          else {
            *(undefined4 *)(in_EAX + 0xa4 + unaff_ESI * 4) = 0xffffff;
          }
        }
        goto LAB_3606e57b;
      }
    }
    else if ((bVar6 == 0x10) && ((*(uint *)(in_EAX + 0xa4 + unaff_ESI * 4) & 0xff) < 3)) {
      bVar7 = true;
      goto LAB_3606e57b;
    }
    bVar7 = false;
  }
  else {
    local_10 = *(int *)(*(int *)(in_EAX + 0xc4) + 0x28);
    local_c = *(int *)(*(int *)(in_EAX + 0xc4) + 0x2c);
  }
LAB_3606e57b:
  if (local_10 != 0x400) {
    fVar3 = _DAT_362280ec / (float)local_10;
    *(float *)(iVar1 + 0xc) = fVar3 * *(float *)(iVar1 + 0xc);
    *(float *)(iVar1 + 0x10) = fVar3 * *(float *)(iVar1 + 0x10);
    *(float *)(iVar1 + 0x14) = fVar3 * *(float *)(iVar1 + 0x14);
  }
  if (local_c != 0x400) {
    fVar3 = _DAT_362280ec / (float)local_c;
    *(float *)(iVar1 + 0x18) = fVar3 * *(float *)(iVar1 + 0x18);
    *(float *)(iVar1 + 0x1c) = fVar3 * *(float *)(iVar1 + 0x1c);
    *(float *)(iVar1 + 0x20) = fVar3 * *(float *)(iVar1 + 0x20);
  }
  return bVar7;
}

