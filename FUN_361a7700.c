
_String_base * __thiscall FUN_361a7700(void *this,int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    std::_String_base::_Xran(this);
  }
  uVar1 = *(int *)(param_1 + 0x14) - param_2;
  uVar4 = param_4;
  if (uVar1 < param_4) {
    uVar4 = uVar1;
  }
  if (-*(int *)((int)this + 0x14) - 1U <= uVar4) {
    std::_String_base::_Xlen(this);
  }
  if (uVar4 != 0) {
    uVar1 = *(int *)((int)this + 0x14) + uVar4;
    if (0x3ffffff < uVar1) {
      std::_String_base::_Xlen(this);
    }
    if (*(uint *)((int)this + 0x18) < uVar1) {
      FUN_3601a6f0(this,uVar1,*(uint *)((int)this + 0x14));
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        *(undefined1 *)((int)this + 4) = 0;
        return this;
      }
      **(undefined1 **)((int)this + 4) = 0;
      return this;
    }
    if (uVar1 != 0) {
      if (*(uint *)(param_3 + 0x18) < 0x10) {
        iVar7 = param_3 + 4;
      }
      else {
        iVar7 = *(int *)(param_3 + 4);
      }
      puVar5 = (undefined4 *)((int)this + 4);
      puVar2 = puVar5;
      if (0xf < *(uint *)((int)this + 0x18)) {
        puVar2 = (undefined4 *)*puVar5;
      }
      puVar6 = (undefined4 *)(param_4 + iVar7);
      puVar2 = (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar2);
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *(uint *)((int)this + 0x14) = uVar1;
      if (0xf < *(uint *)((int)this + 0x18)) {
        puVar5 = (undefined4 *)*puVar5;
      }
      *(undefined1 *)((int)puVar5 + uVar1) = 0;
    }
  }
  return this;
}

