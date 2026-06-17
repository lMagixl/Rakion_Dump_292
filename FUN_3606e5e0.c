
void __cdecl FUN_3606e5e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  CShadowMap *this;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  if ((DAT_362a4174 / 100 + (DAT_362a4174 >> 0x1f) == DAT_362a4174 >> 0x1f) && (DAT_362cce78 == 0))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar6 = DAT_362a4174 / 10;
  iVar9 = DAT_362a4174 % 10;
  DAT_362a4174 = 0;
  iVar6 = iVar6 % 10;
  if (bVar2) {
    DAT_362a4174 = 100;
  }
  if (iVar6 != 0) {
    DAT_362a4174 = DAT_362a4174 + 10;
  }
  if (iVar9 != 0) {
    DAT_362a4174 = DAT_362a4174 + 1;
  }
  if ((bVar2) && (DAT_362a416c != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((iVar6 == 0) || (bVar3 = true, DAT_362a416c == 0)) {
    bVar3 = false;
  }
  if ((iVar9 == 0) || (bVar4 = true, DAT_362a416c == 0)) {
    bVar4 = false;
  }
  puVar12 = &DAT_362c1a68;
  for (iVar6 = 0x800; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  puVar12 = &DAT_362bfa68;
  for (iVar6 = 0x800; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  DAT_362c3a6c = 0xf;
  do {
    puVar12 = param_1;
    if (puVar12 == (undefined4 *)0x0) {
      iVar6 = 0x1f;
      if (DAT_362c3a6c != 0) {
        for (; DAT_362c3a6c >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      DAT_362c3a6c = 2 << ((byte)iVar6 & 0x1f);
      DAT_362bfa4c = 0;
      return;
    }
    puVar1 = (undefined4 *)*puVar12;
    uVar10 = 0;
    if ((puVar12[0x2e] == 0) || (!bVar2)) {
      uVar10 = 0x10;
      DAT_362c3a6c = DAT_362c3a6c | 0x10;
    }
    else {
      bVar5 = FUN_3606e3f0();
      if (CONCAT31(extraout_var,bVar5) == 0) {
        uVar10 = 1;
      }
    }
    if (((puVar12[0x2f] != 0) && (bVar3)) &&
       (bVar5 = FUN_3606e3f0(), CONCAT31(extraout_var_00,bVar5) == 0)) {
      if ((*(byte *)((int)puVar12 + 0xb5) & 8) == 0) {
        uVar10 = uVar10 | 2;
      }
      else {
        DAT_362c3a6c = DAT_362c3a6c | 0x20;
        uVar10 = uVar10 | 0x20;
      }
    }
    if (((puVar12[0x30] != 0) && (bVar4)) &&
       (bVar5 = FUN_3606e3f0(), CONCAT31(extraout_var_01,bVar5) == 0)) {
      if ((*(byte *)((int)puVar12 + 0xb6) & 8) == 0) {
        uVar10 = uVar10 | 4;
      }
      else {
        DAT_362c3a6c = DAT_362c3a6c | 0x40;
        uVar10 = uVar10 | 0x40;
      }
    }
    this = (CShadowMap *)puVar12[0x31];
    if ((this != (CShadowMap *)0x0) && (DAT_362a4168 != 0)) {
      CShadowMap::Prepare(this);
      if ((*(CShadowMap **)(this + 0x30) == this + 0x1c) &&
         ((*(int *)(this + 0x34) == 0 || (((byte)this[0x10] & 2) != 0)))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      uVar11 = *(uint *)(this + 0x1c);
      if ((((uVar10 & 0x10) == 0) &&
          (((uVar10 & 2) == 0 || ((*(byte *)((int)puVar12 + 0xb5) & 0x70) == 0x30)))) &&
         (((uVar10 & 4) == 0 || ((*(byte *)((int)puVar12 + 0xb6) & 0x70) == 0x30)))) {
        uVar7 = uVar11 & 0x80808000;
      }
      else {
        uVar7 = 1;
      }
      if (bVar5) {
        if ((uVar7 == 0) || (DAT_362c53bc == 1)) {
          if (DAT_362c53c0 == 0) {
            if (uVar7 == 0) {
              uVar11 = uVar11 << 1;
            }
            else {
              uVar7 = (uVar11 >> 0x18) * 2;
              if (0xff < uVar7) {
                uVar7 = 0xff;
              }
              param_1 = (undefined4 *)((uVar11 >> 0x10 & 0xff) * 2);
              if ((undefined4 *)0xff < param_1) {
                param_1 = (undefined4 *)0xff;
              }
              uVar11 = (uVar11 >> 8 & 0xff) * 2;
              if (0xff < uVar11) {
                uVar11 = 0xff;
              }
              uVar11 = ((uint)CONCAT11((char)uVar7,param_1._0_1_) << 8 | uVar11 & 0xff) << 8;
            }
          }
          else {
            uVar11 = 0xbf00bf00;
          }
          uVar8 = puVar12[0x2c];
          if (puVar12[0x29] == 0xffffffff) {
LAB_3606e8e0:
            puVar12[0x29] = uVar8;
          }
          else if (uVar8 != 0xffffffff) {
            uVar8 = MulColors(puVar12[0x29],uVar8);
            goto LAB_3606e8e0;
          }
          if (puVar12[0x29] == 0xffffffff) {
            puVar12[0x29] = uVar11 | 0xff;
            CShadowMap::MarkDrawn(this);
          }
          else {
            uVar8 = MulColors(puVar12[0x29],uVar11 | 0xff);
            puVar12[0x29] = uVar8;
            CShadowMap::MarkDrawn(this);
          }
          goto LAB_3606e930;
        }
        if (DAT_362c53c0 != 0) {
          uVar11 = 0xbf00;
        }
        if (puVar12[0x2c] == 0xffffffff) {
          puVar12[0x2c] = uVar11;
        }
        else {
          uVar8 = MulColors(puVar12[0x2c],uVar11);
          puVar12[0x2c] = uVar8;
        }
      }
      else {
        FUN_3606e3f0();
      }
      uVar10 = uVar10 | 8;
    }
LAB_3606e930:
    if ((puVar12[0x34] & 0x200) != 0) {
      DAT_362c3a6c = DAT_362c3a6c | 0x80;
      uVar10 = uVar10 | 0x80;
    }
    if ((puVar12[0x34] & 0x400) != 0) {
      DAT_362c3a6c = DAT_362c3a6c | 0x100;
      uVar10 = uVar10 | 0x100;
    }
    if ((*(byte *)(puVar12 + 0x34) & 1) != 0) {
      DAT_362c3a6c = DAT_362c3a6c | 0x200;
      uVar10 = uVar10 | 0x200;
    }
    if ((*(byte *)(puVar12 + 0x34) & 2) != 0) {
      DAT_362c3a6c = DAT_362c3a6c | 0x400;
      uVar10 = uVar10 | 0x400;
    }
    param_1 = puVar1;
    if (uVar10 != 0) {
      *puVar12 = (&DAT_362c1a68)[uVar10];
      (&DAT_362c1a68)[uVar10] = puVar12;
      (&DAT_362bfa68)[uVar10] = (&DAT_362bfa68)[uVar10] + puVar12[2];
    }
  } while( true );
}

