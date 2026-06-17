
/* public: void __thiscall CPonytail::BuildStrSpringLengths(void) */

void __thiscall CPonytail::BuildStrSpringLengths(CPonytail *this)

{
  CPonytail *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x190160  1096  ?BuildStrSpringLengths@CPonytail@@QAEXXZ */
  this_00 = this + 0xc;
  iVar3 = 0;
  iVar1 = FUN_36190440((int)this_00);
  if (0 < iVar1) {
    do {
      if (0 < iVar3) {
        iVar1 = FUN_361905c0(this_00,iVar3 + -1);
        iVar2 = FUN_361905c0(this_00,iVar3);
        *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(iVar1 + 0x5c);
      }
      iVar1 = FUN_36190440((int)this_00);
      if (iVar3 < iVar1 + -1) {
        iVar1 = FUN_361905c0(this_00,iVar3);
        iVar2 = FUN_361905c0(this_00,iVar3);
        *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar1 + 0x5c);
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_36190440((int)this_00);
    } while (iVar3 < iVar1);
  }
  return;
}

