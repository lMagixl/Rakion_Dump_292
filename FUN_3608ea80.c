
void FUN_3608ea80(void)

{
  ulong *puVar1;
  uint extraout_ECX;
  uint extraout_EDX;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int *piStack_11c;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  int *piStack_110;
  undefined4 uStack_10c;
  undefined1 *puStack_108;
  undefined1 auStack_fc [16];
  undefined1 auStack_ec [8];
  undefined1 auStack_e4 [12];
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [52];
  undefined1 auStack_58 [24];
  undefined1 local_40 [64];
  
  piStack_110 = *(int **)(_pGfx + 0xa5c);
  puStack_108 = local_40;
  uStack_10c = 2;
  puStack_114 = (undefined1 *)0x3608eaa4;
  (**(code **)(*piStack_110 + 0x98))();
  piStack_11c = *(int **)(_pGfx + 0xa5c);
  puStack_114 = auStack_8c;
  uStack_118 = 3;
  puStack_120 = (undefined1 *)0x3608eac2;
  (**(code **)(*piStack_11c + 0x98))();
  puStack_120 = auStack_98;
  puStack_124 = auStack_58;
  puStack_128 = auStack_d8;
  puStack_12c = (undefined1 *)0x3608eadc;
  thunk_FUN_361c574e();
  puStack_12c = auStack_e4;
  thunk_FUN_361c5997();
  uVar2 = DAT_362c9948;
  uStack_130 = DAT_362c9948;
  puVar1 = shaGetFlags();
  if ((*puVar1 & 4) == 0) {
    uStack_130._0_1_ = (undefined1)extraout_ECX;
    if (0x7f < (extraout_ECX & 0xff)) {
      uStack_130._0_1_ = 0x7f;
    }
    uStack_130._1_1_ = (byte)(uVar2 >> 8);
    if (0x7f < uStack_130._1_1_) {
      uStack_130._0_2_ = CONCAT11(0x7f,(undefined1)uStack_130);
    }
    uStack_130._2_1_ = (byte)(uVar2 >> 0x10);
    uStack_130._3_1_ = (undefined1)(uVar2 >> 0x18);
    if (0x7f < uStack_130._2_1_) {
      uStack_130._0_3_ = CONCAT12(0x7f,(undefined2)uStack_130);
    }
  }
  uVar2 = extraout_EDX;
  if ((*puVar1 & 2) != 0) {
    uVar2 = 0xff000000;
    uStack_130 = 0x7f7f7f7f;
  }
  FUN_3608d9a0(&uStack_10c,uVar2);
  FUN_3608d9a0(auStack_fc,uStack_130);
  puStack_12c = DAT_362c9868;
  puStack_128 = (undefined1 *)DAT_362c986c;
  puStack_124 = (undefined1 *)DAT_362c9870;
  puStack_120 = (undefined1 *)0x443f40a4;
  piStack_11c = (int *)0x0;
  uStack_118 = 0x3f800000;
  puStack_114 = (undefined1 *)0x40000000;
  piStack_110 = (int *)0x3f000000;
  (*DAT_362c46e8)(0,auStack_ec,4);
  (*DAT_362c46e8)(4,&puStack_12c,1);
  (*DAT_362c46e8)(5,&uStack_10c,1);
  (*DAT_362c46e8)(6,auStack_fc,1);
  (*DAT_362c46e8)(7,&piStack_11c,1);
  iVar3 = 0;
  if (0 < DAT_362c9860) {
    iVar4 = 0x15;
    do {
      (*DAT_362c46e8)(iVar4,(&DAT_362c9780)[iVar3],3);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 3;
    } while (iVar3 < DAT_362c9860);
  }
  return;
}

