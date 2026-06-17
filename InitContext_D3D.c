
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CGfxLibrary::InitContext_D3D(void) */

void __thiscall CGfxLibrary::InitContext_D3D(CGfxLibrary *this)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  char *pcVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar5;
  undefined4 unaff_EBX;
  uint uVar6;
  int iVar7;
  int **ppiVar8;
  undefined4 uStack_1ec;
  int *piStack_1e8;
  int iStack_1e4;
  undefined4 uStack_1e0;
  int *piStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  int *piStack_1d0;
  int *apiStack_1cc [9];
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int *piStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  int *piStack_194;
  undefined4 uStack_190;
  uint uStack_18c;
  int *piStack_188;
  uint uStack_184;
  undefined4 uStack_180;
  int *piStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  int *piStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int *piStack_164;
  undefined4 uStack_160;
  undefined4 uVar9;
  byte bStack_110;
  int iStack_108;
  int iStack_fc;
  undefined4 uStack_ec;
  uint uStack_e4;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  float fStack_d0;
  
                    /* 0x73a80  2310  ?InitContext_D3D@CGfxLibrary@@AAEXXZ */
  pcVar4 = Translate(s_ETRS___Direct3D_context_created__36228918,4);
  CPrintF(pcVar4);
  uStack_160 = 0x36073ad2;
  CPrintF(s___s___s___s__36228960);
  DAT_362c44d0 = 0;
  DAT_362a4008 = 1;
  DAT_362a400c = 1;
  DAT_362c44e0 = 0;
  DAT_362c44e4 = 0;
  DAT_362a4028 = 0xbc614e;
  uVar9 = 7;
  (**(code **)(**(int **)(this + 0xa5c) + 200))();
  DAT_362c44b8 = 0;
  (**(code **)(**(int **)(this + 0xa5c) + 200))();
  DAT_362c44bc = 0;
  piStack_164 = *(int **)(this + 0xa5c);
  uStack_160 = 0xf;
  uStack_168 = 0x36073b46;
  (**(code **)(*piStack_164 + 200))();
  uStack_168 = 0;
  DAT_362c44c0 = 0;
  piStack_170 = *(int **)(this + 0xa5c);
  uStack_16c = 0x1b;
  uStack_174 = 0x36073b5e;
  (**(code **)(*piStack_170 + 200))();
  uStack_174 = 1;
  DAT_362a4004 = 0;
  piStack_17c = *(int **)(this + 0xa5c);
  uStack_178 = 0x1a;
  uStack_180 = 0x36073b76;
  (**(code **)(*piStack_17c + 200))();
  uStack_180 = 0;
  DAT_362a4000 = 1;
  piStack_188 = *(int **)(this + 0xa5c);
  uStack_184 = 0x8d;
  uStack_18c = 0x36073b91;
  (**(code **)(*piStack_188 + 200))();
  uStack_18c = 0;
  DAT_362c44cc = 0;
  piStack_194 = *(int **)(this + 0xa5c);
  uStack_190 = 0x89;
  uStack_198 = 0x36073bac;
  (**(code **)(*piStack_194 + 200))();
  DAT_362c44c4 = 0;
  piStack_1a0 = *(int **)(this + 0xa5c);
  uStack_198 = 1;
  uStack_19c = 0x16;
  uStack_1a4 = 0x36073bc4;
  (**(code **)(*piStack_1a0 + 200))();
  uStack_1a4 = 4;
  DAT_362a4020 = 0x3d;
  apiStack_1cc[8] = *(int **)(this + 0xa5c);
  uStack_1a8 = 0x17;
  apiStack_1cc[7] = (int *)0x36073be1;
  (**(code **)(*apiStack_1cc[8] + 200))();
  apiStack_1cc[7] = (int *)0x2;
  DAT_362a401c = 0x2b;
  apiStack_1cc[5] = *(int **)(this + 0xa5c);
  apiStack_1cc[6] = (int *)0x13;
  apiStack_1cc[4] = (int *)0x36073bfe;
  (**(code **)(*apiStack_1cc[5] + 200))();
  apiStack_1cc[4] = (int *)0x2;
  DAT_362a4014 = 0x15;
  apiStack_1cc[2] = *(int **)(this + 0xa5c);
  apiStack_1cc[3] = (int *)0x14;
  apiStack_1cc[1] = (int *)0x36073c1c;
  (**(code **)(*apiStack_1cc[2] + 200))();
  apiStack_1cc[1] = (int *)0x0;
  DAT_362a4018 = 0x15;
  piStack_1d0 = *(int **)(this + 0xa5c);
  apiStack_1cc[0] = (int *)0x98;
  uStack_1d4 = 0x36073c37;
  (**(code **)(*piStack_1d0 + 200))();
  uStack_1d4 = 0;
  DAT_362c44c8 = 0;
  piStack_1dc = *(int **)(this + 0xa5c);
  uStack_1d8 = 0x8b;
  uStack_1e0 = 0x36073c52;
  (**(code **)(*piStack_1dc + 200))();
  iVar7 = 0;
  do {
    uStack_1e0 = 0;
    (&DAT_362c44e8)[iVar7] = 0;
    piStack_1e8 = *(int **)(this + 0xa5c);
    uStack_1ec = 0x36073c78;
    iStack_1e4 = iVar7;
    (**(code **)(*piStack_1e8 + 0xb8))();
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  piStack_1e8 = *(int **)(this + 0xa5c);
  uStack_1e0 = 7;
  iStack_1e4 = 0x19;
  uStack_1ec = 0x36073c91;
  (**(code **)(*piStack_1e8 + 200))();
  uStack_1ec = 0x80;
  (**(code **)(**(int **)(this + 0xa5c) + 200))(*(int **)(this + 0xa5c),0x18);
  ppiVar8 = apiStack_1cc;
  for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
    *ppiVar8 = (int *)0x0;
    ppiVar8 = ppiVar8 + 1;
  }
  apiStack_1cc[4] = (int *)0x3f800000;
  apiStack_1cc[0] = (int *)0x3f800000;
  apiStack_1cc[5] = (int *)0x3f800000;
  apiStack_1cc[1] = (int *)0x3f800000;
  apiStack_1cc[6] = (int *)0x3f800000;
  apiStack_1cc[2] = (int *)0x3f800000;
  apiStack_1cc[7] = (int *)0x3f800000;
  apiStack_1cc[3] = (int *)0x3f800000;
  (**(code **)(**(int **)(this + 0xa5c) + 0xa8))(*(int **)(this + 0xa5c),apiStack_1cc);
  DAT_362c44d4 = 0;
  _DAT_362c455c = 0;
  _DAT_362c4558 = 0;
  _DAT_362c4554 = 0;
  _DAT_362c4550 = 0;
  _DAT_362c454c = 0;
  _DAT_362c4548 = 0;
  DAT_362a4010 = 1;
  _DAT_362c44d8 = 0;
  _DAT_362c44dc = 0x3f800000;
  uStack_1ec = 0;
  piStack_1e8 = (int *)0x0;
  iStack_1e4 = 8;
  uStack_1e0 = 8;
  piStack_1dc = (int *)0x0;
  uStack_1d8 = 0x3f800000;
  (**(code **)(**(int **)(this + 0xa5c) + 0xa0))(*(int **)(this + 0xa5c),&uStack_1ec);
  (**(code **)(**(int **)(this + 0xa5c) + 0x1c))(*(int **)(this + 0xa5c),&uStack_198);
  uVar6 = *(uint *)(this + 0xa54);
  *(uint *)(this + 0xa54) = uVar6 & 0xfffffffb;
  if ((uVar6 & 0x200) != 0) {
    if (((uint)piStack_194 & 0x20000) == 0) {
      pcVar4 = Translate(s_ETRS_WARNING__Gamma__brightness_a_36228978,4);
      CPrintF(pcVar4);
    }
    else {
      (**(code **)(**(int **)(this + 0xa5c) + 0x4c))(*(int **)(this + 0xa5c),PTR_DAT_362a3f20);
      puVar2 = PTR_DAT_362a3f20;
      *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) | 4;
      iVar7 = 0;
      do {
        iVar1 = iVar7 * 2;
        iVar7 = iVar7 + 1;
        *(ushort *)(puVar2 + iVar7 * 2 + -2) = (ushort)(byte)puVar2[iVar1] << 8;
      } while (iVar7 < 0x300);
    }
  }
  uVar6 = *(uint *)(this + 0xa54);
  *(uint *)(this + 0xa54) = uVar6 & 0xfffffffe;
  if ((uStack_184 & 0x80000) != 0) {
    *(uint *)(this + 0xa54) = uVar6 & 0xfffffffe | 1;
  }
  *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) & 0xffffffef;
  bVar3 = FUN_36072c10();
  if ((CONCAT31(extraout_var,bVar3) != 0) ||
     (bVar3 = FUN_36072c10(), CONCAT31(extraout_var_00,bVar3) != 0)) {
    *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) | 0x10;
  }
  *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) & 0xfffffff7;
  bVar3 = FUN_36072c10();
  if (CONCAT31(extraout_var_01,bVar3) != 0) {
    *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) | 8;
  }
  *(undefined4 *)(this + 0xad4) = uVar9;
  uVar6 = *(uint *)(this + 0xa54);
  *(undefined4 *)(this + 0xaf8) = uStack_ec;
  *(uint *)(this + 0xa54) = uVar6 & 0xffffdfff;
  if ((char)uStack_180 < '\0') {
    *(uint *)(this + 0xa54) = uVar6 & 0xffffdfff | 0x2000;
  }
  uVar6 = *(uint *)(this + 0xa54);
  *(uint *)(this + 0xa54) = uVar6 & 0xffffefff;
  if (iStack_fc == 0) {
    pcVar4 = Translate(s_ETRSUser_clip_plane_not_supporte_362289c0,4);
    CPrintF(pcVar4);
  }
  else {
    *(uint *)(this + 0xa54) = uVar6 & 0xffffefff | 0x1000;
  }
  *(undefined4 *)(this + 0xae8) = 0;
  if (((uint)piStack_17c & 0x2000) != 0) {
    *(undefined4 *)(this + 0xae8) = 0x40800000;
  }
  *(undefined4 *)(this + 0xaec) = 1;
  if (((uint)piStack_17c & 0x20000) != 0) {
    *(undefined4 *)(this + 0xaec) = unaff_EBX;
  }
  uVar6 = *(uint *)(this + 0xa54);
  *(uint *)(this + 0xa54) = uVar6 & 0xffffbfff;
  if (((uint)piStack_17c & 0x4000) != 0) {
    *(uint *)(this + 0xa54) = uVar6 & 0xffffbfff | 0x4000;
  }
  uVar6 = *(uint *)(this + 0xa54);
  *(uint *)(this + 0xa54) = uVar6 & 0xffffffdf;
  if ((int)uStack_18c < 0) {
    if ((uStack_18c & 1) != 0) {
      *(uint *)(this + 0xa54) = uVar6 & 0xffffffdf | 0x20;
    }
  }
  else {
    pcVar4 = Translate(s_ETRS_Vertical_syncronization_can_36228a04,4);
    CPrintF(pcVar4);
  }
  uVar6 = *(uint *)(this + 0xa54);
  *(uint *)(this + 0xa54) = uVar6 & 0xffffff7f;
  if (((7 < uStack_e4) && (0x100 < uStack_dc)) && (0x5f < uStack_d8)) {
    *(uint *)(this + 0xa54) = uVar6 & 0xffffff7f | 0x80;
  }
  uVar6 = *(uint *)(this + 0xa54);
  *(uint *)(this + 0xa54) = uVar6 & 0xfffffeff;
  if ((0x100 < uStack_d4) && (_DAT_36223384 <= fStack_d0)) {
    *(uint *)(this + 0xa54) = uVar6 & 0xfffffeff | 0x100;
  }
  DAT_362a4030 = 0xffffffff;
  DAT_362c45e8 = 0;
  *(undefined4 *)(this + 0xaf4) = 0;
  *(undefined4 *)(this + 0xaf0) = 0;
  if ((uStack_184 & 0x1000000) != 0) {
    if (*(int *)(this + 0xab8) < 5) {
      pcVar4 = Translate(s_ETRSNot_enough_streams___N_Patch_36228a38,4);
      CPrintF(pcVar4);
    }
    else {
      *(undefined4 *)(this + 0xaf0) = 7;
      (**(code **)(**(int **)(this + 0xa5c) + 200))(*(int **)(this + 0xa5c),0xa3,0);
    }
  }
  *(undefined4 *)(this + 0xadc) = 1;
  *(int *)(this + 0xae0) = iStack_108;
  if (1 < iStack_108) {
    if ((bStack_110 & 5) == 0) {
      pcVar4 = Translate(s_ETRSTexture_operation_MODULATE2X_36228a70,4);
      CPrintF(pcVar4);
    }
    else if (*(int *)(this + 0xab8) < 5) {
      pcVar4 = Translate(s_ETRSNot_enough_streams___multi_t_36228abc,4);
      CPrintF(pcVar4);
    }
    else {
      iVar7 = *(int *)(this + 0xab8) + -3;
      if (iVar7 < iStack_108) {
        iStack_108 = iVar7;
      }
      if (3 < iStack_108) {
        iStack_108 = 4;
      }
      *(int *)(this + 0xadc) = iStack_108;
    }
  }
  iVar7 = 0;
  if (0 < *(int *)(this + 0xae0)) {
    do {
      (&DAT_362c4508)[iVar7] = 0;
      (&DAT_362c4528)[iVar7] = 1;
      (**(code **)(**(int **)(this + 0xa5c) + 0xf4))(*(int **)(this + 0xa5c),iVar7,0);
      (**(code **)(**(int **)(this + 0xa5c) + 0xfc))(*(int **)(this + 0xa5c),iVar7,1,1);
      (**(code **)(**(int **)(this + 0xa5c) + 0xfc))(*(int **)(this + 0xa5c),iVar7,4,4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(this + 0xae0));
  }
  _DAT_362c3b2c = 0;
  _DAT_362c3b64 = 0;
  DAT_362c3b34 = 0;
  DAT_362c3b38 = 0;
  DAT_362c3b4c = 0;
  _DAT_362c46fc = 0;
  DAT_362c4700 = 0;
  _DAT_362c4720 = 0;
  _DAT_362c4724 = 0;
  _DAT_362c4730 = 0;
  _DAT_362c472c = 0;
  iVar7 = (*(int *)(this + 0xab8) - *(int *)(this + 0xadc)) + -3;
  *(undefined4 *)(this + 0xab0) = 1;
  *(int *)(this + 0xab4) = *(int *)(this + 0xadc);
  while ((0 < iVar7 &&
         ((iVar1 = *(int *)(this + 0xab4), iVar1 != 6 || (*(int *)(this + 0xab0) != 6))))) {
    if (*(int *)(this + 0xab0) < iVar1) {
      *(int *)(this + 0xab0) = *(int *)(this + 0xab0) + 1;
    }
    else {
      *(int *)(this + 0xab4) = iVar1 + 1;
    }
    iVar7 = iVar7 + -1;
  }
  *(undefined4 *)(this + 0xaa4) = 0;
  *(undefined4 *)(this + 0xa68) = 0;
  *(undefined4 *)(this + 0xa6c) = 0;
  *(undefined4 *)(this + 0xa70) = 0;
  *(undefined4 *)(this + 0xa8c) = 0;
  *(undefined4 *)(this + 0xa74) = 0;
  *(undefined4 *)(this + 0xa90) = 0;
  *(undefined4 *)(this + 0xa78) = 0;
  *(undefined4 *)(this + 0xa94) = 0;
  *(undefined4 *)(this + 0xa7c) = 0;
  *(undefined4 *)(this + 0xa98) = 0;
  *(undefined4 *)(this + 0xa80) = 0;
  *(undefined4 *)(this + 0xa9c) = 0;
  *(undefined4 *)(this + 0xa84) = 0;
  *(undefined4 *)(this + 0xaa0) = 0;
  *(undefined4 *)(this + 0xa88) = 0;
  *(undefined4 *)(this + 0xaa8) = 0;
  *(undefined4 *)(this + 0xaac) = 0;
  uVar6 = DAT_362a40c0 + 3 & 0xfffffffc;
  if ((int)uVar6 < 0x40) {
    uVar6 = 0x40;
  }
  else if (0x1000 < (int)uVar6) {
    uVar6 = 0x1000;
  }
  DAT_362a40c0 = uVar6;
  uVar5 = FUN_36072c50(uVar6);
  DAT_362c4d88 = uVar6;
  FUN_360731a0(uVar5);
  FUN_36072de0(uVar5 * 2);
  FUN_360831b0();
  _tpGlobal = (CTexParams *)0x0;
  DAT_362c556c = 0;
  DAT_362c5578 = 0;
  DAT_362c5574 = 0;
  _DAT_362c557c = 0;
  _DAT_362c5580 = 0;
  _DAT_362c558c = 0;
  _DAT_362c5588 = 0;
  _DAT_362c5590 = 0;
  _DAT_362c5594 = 0;
  _DAT_362c55a0 = 0;
  _DAT_362c559c = 0;
  _DAT_362c55a4 = 0;
  _DAT_362c55a8 = 0;
  _DAT_362c55b4 = 0;
  _DAT_362c55b0 = 0;
  _DAT_362c55b8 = 0;
  _DAT_362c55bc = 0;
  _DAT_362c55c8 = 0;
  _DAT_362c55c4 = 0;
  _DAT_362c55cc = 0;
  _DAT_362c55d0 = 0;
  _DAT_362c55dc = 0;
  _DAT_362c55d8 = 0;
  _DAT_362c55e0 = 0;
  _DAT_362c55e4 = 0;
  _DAT_362c55f0 = 0;
  _DAT_362c55ec = 0;
  _DAT_362c55f4 = 0;
  _DAT_362c55f8 = 0;
  _DAT_362c5604 = 0;
  _DAT_362c5600 = 0;
  iVar7 = FUN_36074c00((undefined4 *)&DAT_362c3ce4);
  if (iVar7 != 0) {
    operator_delete__(DAT_362c3ce8);
    _DAT_362c3ce4 = 0;
    DAT_362c3ce8 = (void *)0x0;
    DAT_362c3cec = 0;
  }
  DAT_362c3c98 = 0;
  DAT_362c3ccc = 0;
  DAT_362c3ca8 = 0;
  _DAT_362c3cac = 0;
  DAT_362c3cb0 = 0;
  DAT_362c4560 = 0;
  FUN_3607b680((int *)&DAT_362a40d0,(int *)&DAT_362a40d4);
  FUN_3607b880((float *)&DAT_362a40d8);
  DAT_362c4d70 = AllocMemory(0x800);
  iVar7 = 0;
  do {
    *(int *)((int)DAT_362c4d70 + iVar7 * 4) = iVar7;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x200);
  DAT_362b8cfc = 1;
  *(undefined4 *)(this + 0xb30) = 0;
  FUN_36085350();
  FUN_36086760();
  FUN_360866c0();
  if (DAT_362c53b8 != 0) {
    FUN_360f2e60();
  }
  return;
}

