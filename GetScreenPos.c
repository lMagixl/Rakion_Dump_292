
/* struct tagPOINT __cdecl GetScreenPos(class Vector<float,3> const &,class Vector<float,3> const
   &,class Vector<float,3> const &) */

tagPOINT __cdecl
GetScreenPos(Vector<float,3> *param_1,Vector<float,3> *param_2,Vector<float,3> *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  tagPOINT tVar5;
  float *unaff_retaddr;
  undefined1 *puStack_120;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float afStack_108 [4];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float afStack_cc [19];
  undefined1 local_80 [52];
  undefined4 auStack_4c [17];
  undefined4 *puStack_8;
  float *pfStack_4;
  
                    /* 0x86060  2089  ?GetScreenPos@@YA?AUtagPOINT@@ABV?$Vector@M$02@@00@Z */
  puStack_120 = local_80;
  (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x98))(*(int **)(_pGfx + 0xa5c),0x100);
  afStack_108[3] = (float)*puStack_8;
  uStack_f8 = puStack_8[1];
  uStack_f4 = puStack_8[2];
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e0 = 0;
  fStack_114 = *pfStack_4;
  fStack_110 = pfStack_4[1];
  fStack_10c = pfStack_4[2];
  puStack_120 = (undefined1 *)(fStack_114 + *unaff_retaddr);
  uStack_e8 = 800;
  uStack_e4 = 600;
  uStack_dc = 0x3f800000;
  afStack_108[0] = 0.0;
  afStack_108[1] = 1.0;
  afStack_108[2] = 0.0;
  FUN_361c6851(afStack_cc,&fStack_114,(float *)&puStack_120,afStack_108);
  puVar2 = &DAT_362c4478;
  puVar3 = auStack_4c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  thunk_FUN_361c50c0();
  uVar4 = FUN_361bfd6c();
  tVar5.x = (LONG)uVar4;
  uVar4 = FUN_361bfd6c();
  tVar5.y = (LONG)uVar4;
  return tVar5;
}

