
void __thiscall FUN_361a4bc0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)((int)this + 8) != 0 || *(int *)((int)this + 0xc) != 0) {
    uVar1 = *(uint *)this;
    uVar2 = *(uint *)((int)this + 4);
    uVar5 = *(uint *)(param_1 + 0x1c);
    uVar3 = *(uint *)(param_1 + 0x18);
    if (((uVar2 <= uVar5) &&
        (((uVar5 != uVar2 || (uVar1 <= uVar3)) && (*(int *)(param_1 + 0x20) != 0)))) &&
       (uVar3 != 0 || uVar5 != 0)) {
      uVar5 = (uVar5 - uVar2) - (uint)(uVar3 < uVar1);
      if ((uVar5 <= *(uint *)((int)this + 0xc)) &&
         ((uVar5 < *(uint *)((int)this + 0xc) || (uVar3 - uVar1 < *(uint *)((int)this + 8))))) {
        *(uint *)((int)this + 0x10) = param_1;
        uVar5 = *(uint *)(param_1 + 0x18);
        iVar4 = *(int *)(param_1 + 0x1c);
        *(uint *)((int)this + 8) = uVar5 - uVar1;
        *(uint *)((int)this + 0xc) = (iVar4 - uVar2) - (uint)(uVar5 < uVar1);
      }
    }
  }
  return;
}

