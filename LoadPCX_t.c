
/* private: void __thiscall CImageInfo::LoadPCX_t(class CTFileName const &) */

void __thiscall CImageInfo::LoadPCX_t(CImageInfo *this,CTFileName *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  byte *local_a0;
  byte *local_98;
  int local_94;
  CTFileStream local_80 [20];
  undefined4 *local_6c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8c7d0  2552  ?LoadPCX_t@CImageInfo@@AAEXABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621276d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTFileStream::CTFileStream(local_80);
  local_4 = 0;
  Clear(this);
  CTFileStream::Open_t(local_80,param_1,1);
  uVar5 = CTStream::GetStreamSize((CTStream *)local_80);
  puVar6 = AllocMemory(uVar5);
  puVar14 = local_6c;
  puVar15 = puVar6;
  for (uVar10 = uVar5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  for (uVar10 = uVar5 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar15 = (undefined4 *)((int)puVar15 + 1);
  }
  local_6c = (undefined4 *)((int)local_6c + uVar5);
  CTFileStream::Close(local_80);
  *(int *)this = ((int)*(short *)(puVar6 + 2) - (int)*(short *)(puVar6 + 1)) + 1;
  local_98 = (byte *)(puVar6 + 0x20);
  *(int *)(this + 4) = ((int)*(short *)((int)puVar6 + 10) - (int)*(short *)((int)puVar6 + 6)) + 1;
  iVar11 = *(char *)((int)puVar6 + 0x41) * 8;
  iVar7 = *(int *)(this + 4) * iVar11 * *(int *)this;
  *(int *)(this + 8) = iVar11;
  pvVar8 = AllocMemory((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3);
  *(void **)(this + 0xc) = pvVar8;
  iVar7 = (uint)*(ushort *)((int)puVar6 + 0x42) * *(int *)(this + 4) * *(int *)(this + 8);
  iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
  pbVar9 = AllocMemory(iVar7);
  local_94 = 0;
  pbVar16 = pbVar9;
  local_a0 = pbVar9;
  if (0 < iVar7) {
    do {
      bVar4 = *local_98;
      if ((bVar4 & 0xc0) == 0xc0) {
        bVar4 = bVar4 & 0x3f;
        bVar1 = local_98[1];
        local_98 = local_98 + 2;
        uVar5 = (uint)bVar4;
        if (uVar5 != 0) {
          for (uVar10 = (uint)(bVar4 >> 2); uVar10 != 0; uVar10 = uVar10 - 1) {
            *(uint *)pbVar16 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
            pbVar16 = pbVar16 + 4;
          }
          for (uVar10 = uVar5 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pbVar16 = bVar1;
            pbVar16 = pbVar16 + 1;
          }
          pbVar16 = local_a0 + uVar5;
          local_a0 = pbVar16;
        }
      }
      else {
        *pbVar16 = bVar4;
        bVar4 = 1;
        pbVar16 = pbVar16 + 1;
        local_a0 = pbVar16;
        local_98 = local_98 + 1;
      }
      local_94 = local_94 + (uint)bVar4;
    } while (local_94 < iVar7);
  }
  iVar7 = (int)(*(int *)(this + 8) + (*(int *)(this + 8) >> 0x1f & 7U)) >> 3;
  local_94 = 0;
  if (0 < *(int *)(this + 4)) {
    do {
      uVar2 = *(ushort *)((int)puVar6 + 0x42);
      iVar11 = *(int *)this;
      local_a0 = (byte *)0x0;
      if (0 < iVar7) {
        do {
          uVar3 = *(ushort *)((int)puVar6 + 0x42);
          iVar12 = 0;
          if (0 < *(int *)this) {
            iVar13 = 0;
            do {
              *(byte *)(*(int *)(this + 0xc) + iVar13 + (int)local_a0 + iVar11 * local_94 * iVar7) =
                   pbVar9[iVar12 + (uint)uVar3 * (int)local_a0 + (uint)uVar2 * local_94 * iVar7];
              iVar12 = iVar12 + 1;
              iVar13 = iVar13 + iVar7;
            } while (iVar12 < *(int *)this);
          }
          local_a0 = (byte *)((int)local_a0 + 1);
        } while ((int)local_a0 < iVar7);
      }
      local_94 = local_94 + 1;
    } while (local_94 < *(int *)(this + 4));
  }
  FreeMemory(puVar6);
  FreeMemory(pbVar9);
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_80);
  ExceptionList = local_c;
  return;
}

