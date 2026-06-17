
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::DrawLine(long,long,long,long,unsigned long,unsigned long)const
    */

void __thiscall
CDrawPort::DrawLine(CDrawPort *this,long param_1,long param_2,long param_3,long param_4,
                   ulong param_5,ulong param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 unaff_retaddr;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  uint uStack_c;
  ulong uStack_8;
  undefined4 uStack_4;
  
                    /* 0x65a80  1530  ?DrawLine@CDrawPort@@QBEXJJJJKK@Z */
  iVar1 = *(int *)(_pGfx + 0xa38);
  (*DAT_362c4624)();
  (*DAT_362c461c)();
  (*DAT_362c4628)();
  (*DAT_362c4600)();
  (*DAT_362c4648)(0x1b,0x1c);
  uVar2 = param_6;
  if (param_6 == 0xffffffff) {
    (*DAT_362c4634)();
    param_6 = 0;
  }
  else {
    uStack_34 = 10;
    param_6 = 1;
    FUN_3607ac30(&iStack_38,&iStack_3c);
    FUN_3607b680((int *)&uStack_34,(int *)&param_6);
    FUN_3607bfa0(uVar2);
    uVar4 = param_1 - param_3 >> 0x1f;
    uVar3 = (param_1 - param_3 ^ uVar4) - uVar4;
    uVar4 = param_2 - param_4 >> 0x1f;
    param_6 = (param_2 - param_4 ^ uVar4) - uVar4;
    if ((int)param_6 <= (int)uVar3) {
      param_6 = uVar3;
    }
    param_6 = (ulong)((float)(int)param_6 * _DAT_362287e4);
  }
  if (iVar1 == 0) {
    param_5 = param_5 >> 0x18 | (param_5 & 0xff0000) >> 8 | (param_5 & 0xff00) << 8 |
              param_5 << 0x18;
    (*DAT_362c3f98)(&param_5);
    (*DAT_362c3e6c)(1);
    (*DAT_362c3fb8)(0,0);
    (*DAT_362c3e78)((float)(int)uStack_c + _DAT_36227cf0,(float)(int)uStack_8 + _DAT_36227cf0);
    (*DAT_362c3fb8)(unaff_retaddr,0);
    (*DAT_362c3e78)((float)(int)fStack_14 + _DAT_36227cf0,(float)iStack_10 + _DAT_36227cf0);
    (*DAT_362c3e70)();
  }
  else if (iVar1 == 1) {
    uStack_34 = param_5 >> 8 | param_5 << 0x18;
    fStack_30 = (float)param_1 + _DAT_362287e0;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    iStack_10 = 0;
    fStack_2c = (float)param_2 + _DAT_362287e0;
    uStack_8 = param_6;
    uStack_4 = 0;
    fStack_18 = (float)param_3 + _DAT_362287e0;
    fStack_14 = (float)param_4 + _DAT_362287e0;
    uStack_24 = uStack_34;
    uStack_c = uStack_34;
    FUN_3607b2c0(0x142);
    (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x120))(*(int **)(_pGfx + 0xa5c),2,1,&fStack_30,0x18);
  }
  if (uVar2 != 0xffffffff) {
    FUN_3607b680(&iStack_38,&iStack_3c);
  }
  return;
}

