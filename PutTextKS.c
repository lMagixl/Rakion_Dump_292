
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::PutTextKS(class CTString const &,long,long,unsigned long)const
    */

void __thiscall
CDrawPort::PutTextKS(CDrawPort *this,CTString *param_1,long param_2,long param_3,ulong param_4)

{
  byte bVar1;
  char *pcVar2;
  PredefinedBlendType PVar3;
  float fVar4;
  float fVar5;
  CTextureData *pCVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 local_144;
  float local_138;
  int iStack_134;
  int iStack_130;
  byte *pbStack_12c;
  int iStack_120;
  undefined4 uStack_114;
  float local_110;
  long lStack_10c;
  uint uStack_108;
  char local_104;
  undefined4 local_103;
  undefined4 local_4;
  
                    /* 0x6a500  2884  ?PutTextKS@CDrawPort@@QBEXABVCTString@@JJK@Z */
  local_4 = DAT_362abd90;
  local_104 = '\0';
  puVar14 = &local_103;
  for (iVar10 = 0x3f; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  pcVar2 = *(char **)param_1;
  *(undefined2 *)puVar14 = 0;
  *(undefined1 *)((int)puVar14 + 2) = 0;
  CFontData::ConvertKSC2KSSM(*(CFontData **)(this + 4),pcVar2,&local_104);
  local_110 = (float)(*(int *)(*(int *)(this + 4) + 0x20) *
                      (int)ROUND(*(float *)(this + 0x30) * _DAT_36228800) >> 0x10) *
              *(float *)(this + 0x34) * *(float *)(this + 0x30) * _DAT_362287a8;
  local_138 = (float)*(int *)(*(int *)(this + 4) + 0x1c) *
              *(float *)(this + 0x34) * *(float *)(this + 0x30) * _DAT_362287a8;
  (*DAT_362c4680)(0x51,0x51);
  pCVar6 = _ptdRakionFont;
  CTextureData::SetAsCurrent(_ptdRakionFont,0,0);
  PVar3 = *(PredefinedBlendType *)(this + 0x40);
  (*DAT_362c4624)();
  gfxSetBlendType(PVar3);
  iVar10 = FUN_36187c30((undefined4 *)param_1);
  FUN_360605c0(&uStack_114,param_4);
  uStack_108 = param_4 & 0xff;
  if ((*(uint *)(this + 0x3c) & 1) == 0) {
    local_138 = 0.0;
  }
  if ((*(uint *)(this + 0x3c) & 2) == 0) {
    local_110 = 0.0;
  }
  iVar13 = iVar10 * 8;
  DAT_362c5500 = 0;
  DAT_362c5510 = 0;
  _DAT_362c5520 = 0;
  _DAT_362c5530 = 0;
  _DAT_362c5540 = 0;
  DAT_362c5560 = 0;
  DAT_362c54e0 = iVar13;
  iVar7 = FUN_36061f60((undefined4 *)&DAT_362c54d8);
  iVar8 = 0;
  if (iVar7 < iVar13) {
    iVar8 = FUN_36061f60((undefined4 *)&DAT_362c54d8);
    FUN_360621d0(&DAT_362c54d8,iVar8 + ((iVar13 + -1) / DAT_362c54e4 + 1) * DAT_362c54e4);
    iVar8 = DAT_362c5500;
  }
  iStack_134 = DAT_362c54dc + (DAT_362c54e0 + iVar10 * -8) * 0xc;
  DAT_362c5510 = DAT_362c5510 + iVar13;
  iVar7 = FUN_36061fd0(&DAT_362c5508);
  if (iVar7 < DAT_362c5510) {
    iVar8 = FUN_36061fd0(&DAT_362c5508);
    FUN_36062460(&DAT_362c5508,iVar8 + ((iVar13 + -1) / DAT_362c5514 + 1) * DAT_362c5514);
    iVar8 = DAT_362c5500;
  }
  iStack_130 = DAT_362c550c + (DAT_362c5510 + iVar10 * -8) * 8;
  iVar8 = iVar8 + iVar13;
  DAT_362c5500 = iVar8;
  iVar7 = FUN_36061f90((undefined4 *)&DAT_362c54f8);
  if (iVar7 < iVar8) {
    iVar8 = FUN_36061f90((undefined4 *)&DAT_362c54f8);
    FUN_360622b0(&DAT_362c54f8,iVar8 + ((iVar13 + -1) / DAT_362c5504 + 1) * DAT_362c5504);
    iVar8 = DAT_362c5500;
  }
  iVar10 = DAT_362c54fc + (iVar8 + iVar10 * -8) * 4;
  pbVar12 = *(byte **)param_1;
  bVar1 = *pbVar12;
  iStack_120 = 0;
  pbStack_12c = pbVar12;
  local_144 = uStack_114;
  lStack_10c = param_2;
  while (bVar1 != 0) {
    if (bVar1 == 10) {
      param_3 = param_3 + 0xc;
      param_2 = lStack_10c;
      if (*(int *)(this + 0x14) - *(int *)(this + 0xc) < param_3) break;
    }
    else if (bVar1 != 9) {
      local_144 = CONCAT13((undefined1)uStack_108,(undefined3)local_144);
      if ((_buseMultiByte == 1) && ((char)bVar1 < '\0')) {
        iVar8 = (uint)(ushort)((ushort)*pbVar12 * 0x100 + (ushort)pbVar12[1]) * 6;
        bVar1 = (&DAT_36301a44)[iVar8];
        pbVar12 = pbVar12 + 2;
        if (bVar1 != 0) {
          uVar11 = (uint)*(ushort *)((int)&_pFontInfo + iVar8 + 2);
          fVar4 = _DAT_36223384 /
                  (float)(*(int *)(pCVar6 + 0x24) >> ((byte)*(undefined4 *)(pCVar6 + 0x28) & 0x1f));
          fVar5 = _DAT_36223384 /
                  (float)(*(int *)(pCVar6 + 0x20) >> ((byte)*(undefined4 *)(pCVar6 + 0x28) & 0x1f));
          uVar9 = PutChar(this,iStack_134,iStack_130,iVar10,local_144,local_138,local_110,
                          (float)param_2,(float)bVar1 + (float)param_2,(float)param_3,
                          (float)param_3 + _DAT_36228804,
                          (float)*(ushort *)((int)&_pFontInfo + iVar8) * fVar5,
                          (float)((uint)bVar1 + (uint)*(ushort *)((int)&_pFontInfo + iVar8)) * fVar5
                          ,(float)uVar11 * fVar4,(float)(uVar11 + 0xc) * fVar4);
          iStack_134 = iStack_134 + uVar9 * 0x30;
          iStack_130 = iStack_130 + uVar9 * 0x20;
          iVar10 = iVar10 + uVar9 * 0x10;
          iStack_120 = iStack_120 + uVar9;
        }
        param_2 = param_2 + -1 + (uint)(byte)(&DAT_36301a44)[iVar8];
        pbStack_12c = pbVar12;
      }
      else if (bVar1 == 0x20) {
        pbVar12 = pbVar12 + 1;
        param_2 = param_2 + 4;
        pbStack_12c = pbVar12;
      }
      else {
        iVar8 = (uint)(ushort)bVar1 * 6;
        bVar1 = (&DAT_36301a44)[iVar8];
        if (bVar1 != 0) {
          uVar11 = (uint)*(ushort *)((int)&_pFontInfo + iVar8 + 2);
          fVar4 = _DAT_36223384 /
                  (float)(*(int *)(pCVar6 + 0x24) >> ((byte)*(undefined4 *)(pCVar6 + 0x28) & 0x1f));
          fVar5 = _DAT_36223384 /
                  (float)(*(int *)(pCVar6 + 0x20) >> ((byte)*(undefined4 *)(pCVar6 + 0x28) & 0x1f));
          uVar9 = PutChar(this,iStack_134,iStack_130,iVar10,local_144,local_138,local_110,
                          (float)param_2,(float)bVar1 + (float)param_2,(float)param_3,
                          (float)param_3 + _DAT_36228804,
                          (float)*(ushort *)((int)&_pFontInfo + iVar8) * fVar5,
                          (float)((uint)bVar1 + (uint)*(ushort *)((int)&_pFontInfo + iVar8)) * fVar5
                          ,(float)uVar11 * fVar4,(float)(uVar11 + 0xc) * fVar4);
          iStack_134 = iStack_134 + uVar9 * 0x30;
          iStack_130 = iStack_130 + uVar9 * 0x20;
          iVar10 = iVar10 + uVar9 * 0x10;
          iStack_120 = iStack_120 + uVar9;
          param_2 = param_2 + -1 + (uint)(byte)(&DAT_36301a44)[iVar8];
          pbVar12 = pbStack_12c;
        }
        pbVar12 = pbVar12 + 1;
        pbStack_12c = pbVar12;
      }
    }
    bVar1 = *pbVar12;
  }
  DAT_362c54e0 = iStack_120 << 2;
  DAT_362c5500 = DAT_362c54e0;
  DAT_362c5510 = DAT_362c54e0;
  FUN_36083610();
  return;
}

