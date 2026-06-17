
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_3619b1c0(int param_1)

{
  LPCSTR lpString2;
  int iVar1;
  xEncryptMemory *pxVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  float local_2d90;
  undefined1 local_2d8c [7];
  byte local_2d85;
  undefined4 local_2d84;
  undefined4 local_2d80;
  int local_2d7c [3];
  CHAR aCStack_2d70 [4];
  CHAR aCStack_2d6c [20];
  uint auStack_2d58 [2];
  undefined1 auStack_2d50 [4];
  uint uStack_2d4c;
  uint auStack_2d48 [31];
  undefined1 auStack_2ccc [4];
  uint auStack_2cc8 [192];
  undefined1 auStack_29c8 [104];
  uint auStack_2960 [1327];
  undefined2 local_14a4 [216];
  undefined1 auStack_12f4 [36];
  undefined2 local_12d0 [4];
  uint local_12c8 [3];
  uint local_12bc [3];
  uint local_12b0 [1184];
  void *pvStack_30;
  uint uStack_28;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b2f4;
  pvStack_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &pvStack_c;
  _eh_vector_constructor_iterator_(local_2d7c,0x424,6,FUN_3601ae90,FUN_36019680);
  uVar8 = 0;
  local_4 = 0;
  _eh_vector_constructor_iterator_(local_12d0,0x28,0x78,FUN_3601adb0,FUN_36019530);
  uVar13 = 4;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_2d85 = 4;
  uVar9 = uVar8;
  if (4 < DAT_36381b1c) {
    do {
      iVar7 = uVar13 * 0x424;
      iVar1 = *(int *)((uVar9 & 0xffff) + param_1);
      uVar8 = uVar9 + 4;
      local_2d7c[uVar13 * 0x109] = iVar1;
      bVar6 = (byte)uVar13;
      if (iVar1 != 0) {
        lpString2 = (LPCSTR)((uVar8 & 0xffff) + param_1);
        lstrcpyA(aCStack_2d6c + iVar7,lpString2);
        iVar1 = lstrlenA(lpString2);
        uVar9 = uVar9 + 5 + iVar1;
        local_2d7c[uVar13 * 0x109 + 1] = *(int *)((uVar9 & 0xffff) + param_1);
        local_2d7c[uVar13 * 0x109 + 2] = *(int *)((uVar9 + 4 & 0xffff) + param_1);
        *(undefined4 *)(aCStack_2d6c + iVar7 + -4) = *(undefined4 *)((uVar9 + 8 & 0xffff) + param_1)
        ;
        auStack_2ccc[iVar7] = *(undefined1 *)((uVar9 + 0xc & 0xffff) + param_1);
        auStack_2cc8[uVar13 * 0x109] = *(uint *)((uVar9 + 0xd & 0xffff) + param_1);
        auStack_2cc8[uVar13 * 0x109 + 1] = *(uint *)((uVar9 + 0x11 & 0xffff) + param_1);
        local_2d8c[0] = *(undefined1 *)((uVar9 + 0x15 & 0xffff) + param_1);
        uVar8 = auStack_2d58[uVar13 * 0x109];
        uVar12 = 1;
        puVar4 = local_2d8c;
        pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar2,uVar8,(int)puVar4,uVar12);
        auStack_2d50[iVar7] = *(undefined1 *)((uVar9 + 0x16 & 0xffff) + param_1);
        auStack_2d50[iVar7 + 1] = *(undefined1 *)((uVar9 + 0x17 & 0xffff) + param_1);
        auStack_2d48[uVar13 * 0x109 + -1] = *(uint *)((uVar9 + 0x18 & 0xffff) + param_1);
        *(undefined2 *)(auStack_2d48 + uVar13 * 0x109) =
             *(undefined2 *)((uVar9 + 0x1c & 0xffff) + param_1);
        uVar8 = auStack_2d48[uVar13 * 0x109 + 2];
        uVar12 = 1;
        local_2d90 = (float)*(ushort *)((uVar9 + 0x1e & 0xffff) + param_1);
        pfVar10 = &local_2d90;
        pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar2,uVar8,(int)pfVar10,uVar12);
        local_2d90 = (float)*(ushort *)((uVar9 + 0x20 & 0xffff) + param_1);
        uVar8 = auStack_2d48[uVar13 * 0x109 + 5];
        uVar12 = 1;
        pfVar10 = &local_2d90;
        pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar2,uVar8,(int)pfVar10,uVar12);
        uVar8 = auStack_2d48[uVar13 * 0x109 + 8];
        uVar12 = 1;
        local_2d90 = (float)*(ushort *)((uVar9 + 0x22 & 0xffff) + param_1);
        pfVar10 = &local_2d90;
        pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar2,uVar8,(int)pfVar10,uVar12);
        uVar8 = auStack_2d48[uVar13 * 0x109 + 0xb];
        uVar12 = 1;
        local_2d90 = (float)*(ushort *)((uVar9 + 0x24 & 0xffff) + param_1);
        pfVar10 = &local_2d90;
        pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar2,uVar8,(int)pfVar10,uVar12);
        uVar8 = auStack_2d48[uVar13 * 0x109 + 0xe];
        uVar12 = 1;
        local_2d90 = (float)*(ushort *)((uVar9 + 0x26 & 0xffff) + param_1);
        pfVar10 = &local_2d90;
        pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar2,uVar8,(int)pfVar10,uVar12);
        uVar8 = *(uint *)(auStack_2ccc + iVar7 + -0x38);
        uVar12 = 1;
        local_2d90 = (float)*(ushort *)((uVar9 + 0x28 & 0xffff) + param_1);
        pfVar10 = &local_2d90;
        pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar2,uVar8,(int)pfVar10,uVar12);
        uVar8 = *(uint *)(auStack_2ccc + iVar7 + -0x2c);
        uVar12 = 1;
        local_2d90 = (float)*(ushort *)((uVar9 + 0x2a & 0xffff) + param_1);
        pfVar10 = &local_2d90;
        pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar2,uVar8,(int)pfVar10,uVar12);
        uVar8 = *(uint *)(auStack_2ccc + iVar7 + -0x20);
        uVar12 = 1;
        local_2d90 = (float)*(ushort *)((uVar9 + 0x2c & 0xffff) + param_1);
        pfVar10 = &local_2d90;
        pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar2,uVar8,(int)pfVar10,uVar12);
        uVar8 = *(uint *)(auStack_2ccc + iVar7 + -0x14);
        uVar12 = 1;
        local_2d90 = (float)*(ushort *)((uVar9 + 0x2e & 0xffff) + param_1);
        pfVar10 = &local_2d90;
        pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar2,uVar8,(int)pfVar10,uVar12);
        uVar8 = *(uint *)(auStack_2ccc + iVar7 + -8);
        uVar12 = 1;
        local_2d90 = (float)*(ushort *)((uVar9 + 0x30 & 0xffff) + param_1);
        pfVar10 = &local_2d90;
        uVar9 = uVar9 + 0x32;
        pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar2,uVar8,(int)pfVar10,uVar12);
        puVar3 = auStack_2cc8 + uVar13 * 0x109 + 2;
        iVar1 = 0x13;
        do {
          *(undefined2 *)puVar3 = *(undefined2 *)((uVar9 & 0xffff) + param_1);
          uVar9 = uVar9 + 2;
          puVar3 = puVar3 + 10;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        puVar3 = auStack_2cc8 + uVar13 * 0x109 + 4;
        local_2d90 = 2.66247e-44;
        do {
          uVar8 = *puVar3;
          local_2d8c[0] = *(undefined1 *)((uVar9 & 0xffff) + param_1);
          uVar12 = 1;
          puVar4 = local_2d8c;
          uVar9 = uVar9 + 1;
          pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
          FUN_3600ce60(pxVar2,uVar8,(int)puVar4,uVar12);
          puVar3 = puVar3 + 10;
          local_2d90 = (float)((int)local_2d90 + -1);
        } while (local_2d90 != 0.0);
        puVar3 = auStack_2cc8 + uVar13 * 0x109 + 7;
        local_2d90 = 2.66247e-44;
        do {
          uVar8 = *puVar3;
          local_2d84 = *(undefined4 *)((uVar9 & 0xffff) + param_1);
          uVar12 = 1;
          puVar11 = &local_2d84;
          uVar9 = uVar9 + 4;
          pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
          FUN_3600ce60(pxVar2,uVar8,(int)puVar11,uVar12);
          puVar3 = puVar3 + 10;
          local_2d90 = (float)((int)local_2d90 + -1);
        } while (local_2d90 != 0.0);
        puVar3 = auStack_2cc8 + uVar13 * 0x109 + 10;
        local_2d90 = 2.66247e-44;
        do {
          uVar8 = *puVar3;
          local_2d84 = *(undefined4 *)((uVar9 & 0xffff) + param_1);
          uVar12 = 1;
          puVar11 = &local_2d84;
          uVar9 = uVar9 + 4;
          pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
          FUN_3600ce60(pxVar2,uVar8,(int)puVar11,uVar12);
          puVar3 = puVar3 + 10;
          local_2d90 = (float)((int)local_2d90 + -1);
        } while (local_2d90 != 0.0);
        puVar4 = auStack_29c8 + iVar7;
        iVar1 = 100;
        do {
          uVar8 = uVar9;
          *puVar4 = *(undefined1 *)((uVar8 & 0xffff) + param_1);
          puVar4 = puVar4 + 1;
          iVar1 = iVar1 + -1;
          uVar9 = uVar8 + 1;
        } while (iVar1 != 0);
        uVar9 = auStack_2960[uVar13 * 0x109];
        local_2d8c[0] = *(undefined1 *)((uVar8 + 1 & 0xffff) + param_1);
        uVar13 = 1;
        puVar4 = local_2d8c;
        uVar8 = uVar8 + 2;
        pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
        FUN_3600ce60(pxVar2,uVar9,(int)puVar4,uVar13);
        bVar6 = local_2d85;
      }
      local_2d85 = bVar6 + 1;
      uVar13 = (uint)local_2d85;
      uVar9 = uVar8;
    } while (local_2d85 < DAT_36381b1c);
  }
  bVar6 = *(byte *)((uVar8 & 0xffff) + param_1);
  uVar8 = uVar8 + 1;
  local_2d80 = CONCAT31(local_2d80._1_3_,bVar6);
  if (bVar6 != 0) {
    puVar5 = local_14a4;
    uVar9 = (uint)bVar6;
    do {
      *puVar5 = *(undefined2 *)((uVar8 & 0xffff) + param_1);
      uVar8 = uVar8 + 2;
      puVar5 = puVar5 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  local_2d90 = (float)CONCAT31(local_2d90._1_3_,*(undefined1 *)((uVar8 & 0xffff) + param_1));
  uVar8 = uVar8 + 1;
  puVar5 = local_12d0;
  iVar1 = 0x78;
  do {
    *puVar5 = *(undefined2 *)((uVar8 & 0xffff) + param_1);
    uVar8 = uVar8 + 2;
    puVar5 = puVar5 + 0x14;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar3 = local_12c8;
  iVar1 = 0x78;
  do {
    uVar9 = *puVar3;
    local_2d8c[0] = *(undefined1 *)((uVar8 & 0xffff) + param_1);
    uVar13 = 1;
    puVar4 = local_2d8c;
    uVar8 = uVar8 + 1;
    pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
    FUN_3600ce60(pxVar2,uVar9,(int)puVar4,uVar13);
    puVar3 = puVar3 + 10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar3 = local_12bc;
  iVar1 = 0x78;
  do {
    uVar9 = *puVar3;
    local_2d84 = *(undefined4 *)((uVar8 & 0xffff) + param_1);
    uVar13 = 1;
    puVar11 = &local_2d84;
    uVar8 = uVar8 + 4;
    pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
    FUN_3600ce60(pxVar2,uVar9,(int)puVar11,uVar13);
    puVar3 = puVar3 + 10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar3 = local_12b0;
  iVar1 = 0x78;
  do {
    uVar9 = uVar8;
    uVar8 = *puVar3;
    local_2d84 = *(undefined4 *)((uVar9 & 0xffff) + param_1);
    uVar13 = 1;
    puVar11 = &local_2d84;
    pxVar2 = Xenesis2::Foundation::Memory::theEncryptMemory();
    FUN_3600ce60(pxVar2,uVar8,(int)puVar11,uVar13);
    puVar3 = puVar3 + 10;
    iVar1 = iVar1 + -1;
    uVar8 = uVar9 + 4;
  } while (iVar1 != 0);
  local_2d84 = CONCAT31(local_2d84._1_3_,*(undefined1 *)((uVar9 + 0xc & 0xffff) + param_1));
  (**(code **)(*DAT_3637fb00 + 0x188))
            (local_2d7c,local_2d80,local_14a4,local_2d90,
             *(undefined4 *)((uVar9 + 8 & 0xffff) + param_1),local_12d0,
             *(undefined4 *)((uVar9 + 4 & 0xffff) + param_1),local_2d84,
             *(undefined4 *)((uVar9 + 0xd & 0xffff) + param_1));
  uStack_28 = uStack_28 & 0xffffff00;
  _eh_vector_destructor_iterator_(auStack_12f4,0x28,0x78,FUN_36019530);
  uStack_28 = 0xffffffff;
  _eh_vector_destructor_iterator_(&stack0xffffd260,0x424,6,FUN_36019680);
  ExceptionList = pvStack_30;
  return;
}

