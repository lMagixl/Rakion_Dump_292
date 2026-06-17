
/* public: void __thiscall CBrushSector::FromObjectSector_t(class CObjectSector &) */

void __thiscall CBrushSector::FromObjectSector_t(CBrushSector *this,CObjectSector *param_1)

{
  void *this_00;
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int local_34;
  int local_30;
  char *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x137830  1684  ?FromObjectSector_t@CBrushSector@@QAEXAAVCObjectSector@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362193d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x70);
  *(uint *)(this + 0x44) = *(uint *)(param_1 + 0x74) & 0xfffffffa;
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x7c);
  pcVar3 = StringDuplicate(*(char **)(param_1 + 0x80));
  StringFree(*(char **)(this + 0xa8));
  *(char **)(this + 0xa8) = pcVar3;
  FUN_360502d0();
  LockAll(this);
  iVar4 = FUN_3604aa70((int)param_1);
  FUN_360d6d80(this,iVar4);
  FUN_361377b0(this + 0x20,iVar4);
  iVar14 = 0;
  if (0 < iVar4) {
    iVar15 = 0;
    do {
      puVar5 = (undefined4 *)FUN_3604a710(param_1,iVar14);
      puVar7 = (undefined4 *)(*(int *)(this + 4) + 0x20 + iVar15);
      *puVar7 = *puVar5;
      puVar7[1] = puVar5[1];
      puVar7[2] = puVar5[2];
      puVar7[3] = puVar5[3];
      puVar7[4] = puVar5[4];
      puVar7[5] = puVar5[5];
      *(CBrushSector **)(*(int *)(this + 4) + 0x40 + iVar15) = this;
      iVar6 = FUN_3604a710(param_1,iVar14);
      *(int *)(iVar6 + 0x20) = iVar14;
      iVar14 = iVar14 + 1;
      iVar15 = iVar15 + 0x48;
    } while (iVar14 < iVar4);
  }
  iVar4 = FUN_3604aaa0((int)(param_1 + 0x14));
  FUN_360d6e00(this + 0x10,iVar4);
  FUN_360d72d0(this + 0x28,iVar4);
  local_34 = 0;
  if (0 < iVar4) {
    local_30 = 0;
    do {
      puVar7 = (undefined4 *)FUN_3604a740(param_1 + 0x14,local_34);
      puVar5 = (undefined4 *)(local_30 + 0x28 + *(int *)(this + 0x14));
      for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar5 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar5 = puVar5 + 1;
      }
      iVar14 = FUN_3604a740(param_1 + 0x14,local_34);
      *(int *)(iVar14 + 0x28) = local_34;
      local_34 = local_34 + 1;
      local_30 = local_30 + 0x50;
    } while (local_34 < iVar4);
  }
  iVar4 = FUN_360543c0((int)(param_1 + 0x3c));
  if (iVar4 != 0) {
    *(int *)(this + 8) = iVar4;
    iVar14 = thunk_FUN_361bf99c((iVar4 * 3 + 3) * 4);
    if (iVar14 == 0) {
      iVar14 = 0;
    }
    else if (-1 < iVar4) {
      puVar7 = (undefined4 *)(iVar14 + 8);
      iVar15 = iVar4 + 1;
      do {
        *puVar7 = 0;
        puVar7 = puVar7 + 3;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    *(int *)(this + 0xc) = iVar14;
    if (iVar4 != 0) {
      *(int *)(this + 0x30) = iVar4;
      uVar8 = thunk_FUN_361bf99c(iVar4 * 8 + 8);
      *(undefined4 *)(this + 0x34) = uVar8;
    }
  }
  iVar14 = 0;
  if (0 < iVar4) {
    local_30 = 0;
    do {
      iVar9 = FUN_36054380(param_1 + 0x3c,iVar14);
      iVar15 = *(int *)(this + 0x34);
      piVar13 = (int *)(*(int *)(this + 0xc) + local_30);
      *piVar13 = *(int *)(this + 4) + *(int *)(*(int *)(iVar9 + 0x10) + 0x20) * 0x48;
      iVar6 = *(int *)(*(int *)(iVar9 + 0x14) + 0x20);
      iVar2 = *(int *)(this + 4);
      puVar7 = (undefined4 *)(iVar15 + iVar14 * 8);
      piVar13[2] = (int)puVar7;
      piVar13[1] = iVar2 + iVar6 * 0x48;
      *puVar7 = *(undefined4 *)(*(int *)(iVar9 + 0x10) + 0x20);
      puVar7[1] = *(undefined4 *)(*(int *)(iVar9 + 0x14) + 0x20);
      *(int *)(iVar9 + 4) = iVar14;
      iVar14 = iVar14 + 1;
      local_30 = local_30 + 0xc;
    } while (iVar14 < iVar4);
  }
  iVar4 = FUN_3604a760((int)(param_1 + 0x50));
  FUN_360d7250(this + 0x18,iVar4);
  local_34 = 0;
  if (0 < iVar4) {
    local_30 = 0;
    do {
      piVar13 = (int *)(*(int *)(this + 0x1c) + local_30);
      iVar14 = FUN_3604a750(param_1 + 0x50,local_34);
      *piVar13 = *(int *)(*(int *)(iVar14 + 0x48) + 0x28) * 0x50 + *(int *)(this + 0x14);
      local_24 = StringDuplicate(*(char **)(*(int *)(iVar14 + 0x60) + 8));
      local_20 = 0;
      local_4 = 0;
      CTextureObject::SetData_t((CTextureObject *)(piVar13 + 7),(CTFileName *)&local_24);
      local_4 = 0xffffffff;
      StringFree(local_24);
      local_1c = StringDuplicate(*(char **)(*(int *)(iVar14 + 0x60) + 0xc));
      local_18 = 0;
      local_4 = 1;
      CTextureObject::SetData_t((CTextureObject *)(piVar13 + 0x15),(CTFileName *)&local_1c);
      local_4 = 0xffffffff;
      StringFree(local_1c);
      local_14 = StringDuplicate(*(char **)(*(int *)(iVar14 + 0x60) + 0x10));
      local_10 = 0;
      local_4 = 2;
      CTextureObject::SetData_t((CTextureObject *)(piVar13 + 0x23),(CTFileName *)&local_14);
      local_4 = 0xffffffff;
      StringFree(local_14);
      *(int *)(iVar14 + 4) = local_34;
      piVar13[0x31] = *(int *)(iVar14 + 200);
      piVar13[0xd] = *(int *)(iVar14 + 100);
      piVar13[0xe] = *(int *)(iVar14 + 0x68);
      piVar13[0xf] = *(int *)(iVar14 + 0x6c);
      piVar13[0x10] = *(int *)(iVar14 + 0x70);
      piVar13[0x11] = *(int *)(iVar14 + 0x74);
      piVar13[0x12] = *(int *)(iVar14 + 0x78);
      piVar13[0x1b] = *(int *)(iVar14 + 0x7c);
      piVar13[0x1c] = *(int *)(iVar14 + 0x80);
      piVar13[0x1d] = *(int *)(iVar14 + 0x84);
      piVar13[0x1e] = *(int *)(iVar14 + 0x88);
      piVar13[0x1f] = *(int *)(iVar14 + 0x8c);
      piVar13[0x20] = *(int *)(iVar14 + 0x90);
      piVar13[0x29] = *(int *)(iVar14 + 0x94);
      piVar13[0x2a] = *(int *)(iVar14 + 0x98);
      piVar13[0x2b] = *(int *)(iVar14 + 0x9c);
      piVar13[0x2c] = *(int *)(iVar14 + 0xa0);
      piVar13[0x2d] = *(int *)(iVar14 + 0xa4);
      piVar13[0x2e] = *(int *)(iVar14 + 0xa8);
      piVar13[0x5c] = *(int *)(iVar14 + 0xac);
      piVar13[0x5d] = *(int *)(iVar14 + 0xb0);
      piVar13[0x5e] = *(int *)(iVar14 + 0xb4);
      piVar13[0x5f] = *(int *)(iVar14 + 0xb8);
      piVar13[0x60] = *(int *)(iVar14 + 0xbc);
      piVar13[0x61] = *(int *)(iVar14 + 0xc0);
      piVar13[0x6b] = (int)this;
      piVar13[0x62] = *(int *)(iVar14 + 8);
      piVar13[99] = *(int *)(iVar14 + 0xc);
      piVar13[0x13] = *(int *)(iVar14 + 0x10);
      piVar13[0x14] = *(int *)(iVar14 + 0x14);
      piVar13[0x21] = *(int *)(iVar14 + 0x18);
      piVar13[0x22] = *(int *)(iVar14 + 0x1c);
      piVar13[0x2f] = *(int *)(iVar14 + 0x20);
      piVar13[0x30] = *(int *)(iVar14 + 0x24);
      piVar13[0x33] = *(int *)(iVar14 + 0x28);
      uVar11 = *(uint *)(iVar14 + 0xc4);
      uVar10 = uVar11 & 0xfffffefd;
      piVar13[0x32] = uVar10;
      if ((uVar11 & 0x2000) == 0) {
        *(undefined1 *)((int)piVar13 + 0x18a) = 1;
        piVar13[0x33] = -1;
        piVar13[0x14] = -1;
        *(undefined1 *)((int)piVar13 + 0x4e) = 4;
        *(undefined1 *)(piVar13 + 0x13) = 0;
        *(undefined1 *)((int)piVar13 + 0x4d) = 0;
        piVar13[0x22] = -1;
        *(undefined1 *)((int)piVar13 + 0x86) = 4;
        *(undefined1 *)(piVar13 + 0x21) = 0;
        *(undefined1 *)((int)piVar13 + 0x85) = 1;
        piVar13[0x30] = -1;
        *(undefined1 *)((int)piVar13 + 0xbe) = 4;
        *(undefined1 *)(piVar13 + 0x2f) = 0;
        *(undefined1 *)((int)piVar13 + 0xbd) = 1;
        piVar13[0x32] = uVar10 | 0x2000;
      }
      uVar11 = piVar13[0x32];
      if (((uVar11 & 0x400) == 0) && ((uVar11 & 1) != 0)) {
        uVar11 = uVar11 | 0x400800;
        *(undefined1 *)((int)piVar13 + 0x4d) = 2;
        *(undefined1 *)((int)piVar13 + 0x18a) = 3;
LAB_36137d52:
        piVar13[0x32] = uVar11;
      }
      else if (((uVar11 & 0x400) != 0) && ((uVar11 & 1) == 0)) {
        uVar11 = uVar11 & 0xffbff7ff;
        *(undefined1 *)((int)piVar13 + 0x4d) = 0;
        *(undefined1 *)((int)piVar13 + 0x18a) = 1;
        goto LAB_36137d52;
      }
      if (*(int *)(*(int *)(*(int *)(this + 0x38) + 0x14) + 0x66c) != 0) {
        piVar13[0x32] = piVar13[0x32] | 0x400800;
      }
      this_00 = (void *)(iVar14 + 0x4c);
      iVar14 = FUN_3604aa50((int)this_00);
      if (iVar14 != 0) {
        piVar13[1] = iVar14;
        iVar14 = thunk_FUN_361bf99c(iVar14 * 8 + 8);
        piVar13[2] = iVar14;
      }
      iVar15 = 0;
      iVar14 = FUN_3604aa50((int)this_00);
      if (0 < iVar14) {
        do {
          piVar1 = (int *)(piVar13[2] + iVar15 * 8);
          piVar12 = (int *)FUN_3604a700(this_00,iVar15);
          *piVar1 = *(int *)(this + 0xc) + *(int *)(*piVar12 + 4) * 0xc;
          iVar14 = FUN_3604a700(this_00,iVar15);
          piVar1[1] = *(int *)(iVar14 + 4);
          iVar15 = iVar15 + 1;
          iVar14 = FUN_3604aa50((int)this_00);
        } while (iVar15 < iVar14);
      }
      local_34 = local_34 + 1;
      local_30 = local_30 + 0x1d0;
    } while (local_34 < iVar4);
  }
  FUN_360502e0();
  UnlockAll(this);
  UpdateSector(this);
  ExceptionList = local_c;
  return;
}

