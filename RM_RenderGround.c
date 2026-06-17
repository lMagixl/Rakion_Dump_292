
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl RM_RenderGround(class CTextureObject &) */

void __cdecl RM_RenderGround(CTextureObject *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CTextureObject *pCStack_40;
  CTextureObject *pCStack_3c;
  CTextureObject *pCStack_38;
  CTextureObject *pCStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined4 local_4;
  
                    /* 0x163470  2925  ?RM_RenderGround@@YAXAAVCTextureObject@@@Z */
  local_4 = DAT_362abd90;
  (*DAT_362c45f8)();
  (*DAT_362c45f0)();
  (*DAT_362c4628)();
  (*DAT_362c462c)();
  (*DAT_362c4654)(0x3d);
  CTextureData::SetAsCurrent(*(CTextureData **)(param_1 + 0x14),0,0);
  fStack_70 = 45.0;
  fStack_6c = 0.0;
  fStack_68 = -45.0;
  fStack_64 = -45.0;
  fStack_60 = 0.0;
  fStack_5c = -45.0;
  fStack_58 = -45.0;
  fStack_54 = 0.0;
  fStack_50 = 45.0;
  fStack_4c = 45.0;
  fStack_48 = 0.0;
  fStack_44 = 45.0;
  FUN_360605c0(&param_1,0xffffffff);
  pCStack_40 = param_1;
  FUN_360605c0(&param_1,0xffffffff);
  pCStack_3c = param_1;
  FUN_360605c0(&param_1,0xffffffff);
  pCStack_38 = param_1;
  FUN_360605c0(&param_1,0xffffffff);
  fVar3 = _DAT_362fe0f0 * fStack_68;
  pCStack_34 = param_1;
  uStack_30 = 0x42340000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x42340000;
  uStack_18 = 0x42340000;
  uStack_14 = 0x42340000;
  uStack_10 = 0;
  uStack_e = 2;
  uStack_c = 1;
  uStack_a = 0;
  uStack_8 = 3;
  uStack_6 = 2;
  fVar1 = fStack_70 * _DAT_362fe0f8;
  fVar2 = _DAT_362fe100 * fStack_68;
  fStack_68 = _DAT_362fe110 * fStack_68 + _DAT_362fe108 * fStack_70 + _DAT_362fe10c * fStack_6c +
              _DAT_362fe114;
  fVar6 = _DAT_362fe0f0 * fStack_5c;
  fVar4 = fStack_64 * _DAT_362fe0f8;
  fVar5 = _DAT_362fe100 * fStack_5c;
  fStack_5c = _DAT_362fe110 * fStack_5c + _DAT_362fe108 * fStack_64 + _DAT_362fe10c * fStack_60 +
              _DAT_362fe114;
  fVar9 = _DAT_362fe0f0 * fStack_50;
  fVar7 = fStack_58 * _DAT_362fe0f8;
  fVar8 = _DAT_362fe100 * fStack_50;
  fStack_50 = _DAT_362fe110 * fStack_50 + _DAT_362fe108 * fStack_58 + _DAT_362fe10c * fStack_54 +
              _DAT_362fe114;
  fVar12 = _DAT_362fe0f0 * fStack_44;
  fVar10 = fStack_4c * _DAT_362fe0f8;
  fVar11 = _DAT_362fe100 * fStack_44;
  fStack_44 = _DAT_362fe110 * fStack_44 + _DAT_362fe108 * fStack_4c + _DAT_362fe10c * fStack_48 +
              _DAT_362fe114;
  fStack_70 = _DAT_362fe0e8 * fStack_70 + _DAT_362fe0ec * fStack_6c + fVar3 + _DAT_362fe0f4;
  fStack_6c = _DAT_362fe0fc * fStack_6c + fVar2 + fVar1 + _DAT_362fe104;
  fStack_64 = _DAT_362fe0e8 * fStack_64 + _DAT_362fe0ec * fStack_60 + fVar6 + _DAT_362fe0f4;
  fStack_60 = _DAT_362fe0fc * fStack_60 + fVar5 + fVar4 + _DAT_362fe104;
  fStack_58 = _DAT_362fe0e8 * fStack_58 + _DAT_362fe0ec * fStack_54 + fVar9 + _DAT_362fe0f4;
  fStack_54 = _DAT_362fe0fc * fStack_54 + fVar8 + fVar7 + _DAT_362fe104;
  fStack_4c = _DAT_362fe0e8 * fStack_4c + _DAT_362fe0ec * fStack_48 + fVar12 + _DAT_362fe0f4;
  fStack_48 = _DAT_362fe0fc * fStack_48 + fVar11 + fVar10 + _DAT_362fe104;
  (*DAT_362c4690)(&fStack_70,4);
  (*DAT_362c469c)(&uStack_30,0);
  (*DAT_362c46a0)(&pCStack_40);
  (*DAT_362c46a4)(6,&uStack_10);
  return;
}

