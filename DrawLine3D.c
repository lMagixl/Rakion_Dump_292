
/* public: void __thiscall CDrawPort::DrawLine3D(class Vector<float,3>,class
   Vector<float,3>,unsigned long)const  */

void __thiscall
CDrawPort::DrawLine3D
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  int iVar1;
  undefined4 unaff_retaddr;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x65cb0  1529  ?DrawLine3D@CDrawPort@@QBEXV?$Vector@M$02@@0K@Z */
  iVar1 = *(int *)(_pGfx + 0xa38);
  (*DAT_362c4634)();
  (*DAT_362c461c)();
  (*DAT_362c4628)();
  (*DAT_362c4600)();
  (*DAT_362c4648)(0x1b,0x1c);
  (*DAT_362c46ac)();
  if (iVar1 == 0) {
    param_8 = param_8 >> 0x18 | (param_8 & 0xff0000) >> 8 | (param_8 & 0xff00) << 8 |
              param_8 << 0x18;
    (*DAT_362c3f98)(&param_8);
    (*DAT_362c3e6c)(1);
    (*DAT_362c3e88)(uStack_4,unaff_retaddr,param_2);
    (*DAT_362c3e88)(uStack_4,unaff_retaddr,param_2);
    (*DAT_362c3e70)();
    return;
  }
  if (iVar1 == 1) {
    uStack_24 = param_8 >> 8 | param_8 << 0x18;
    uStack_2c = param_3;
    uStack_30 = param_2;
    uStack_28 = param_4;
    uStack_18 = param_5;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_14 = param_6;
    uStack_10 = param_7;
    uStack_8 = 0;
    uStack_4 = 0;
    uStack_c = uStack_24;
    FUN_3607b2c0(0x142);
    (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x120))(*(int **)(_pGfx + 0xa5c),2,1,&uStack_30,0x18);
  }
  return;
}

