
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_360c1830(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  CTextureData *this;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  long lVar9;
  uint uVar10;
  
  iVar6 = FUN_36061f20(0x362c54d8);
  iVar5 = DAT_362bef7c;
  if (0 < iVar6) {
    if ((*(uint *)(DAT_362bef7c + 0x88) & *(uint *)(DAT_362bef7c + 0x8c)) == 0xffffffff) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (1 < _iStatsMode) {
        puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
        uVar1 = *puVar7;
        uVar2 = puVar7[1];
        uVar10 = uVar1 - *(uint *)(iVar5 + 0x88);
        uVar3 = *(uint *)(iVar5 + 0x90);
        *(uint *)(iVar5 + 0x90) = uVar3 + uVar10;
        *(uint *)(iVar5 + 0x94) =
             *(int *)(iVar5 + 0x94) +
             ((uVar2 - *(int *)(iVar5 + 0x8c)) - (uint)(uVar1 < *(uint *)(iVar5 + 0x88))) +
             (uint)CARRY4(uVar3,uVar10);
        *(undefined4 *)(iVar5 + 0x88) = 0xffffffff;
        *(undefined4 *)(iVar5 + 0x8c) = 0xffffffff;
      }
    }
    iVar5 = DAT_362bef7c;
    if (1 < _iStatsMode) {
      puVar8 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar5 + 0xb0) = *puVar8;
      *(undefined4 *)(iVar5 + 0xb4) = puVar8[1];
    }
    DAT_362cba70 = 0;
    (*DAT_362c4674)(0);
    (*DAT_362c4654)(0x3f);
    (*DAT_362c4680)(0x51,0x51);
    this = DAT_362ca55c;
    lVar9 = CAnimObject::GetFrame((CAnimObject *)&_toSimpleModelShadow);
    if ((this == (CTextureData *)0x0) || (DAT_362cba70 != 0)) {
      (*DAT_362c4634)();
    }
    else {
      CTextureData::SetAsCurrent(this,lVar9,0);
    }
    (*DAT_362c45f8)();
    (*DAT_362c464c)(0x2b);
    (*DAT_362c461c)();
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x16,0x18);
    (*DAT_362c4628)();
    (*DAT_362c4614)();
    (*DAT_362c46c0)();
    *(int *)(_pGfx + 0xb38) =
         *(int *)(_pGfx + 0xb38) + ((int)(iVar6 * 6 + (iVar6 * 6 >> 0x1f & 3U)) >> 2);
    FUN_36083610();
    iVar5 = DAT_362bef7c;
    DAT_362c54e0 = 0;
    DAT_362c5500 = 0;
    DAT_362c5510 = 0;
    _DAT_362c5520 = 0;
    _DAT_362c5530 = 0;
    _DAT_362c5540 = 0;
    DAT_362c5560 = 0;
    if (1 < _iStatsMode) {
      puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      uVar10 = uVar1 - *(uint *)(iVar5 + 0xb0);
      uVar3 = *(uint *)(iVar5 + 0xb8);
      *(uint *)(iVar5 + 0xb8) = uVar3 + uVar10;
      *(uint *)(iVar5 + 0xbc) =
           *(int *)(iVar5 + 0xbc) +
           ((uVar2 - *(int *)(iVar5 + 0xb4)) - (uint)(uVar1 < *(uint *)(iVar5 + 0xb0))) +
           (uint)CARRY4(uVar3,uVar10);
      *(undefined4 *)(iVar5 + 0xb0) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0xb4) = 0xffffffff;
    }
    iVar5 = DAT_362bef7c;
    if ((bVar4) && (1 < _iStatsMode)) {
      puVar8 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar5 + 0x88) = *puVar8;
      *(undefined4 *)(iVar5 + 0x8c) = puVar8[1];
    }
  }
  return;
}

