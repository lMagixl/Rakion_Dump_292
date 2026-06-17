
/* public: void __thiscall CBrushSector::ToObjectSector(class CObjectSector &) */

void __thiscall CBrushSector::ToObjectSector(CBrushSector *this,CObjectSector *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  CTFileName *pCVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int local_40;
  int local_3c;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_c;
  
                    /* 0x137180  3833  ?ToObjectSector@CBrushSector@@QAEXAAVCObjectSector@@@Z */
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(this + 0x40);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(this + 0x44);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(this + 0x48);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(this + 0x50);
  pcVar1 = StringDuplicate(*(char **)(this + 0xa8));
  StringFree(*(char **)(param_1 + 0x80));
  *(char **)(param_1 + 0x80) = pcVar1;
  FUN_360502d0();
  LockAll(this);
  iVar2 = FUN_360fac30((undefined4 *)this);
  FUN_3604c210(param_1,iVar2);
  local_40 = 0;
  if (0 < iVar2) {
    local_3c = 0;
    do {
      puVar10 = (undefined4 *)(local_3c + 0x20 + *(int *)(this + 4));
      local_30[0] = *puVar10;
      local_30[1] = puVar10[1];
      local_30[2] = puVar10[2];
      local_30[3] = puVar10[3];
      local_20 = puVar10[4];
      local_1c = puVar10[5];
      local_c = 0;
      puVar3 = (undefined4 *)FUN_3604a710(param_1,local_40);
      puVar10 = local_30;
      for (iVar11 = 10; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar3 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar3 = puVar3 + 1;
      }
      local_40 = local_40 + 1;
      local_3c = local_3c + 0x48;
    } while (local_40 < iVar2);
  }
  iVar2 = FUN_360d6990((undefined4 *)(this + 0x10));
  FUN_3604c260(param_1 + 0x14,iVar2);
  local_3c = 0;
  if (0 < iVar2) {
    local_40 = 0;
    do {
      puVar10 = (undefined4 *)(local_40 + 0x28 + *(int *)(this + 0x14));
      puVar3 = local_30;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar3 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar3 = (undefined4 *)FUN_3604a740(param_1 + 0x14,local_3c);
      puVar10 = local_30;
      for (iVar11 = 0xc; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar3 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar3 = puVar3 + 1;
      }
      local_3c = local_3c + 1;
      local_40 = local_40 + 0x50;
    } while (local_3c < iVar2);
  }
  iVar11 = 0;
  iVar2 = FUN_360d6960((undefined4 *)(this + 8));
  FUN_3604c300(param_1 + 0x3c,iVar2);
  if (0 < iVar2) {
    local_3c = 0;
    do {
      iVar4 = FUN_36054380(param_1 + 0x3c,iVar11);
      iVar7 = *(int *)(this + 0xc);
      iVar5 = FUN_360d67e0(this,*(int *)(iVar7 + local_3c));
      uVar6 = FUN_3604a710(param_1,iVar5);
      *(undefined4 *)(iVar4 + 0x10) = uVar6;
      iVar7 = FUN_360d67e0(this,((int *)(iVar7 + local_3c))[1]);
      uVar6 = FUN_3604a710(param_1,iVar7);
      *(undefined4 *)(iVar4 + 0x14) = uVar6;
      iVar11 = iVar11 + 1;
      local_3c = local_3c + 0xc;
    } while (iVar11 < iVar2);
  }
  iVar2 = FUN_360d69b0((undefined4 *)(this + 0x18));
  FUN_3604d100(param_1 + 0x50,iVar2);
  FUN_3604c2b0(param_1 + 0x28,iVar2);
  local_40 = 0;
  if (0 < iVar2) {
    local_3c = 0;
    do {
      piVar12 = (int *)(*(int *)(this + 0x1c) + local_3c);
      iVar11 = FUN_3604a750(param_1 + 0x50,local_40);
      iVar7 = FUN_3604f3f0(param_1 + 0x28,local_40);
      iVar4 = FUN_36137160(this + 0x10,*piVar12);
      uVar6 = FUN_3604a740(param_1 + 0x14,iVar4);
      *(undefined4 *)(iVar11 + 0x48) = uVar6;
      *(int *)(iVar11 + 0x60) = iVar7;
      pCVar8 = CTextureObject::GetName((CTextureObject *)(piVar12 + 7));
      pcVar1 = StringDuplicate(*(char **)pCVar8);
      StringFree(*(char **)(iVar7 + 8));
      *(char **)(iVar7 + 8) = pcVar1;
      pCVar8 = CTextureObject::GetName((CTextureObject *)(piVar12 + 0x15));
      pcVar1 = StringDuplicate(*(char **)pCVar8);
      StringFree(*(char **)(iVar7 + 0xc));
      *(char **)(iVar7 + 0xc) = pcVar1;
      pCVar8 = CTextureObject::GetName((CTextureObject *)(piVar12 + 0x23));
      pcVar1 = StringDuplicate(*(char **)pCVar8);
      StringFree(*(char **)(iVar7 + 0x10));
      *(char **)(iVar7 + 0x10) = pcVar1;
      *(int *)(iVar11 + 200) = piVar12[0x31];
      *(int *)(iVar11 + 100) = piVar12[0xd];
      *(int *)(iVar11 + 0x68) = piVar12[0xe];
      *(int *)(iVar11 + 0x6c) = piVar12[0xf];
      *(int *)(iVar11 + 0x70) = piVar12[0x10];
      *(int *)(iVar11 + 0x74) = piVar12[0x11];
      *(int *)(iVar11 + 0x78) = piVar12[0x12];
      *(int *)(iVar11 + 0x7c) = piVar12[0x1b];
      *(int *)(iVar11 + 0x80) = piVar12[0x1c];
      *(int *)(iVar11 + 0x84) = piVar12[0x1d];
      *(int *)(iVar11 + 0x88) = piVar12[0x1e];
      *(int *)(iVar11 + 0x8c) = piVar12[0x1f];
      *(int *)(iVar11 + 0x90) = piVar12[0x20];
      *(int *)(iVar11 + 0x94) = piVar12[0x29];
      *(int *)(iVar11 + 0x98) = piVar12[0x2a];
      *(int *)(iVar11 + 0x9c) = piVar12[0x2b];
      *(int *)(iVar11 + 0xa0) = piVar12[0x2c];
      *(int *)(iVar11 + 0xa4) = piVar12[0x2d];
      *(int *)(iVar11 + 0xa8) = piVar12[0x2e];
      *(int *)(iVar11 + 0xac) = piVar12[0x5c];
      *(int *)(iVar11 + 0xb0) = piVar12[0x5d];
      *(int *)(iVar11 + 0xb4) = piVar12[0x5e];
      *(int *)(iVar11 + 0xb8) = piVar12[0x5f];
      *(int *)(iVar11 + 0xbc) = piVar12[0x60];
      *(int *)(iVar11 + 0xc0) = piVar12[0x61];
      uVar9 = piVar12[0x32];
      *(uint *)(iVar11 + 0xc4) = uVar9;
      if ((*(byte *)(piVar12 + 0x32) & 1) == 0) {
        uVar9 = uVar9 & 0xfffffbff;
      }
      else {
        uVar9 = uVar9 | 0x400;
      }
      *(uint *)(iVar11 + 0xc4) = uVar9;
      if ((piVar12[0x32] & 0x100U) == 0) {
        *(uint *)(iVar11 + 0xc4) = *(uint *)(iVar11 + 0xc4) | 2;
      }
      *(int *)(iVar11 + 8) = piVar12[0x62];
      *(int *)(iVar11 + 0xc) = piVar12[99];
      *(int *)(iVar11 + 0x10) = piVar12[0x13];
      *(int *)(iVar11 + 0x14) = piVar12[0x14];
      *(int *)(iVar11 + 0x18) = piVar12[0x21];
      *(int *)(iVar11 + 0x1c) = piVar12[0x22];
      *(int *)(iVar11 + 0x20) = piVar12[0x2f];
      *(int *)(iVar11 + 0x24) = piVar12[0x30];
      *(int *)(iVar11 + 0x28) = piVar12[0x33];
      piVar13 = piVar12 + 1;
      iVar7 = FUN_3600be20(piVar13);
      FUN_3604b1a0((void *)(iVar11 + 0x4c),iVar7);
      iVar7 = 0;
      if (0 < *piVar13) {
        do {
          puVar10 = (undefined4 *)FUN_3604a700((void *)(iVar11 + 0x4c),iVar7);
          iVar4 = FUN_36137140(this + 8,*(int *)(piVar12[2] + iVar7 * 8));
          uVar6 = FUN_36054380(param_1 + 0x3c,iVar4);
          *puVar10 = uVar6;
          puVar10[1] = *(undefined4 *)(piVar12[2] + 4 + iVar7 * 8);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *piVar13);
      }
      local_40 = local_40 + 1;
      local_3c = local_3c + 0x1d0;
    } while (local_40 < iVar2);
  }
  FUN_360502e0();
  UnlockAll(this);
  return;
}

