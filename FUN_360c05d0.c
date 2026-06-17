
void FUN_360c05d0(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint unaff_retaddr;
  int iVar8;
  
  (*DAT_362c46b0)();
  (*DAT_362c4634)();
  FUN_360c0590();
  (*DAT_362c3e6c)(5);
  uVar1 = (int)unaff_retaddr / 3;
  uVar5 = 0;
  iVar8 = 0;
  uVar4 = unaff_retaddr;
  if (0 < (int)uVar1) {
    do {
      uVar2 = (uint)param_1[1];
      uVar6 = (uint)param_1[2];
      if (uVar5 == 0) {
        (*DAT_362c3e70)();
        FUN_360c0590();
        (*DAT_362c3e6c)(5);
        (*DAT_362c40c0)(iVar8);
        (*DAT_362c40c0)(uVar1);
        (*DAT_362c40c0)(uVar6);
        iVar8 = iVar8 + 1;
        param_1 = param_1 + 3;
        uVar5 = 1;
        unaff_retaddr = uVar1;
        uVar4 = uVar6;
      }
      else {
        uVar3 = uVar5 & 0x80000001;
        bVar7 = uVar3 == 0;
        if ((int)uVar3 < 0) {
          bVar7 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
        }
        uVar3 = (uint)*param_1;
        if (bVar7) {
          uVar3 = uVar2;
          uVar2 = (uint)*param_1;
        }
        if ((unaff_retaddr == uVar2) && (uVar4 == uVar3)) {
          (*DAT_362c40c0)(uVar6);
          iVar8 = iVar8 + 1;
          param_1 = param_1 + 3;
          uVar5 = uVar5 + 1;
          unaff_retaddr = uVar4;
          uVar4 = uVar6;
        }
        else {
          uVar5 = 0;
        }
      }
    } while (iVar8 < (int)uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x360c06d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_362c3e70)();
  return;
}

