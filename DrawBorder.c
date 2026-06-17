
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::DrawBorder(long,long,long,long,unsigned long,unsigned
   long)const  */

void __thiscall
CDrawPort::DrawBorder
          (CDrawPort *this,long param_1,long param_2,long param_3,long param_4,ulong param_5,
          ulong param_6)

{
  int iVar1;
  float fVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int iStack_cc;
  float fStack_c8;
  int iStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
                    /* 0x65df0  1527  ?DrawBorder@CDrawPort@@QBEXJJJJKK@Z */
  iVar1 = *(int *)(_pGfx + 0xa38);
  (*DAT_362c4624)();
  (*DAT_362c461c)();
  (*DAT_362c4628)();
  (*DAT_362c4600)();
  (*DAT_362c4648)(0x1b,0x1c);
  (*DAT_362c46ac)();
  if (param_6 == 0xffffffff) {
    (*DAT_362c4634)();
    fStack_d0 = 0.0;
  }
  else {
    fStack_dc = 1.4013e-44;
    uStack_e0 = 1;
    FUN_3607ac30(&iStack_c4,&iStack_cc);
    FUN_3607b680((int *)&fStack_dc,(int *)&uStack_e0);
    FUN_3607bfa0(param_6);
    uStack_e0 = param_4;
    if (param_4 <= param_3) {
      uStack_e0 = param_3;
    }
    fStack_d0 = (float)(int)uStack_e0 * _DAT_362287e4;
  }
  fStack_c8 = _DAT_36227cf0 + (float)param_1;
  fStack_d4 = _DAT_36227cf0 + (float)param_2;
  fStack_d8 = ((float)param_1 - _DAT_36227cf0) + (float)param_3;
  fStack_dc = ((float)param_2 - _DAT_36227cf0) + (float)param_4;
  if (iVar1 == 0) {
    uStack_e0 = param_5 >> 0x18 | (param_5 & 0xff0000) >> 8 | (param_5 & 0xff00) << 8 |
                param_5 << 0x18;
    (*DAT_362c3f98)(&uStack_e0);
    fVar5 = 1.4013e-45;
    (*DAT_362c3e6c)(1);
    (*DAT_362c3fb8)(0,0);
    fVar2 = fStack_d8;
    (*DAT_362c3e78)(fStack_d8,unaff_ESI);
    (*DAT_362c3fb8)(unaff_EDI,0);
    (*DAT_362c3e78)(fVar5,unaff_ESI);
    fVar4 = 0.0;
    (*DAT_362c3fb8)(0,0);
    (*DAT_362c3e78)(fVar5,unaff_ESI);
    (*DAT_362c3fb8)(unaff_EDI,0);
    (*DAT_362c3e78)(fVar5,fVar4);
    (*DAT_362c3fb8)(0,0);
    fVar3 = fVar4;
    (*DAT_362c3e78)(fVar2,fVar4);
    (*DAT_362c3fb8)(unaff_EDI,0);
    (*DAT_362c3e78)(fVar5 + _DAT_36223384,fVar4);
    (*DAT_362c3fb8)(0,0);
    (*DAT_362c3e78)(fVar2,fVar3 + _DAT_36223384);
    (*DAT_362c3fb8)(unaff_EDI,0);
    (*DAT_362c3e78)(fVar2,fVar4);
    (*DAT_362c3e70)();
  }
  else if (iVar1 == 1) {
    uStack_e0 = param_5 >> 8 | param_5 << 0x18;
    fStack_48 = fStack_d8 + _DAT_36223384;
    fStack_2c = fStack_d4 + _DAT_36223384;
    fStack_98 = fStack_d0;
    fStack_68 = fStack_d0;
    fStack_38 = fStack_d0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a0 = 0;
    uStack_94 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_70 = 0;
    uStack_64 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_40 = 0;
    uStack_34 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_10 = 0;
    fStack_8 = fStack_d0;
    uStack_4 = 0;
    fStack_c0 = fStack_c8;
    fStack_bc = fStack_d4;
    uStack_b4 = uStack_e0;
    fStack_a8 = fStack_d8;
    fStack_a4 = fStack_d4;
    uStack_9c = uStack_e0;
    fStack_90 = fStack_d8;
    fStack_8c = fStack_d4;
    uStack_84 = uStack_e0;
    fStack_78 = fStack_d8;
    fStack_74 = fStack_dc;
    uStack_6c = uStack_e0;
    fStack_60 = fStack_c8;
    fStack_5c = fStack_dc;
    uStack_54 = uStack_e0;
    fStack_44 = fStack_dc;
    uStack_3c = uStack_e0;
    fStack_30 = fStack_c8;
    uStack_24 = uStack_e0;
    fStack_18 = fStack_c8;
    fStack_14 = fStack_dc;
    uStack_c = uStack_e0;
    FUN_3607b2c0(0x142);
    (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x120))(*(int **)(_pGfx + 0xa5c),2,4,&fStack_c0,0x18);
  }
  if (param_6 != 0xffffffff) {
    FUN_3607b680(&iStack_c4,&iStack_cc);
  }
  return;
}

