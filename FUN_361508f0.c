
void __thiscall FUN_361508f0(void *this,int param_1)

{
  short *psVar1;
  ushort uVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort *local_4;
  
  uVar2 = *(ushort *)(in_EAX + 2);
  uVar6 = 0xffffffff;
  iVar7 = 0;
  iVar3 = 7;
  iVar4 = 4;
  if (uVar2 == 0) {
    iVar3 = 0x8a;
    iVar4 = 3;
  }
  *(undefined2 *)(in_EAX + 6 + (int)this * 4) = 0xffff;
  if (-1 < (int)this) {
    local_4 = (ushort *)(in_EAX + 6);
    iVar5 = (int)this + 1;
    uVar8 = (uint)uVar2;
    do {
      uVar9 = (uint)*local_4;
      iVar7 = iVar7 + 1;
      if ((iVar3 <= iVar7) || (uVar8 != uVar9)) {
        if (iVar7 < iVar4) {
          psVar1 = (short *)(param_1 + 0xa74 + uVar8 * 4);
          *psVar1 = *psVar1 + (short)iVar7;
        }
        else if (uVar8 == 0) {
          if (iVar7 < 0xb) {
            *(short *)(param_1 + 0xab8) = *(short *)(param_1 + 0xab8) + 1;
          }
          else {
            *(short *)(param_1 + 0xabc) = *(short *)(param_1 + 0xabc) + 1;
          }
        }
        else {
          if (uVar8 != uVar6) {
            psVar1 = (short *)(param_1 + 0xa74 + uVar8 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xab4) = *(short *)(param_1 + 0xab4) + 1;
        }
        iVar7 = 0;
        uVar6 = uVar8;
        if (uVar9 == 0) {
          iVar3 = 0x8a;
          iVar4 = 3;
        }
        else if (uVar8 == uVar9) {
          iVar3 = 6;
          iVar4 = 3;
        }
        else {
          iVar3 = 7;
          iVar4 = 4;
        }
      }
      local_4 = local_4 + 2;
      iVar5 = iVar5 + -1;
      uVar8 = uVar9;
    } while (iVar5 != 0);
  }
  return;
}

