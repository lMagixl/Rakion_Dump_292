
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::PutTextASCII(class CTString const &,long,long,unsigned
   long)const  */

void __thiscall
CDrawPort::PutTextASCII(CDrawPort *this,CTString *param_1,long param_2,long param_3,ulong param_4)

{
  char cVar1;
  CTextureData *this_00;
  PredefinedBlendType PVar2;
  byte bVar3;
  undefined1 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  bool bVar15;
  ulonglong uVar16;
  undefined4 uStack_9c;
  float local_98;
  undefined1 uStack_94;
  uint uStack_90;
  char *pcStack_8c;
  float local_88;
  uint uStack_84;
  char *pcStack_80;
  float fStack_7c;
  ulong uStack_78;
  float fStack_74;
  int local_70;
  float fStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 *puStack_60;
  int local_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  ulong uStack_48;
  int iStack_44;
  float fStack_40;
  float local_3c;
  int local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  uint local_28;
  long lStack_24;
  uint local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  float fStack_10;
  char acStack_c [2];
  undefined1 uStack_a;
  undefined1 uStack_6;
  undefined4 local_4;
  
                    /* 0x69650  2881  ?PutTextASCII@CDrawPort@@QBEXABVCTString@@JJK@Z */
  local_98 = *(float *)(this + 0x34) * *(float *)(this + 0x30);
  local_4 = DAT_362abd90;
  local_70 = (int)ROUND(local_98 * _DAT_36228800);
  local_88 = *(float *)(this + 0x30) * _DAT_36228800;
  local_5c = (int)ROUND(local_88);
  iVar6 = *(int *)(this + 4);
  local_18 = *(int *)(iVar6 + 0x20) + -1;
  local_38 = local_5c * local_18 >> 0x10;
  local_58 = *(int *)(iVar6 + 0x2c);
  local_30 = (float)local_38;
  local_34 = (float)local_38 * local_98 * _DAT_362287a8;
  local_20 = *(uint *)(iVar6 + 0x30) & 1;
  local_28 = *(uint *)(iVar6 + 0x30) & 2;
  local_3c = (float)*(int *)(iVar6 + 0x1c) * local_98 * _DAT_362287a8;
  (*DAT_362c4680)(0x51,0x51);
  this_00 = *(CTextureData **)(*(int *)(this + 4) + 0x1048);
  CTextureData::SetAsCurrent(this_00,0,0);
  PVar2 = *(PredefinedBlendType *)(this + 0x40);
  (*DAT_362c4624)();
  gfxSetBlendType(PVar2);
  pcVar5 = *(char **)param_1;
  fStack_2c = _DAT_36223384 /
              (float)(*(int *)(this_00 + 0x20) >> ((byte)*(undefined4 *)(this_00 + 0x28) & 0x1f));
  pcVar14 = pcVar5 + 1;
  fStack_40 = _DAT_36223384 /
              (float)(*(int *)(this_00 + 0x24) >> ((byte)*(undefined4 *)(this_00 + 0x28) & 0x1f));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar6 = (int)pcVar5 - (int)pcVar14;
  local_88 = (float)iVar6;
  FUN_360605c0(&uStack_90,param_4);
  uVar9 = *(uint *)(this + 0x3c);
  uStack_78 = param_4 & 0xff;
  uStack_9c = uStack_90;
  if ((uVar9 & 1) == 0) {
    fStack_7c = 0.0;
  }
  else {
    fStack_7c = local_3c;
  }
  if ((uVar9 & 2) == 0) {
    fStack_6c = 0.0;
  }
  else {
    fStack_6c = local_34;
  }
  uStack_84 = (uint)((uVar9 & 0xc00) == 0);
  iVar12 = iVar6 * 8;
  iStack_68 = 0;
  DAT_362c5500 = 0;
  DAT_362c5510 = 0;
  _DAT_362c5520 = 0;
  _DAT_362c5530 = 0;
  _DAT_362c5540 = 0;
  DAT_362c5560 = 0;
  fStack_10 = (float)((float10)*(longlong *)(_pGfx + 0xb00) / (float10)*(longlong *)_pTimer);
  DAT_362c54e0 = iVar12;
  uStack_48 = uStack_78;
  iVar7 = FUN_36061f60((undefined4 *)&DAT_362c54d8);
  iVar8 = 0;
  iVar13 = 0;
  if (iVar7 < iVar12) {
    iVar8 = FUN_36061f60((undefined4 *)&DAT_362c54d8);
    FUN_360621d0(&DAT_362c54d8,iVar8 + ((iVar12 + -1) / DAT_362c54e4 + 1) * DAT_362c54e4);
    iVar8 = DAT_362c5510;
    iVar13 = DAT_362c5500;
  }
  iStack_44 = DAT_362c54dc + (DAT_362c54e0 + iVar6 * -8) * 0xc;
  iVar8 = iVar8 + iVar12;
  DAT_362c5510 = iVar8;
  iVar7 = FUN_36061fd0(&DAT_362c5508);
  if (iVar7 < iVar8) {
    iVar8 = FUN_36061fd0(&DAT_362c5508);
    FUN_36062460(&DAT_362c5508,iVar8 + ((iVar12 + -1) / DAT_362c5514 + 1) * DAT_362c5514);
    iVar8 = DAT_362c5510;
    iVar13 = DAT_362c5500;
  }
  local_5c = DAT_362c550c + (iVar8 + iVar6 * -8) * 8;
  iVar13 = iVar13 + iVar12;
  DAT_362c5500 = iVar13;
  iVar8 = FUN_36061f90((undefined4 *)&DAT_362c54f8);
  if (iVar8 < iVar13) {
    iVar8 = FUN_36061f90((undefined4 *)&DAT_362c54f8);
    FUN_360622b0(&DAT_362c54f8,iVar8 + ((iVar12 + -1) / DAT_362c5504 + 1) * DAT_362c5504);
    iVar13 = DAT_362c5500;
  }
  iStack_50 = *(int *)(*(int *)(this + 4) + 0x1c);
  iStack_54 = DAT_362c54fc + (iVar13 + iVar6 * -8) * 4;
  iVar6 = ((iStack_50 * local_70 >> 0x10) - local_58) + *(int *)(this + 0x28);
  lStack_24 = param_2;
  iStack_4c = 0;
  local_98 = 0.0;
  if (0 < (int)local_88) {
    do {
      iVar8 = *(int *)param_1;
      bVar3 = *(byte *)(iVar8 + (int)local_98);
      if (bVar3 == 10) {
        param_2 = lStack_24;
        param_3 = param_3 + (*(int *)(this + 0x2c) - local_58) + local_38;
        if (*(int *)(this + 0x14) - *(int *)(this + 0xc) < param_3) break;
      }
      else if (bVar3 == 0x5e) {
        if ((*(uint *)(this + 0x3c) & 0x400) == 0) {
          cVar1 = *(char *)(iVar8 + 1 + (int)local_98);
          iVar13 = (int)local_98 + 1;
          switch(cVar1) {
          case 'A':
            uStack_78 = uStack_48;
            local_98 = (float)iVar13;
            break;
          case 'B':
            fStack_7c = 0.0;
            local_98 = (float)iVar13;
            break;
          case 'C':
            uStack_9c = uStack_90;
            local_98 = (float)iVar13;
            break;
          default:
            local_98 = (float)iVar13;
            if (cVar1 == '^') {
              bVar3 = 0x5e;
              goto LAB_36069c61;
            }
            goto LAB_36069ecb;
          case 'F':
            iStack_68 = 0;
            local_98 = (float)iVar13;
            break;
          case 'I':
            fStack_6c = 0.0;
            local_98 = (float)iVar13;
            break;
          case 'a':
            local_98 = (float)iVar13;
            strncpy(acStack_c,(char *)(iVar8 + 1 + iVar13),2);
            pcStack_80 = (char *)(*(int *)param_1 + 1 + iVar13);
            bVar15 = &stack0x00000000 == (undefined1 *)0xac;
            uStack_94 = 0;
            iVar8 = 2;
            pcVar14 = pcStack_80;
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar15 = *pcVar14 == '\0';
              pcVar14 = pcVar14 + 1;
            } while (!bVar15);
            iVar8 = (2 - iVar8) - (uint)bVar15;
            iVar13 = iVar13 + iVar8;
            local_98 = (float)iVar13;
            if ((uStack_84 != 0) && (1 < iVar8)) {
              uStack_a = 0;
              local_98 = (float)iVar8;
              uStack_78 = strtoul(acStack_c,&pcStack_8c,0x10);
              local_98 = (float)iVar13;
            }
            break;
          case 'b':
            local_98 = (float)iVar13;
            if (uStack_84 != 0) {
              fStack_7c = local_3c;
            }
            break;
          case 'c':
            local_98 = (float)iVar13;
            strncpy(acStack_c,(char *)(iVar8 + 1 + iVar13),6);
            pcStack_80 = (char *)(*(int *)param_1 + 1 + iVar13);
            bVar15 = &stack0x00000000 == (undefined1 *)0xac;
            uStack_94 = 0;
            iVar8 = 6;
            pcVar14 = pcStack_80;
            do {
              if (iVar8 == 0) break;
              iVar8 = iVar8 + -1;
              bVar15 = *pcVar14 == '\0';
              pcVar14 = pcVar14 + 1;
            } while (!bVar15);
            iVar8 = (6 - iVar8) - (uint)bVar15;
            iVar13 = iVar13 + iVar8;
            local_98 = (float)iVar13;
            if ((uStack_84 != 0) && (5 < iVar8)) {
              uStack_6 = 0;
              local_98 = (float)iVar8;
              uVar10 = strtoul(acStack_c,&pcStack_8c,0x10);
              uVar9 = uVar10 << 8;
              pcStack_80 = (char *)(uStack_9c >> 0x18 | uVar9);
              puStack_60 = &uStack_9c;
              uStack_9c = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          (uStack_9c >> 0x18) << 0x18;
              local_98 = (float)iVar13;
            }
            break;
          case 'f':
            local_98 = (float)((int)local_98 + 2);
            if (uStack_84 != 0) {
              iVar8 = *(byte *)(iVar8 + (int)local_98) - 0x30;
              if (iVar8 < 0) {
                iVar8 = 0;
              }
              else if (9 < iVar8) {
                iStack_68 = 0x13;
                break;
              }
              iStack_68 = iVar8 * 2 + 1;
            }
            break;
          case 'i':
            local_98 = (float)iVar13;
            if (uStack_84 != 0) {
              fStack_6c = local_34;
            }
            break;
          case 'o':
            if ((uStack_84 == 0) || (DAT_362a4198 == 0)) {
              uStack_84 = 0;
              local_98 = (float)iVar13;
            }
            else {
              uStack_84 = 1;
              local_98 = (float)iVar13;
            }
            break;
          case 'r':
            fStack_7c = 0.0;
            fStack_6c = 0.0;
            iStack_68 = 0;
            uStack_9c = uStack_90;
            uStack_78 = uStack_48;
            local_98 = (float)iVar13;
          }
        }
        else {
LAB_36069c61:
          iVar8 = *(int *)(this + 4);
          if ((*(int *)((uint)bVar3 * 0x10 + 0x48 + iVar8) == *(int *)(iVar8 + 0x238)) &&
             (*(int *)((uint)bVar3 * 0x10 + iVar8 + 0x4c) == *(int *)(iVar8 + 0x23c))) {
            bVar11 = bVar3 - 0x20;
            if (bVar11 == 0xff) {
              bVar11 = 0x9f;
            }
            if (((*(int *)((uint)bVar11 * 0x10 + 0x48 + iVar8) != *(int *)(iVar8 + 0x238)) ||
                (*(int *)((uint)bVar11 * 0x10 + iVar8 + 0x4c) != *(int *)(iVar8 + 0x23c))) &&
               (*(int *)(iVar8 + 0x34) != 0)) {
              bVar3 = bVar11;
            }
          }
          iVar12 = (uint)bVar3 * 0x10;
          iVar13 = *(int *)(iVar12 + 0x48 + iVar8);
          iVar7 = *(int *)(iVar12 + 0x54 + iVar8);
          iVar8 = iVar12 + 0x48 + iVar8;
          puStack_60 = *(undefined4 **)(iVar8 + 4);
          iVar8 = *(int *)(iVar8 + 8);
          if (local_28 == 0) {
            iStack_50 = iVar7;
          }
          iStack_14 = local_70 * iStack_50 >> 0x10;
          if (local_20 == 0) {
            iVar12 = -(local_70 * iVar8 >> 0x10);
            iVar6 = (((iVar7 - iVar8) * local_70 >> 0x10) - local_58) + *(int *)(this + 0x28);
          }
          else {
            iVar12 = ((iStack_14 + 1) * 0x10000 - (iVar7 - iVar8) * local_70 >> 0x11) -
                     (local_70 * iVar8 >> 0x10);
          }
          fStack_74 = (float)(iVar12 + param_2);
          iStack_1c = iVar13;
          if (((int)fStack_74 <= *(int *)(this + 0x10) - *(int *)(this + 8)) &&
             (-1 < (int)fStack_74 + iVar7)) {
            if (iStack_68 < 1) {
              uVar4 = (undefined1)uStack_78;
            }
            else {
              fsin((float10)iStack_68 * (float10)fStack_10);
              uVar16 = FUN_361bfd6c();
              uVar4 = (char)uVar16;
            }
            iVar7 = iStack_44;
            iVar8 = local_5c;
            pcStack_80 = (char *)(float)(int)fStack_74;
            fStack_74 = (float)param_3;
            uStack_9c = CONCAT13(uVar4,(undefined3)uStack_9c);
            iStack_64 = iVar13 + iStack_50;
            uVar10 = PutChar(this,iStack_44,local_5c,iStack_54,uStack_9c,fStack_7c,fStack_6c,
                             pcStack_80,(float)iStack_14 + (float)pcStack_80,fStack_74,
                             local_30 + fStack_74,(float)iStack_1c * fStack_2c,
                             (float)iStack_64 * fStack_2c,(float)(int)puStack_60 * fStack_40,
                             (float)((int)puStack_60 + local_18) * fStack_40);
            iStack_44 = iVar7 + uVar10 * 0x30;
            local_5c = iVar8 + uVar10 * 0x20;
            iStack_54 = iStack_54 + uVar10 * 0x10;
            iStack_4c = iStack_4c + uVar10;
          }
          param_2 = param_2 + iVar6;
        }
      }
      else if (bVar3 != 9) goto LAB_36069c61;
      local_98 = (float)((int)local_98 + 1);
    } while ((int)local_98 < (int)local_88);
  }
LAB_36069ecb:
  DAT_362c54e0 = iStack_4c << 2;
  DAT_362c5500 = DAT_362c54e0;
  DAT_362c5510 = DAT_362c54e0;
  FUN_36083610();
  return;
}

