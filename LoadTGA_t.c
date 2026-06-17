
/* WARNING: Type propagation algorithm not settling */
/* private: void __thiscall CImageInfo::LoadTGA_t(class CTFileName const &) */

void __thiscall CImageInfo::LoadTGA_t(CImageInfo *this,CTFileName *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  byte *local_94;
  int local_90;
  char *local_8c;
  int local_88;
  char *local_84;
  CTFileStream local_80 [20];
  byte *local_6c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8cbf0  2554  ?LoadTGA_t@CImageInfo@@AAEXABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621277f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTFileStream::CTFileStream(local_80);
  local_4 = 0;
  Clear(this);
  CTFileStream::Open_t(local_80,param_1,1);
  uVar5 = CTStream::GetStreamSize((CTStream *)local_80);
  local_94 = AllocMemory(uVar5);
  pbVar9 = local_6c;
  pbVar13 = local_94;
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pbVar13 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    pbVar13 = pbVar13 + 4;
  }
  for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pbVar13 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar13 = pbVar13 + 1;
  }
  local_6c = local_6c + uVar5;
  CTFileStream::Close(local_80);
  pbVar13 = local_94;
  uVar3 = *(ushort *)(local_94 + 0xc);
  bVar1 = *local_94;
  *(uint *)this = (uint)uVar3;
  pbVar9 = local_94 + bVar1 + 0x12;
  *(uint *)(this + 4) = (uint)*(ushort *)(local_94 + 0xe);
  bVar1 = local_94[0x10];
  *(uint *)(this + 8) = (uint)bVar1;
  local_90 = *(int *)(this + 4) * (uint)uVar3;
  iVar12 = (int)(uint)bVar1 >> 3;
  local_94 = (byte *)(uint)(iVar12 == 4);
  if ((iVar12 != 3) && (iVar12 != 4)) {
    local_94 = (byte *)Translate(s_ETRSUnsupported_BitsPerPixel_in_T_3622dd70,4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_94,(ThrowInfo *)&DAT_3624f688);
  }
  pbVar6 = AllocMemory(local_90 * iVar12);
  *(byte **)(this + 0xc) = pbVar6;
  if (pbVar13[2] == 10) {
    local_88 = 0;
    if (0 < local_90) {
      do {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        local_8c = (char *)((bVar1 & 0x7f) + 1);
        pbVar10 = pbVar6;
        pcVar4 = local_8c;
        if (local_8c != (char *)0x0) {
          do {
            local_84 = pcVar4;
            *pbVar10 = *pbVar9;
            pbVar10[1] = pbVar9[1];
            pbVar10[2] = pbVar9[2];
            pbVar6 = pbVar10 + 3;
            if (local_94 != (byte *)0x0) {
              *pbVar6 = pbVar9[3];
              pbVar6 = pbVar10 + 4;
            }
            if ((bVar1 & 0x80) == 0) {
              pbVar9 = pbVar9 + iVar12;
            }
            pbVar10 = pbVar6;
            pcVar4 = local_84 + -1;
          } while (local_84 + -1 != (char *)0x0);
          local_84 = (char *)0x0;
        }
        if ((bVar1 & 0x80) != 0) {
          pbVar9 = pbVar9 + iVar12;
        }
        local_88 = local_88 + (int)local_8c;
      } while (local_88 < local_90);
    }
    pbVar9 = *(byte **)(this + 0xc);
  }
  else if (pbVar13[2] != 2) {
    local_8c = Translate(s_ETRSUnsupported_TGA_format__3622dd9c,4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_8c,(ThrowInfo *)&DAT_3624f688);
  }
  uVar5 = (pbVar13[0x11] & 0x30) >> 4;
  if (uVar5 == 0) {
    lVar7 = 2;
  }
  else if (uVar5 == 1) {
    lVar7 = 3;
  }
  else if (uVar5 == 3) {
    lVar7 = 1;
  }
  else {
    lVar7 = 0;
  }
  FlipBitmap(pbVar9,*(uchar **)(this + 0xc),*(long *)this,*(long *)(this + 4),lVar7,(int)local_94);
  puVar11 = *(undefined1 **)(this + 0xc);
  iVar14 = local_90;
  if (0 < local_90) {
    do {
      uVar2 = *puVar11;
      *puVar11 = puVar11[2];
      puVar11[2] = uVar2;
      puVar11 = puVar11 + iVar12;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  FreeMemory(pbVar13);
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_80);
  ExceptionList = local_c;
  return;
}

