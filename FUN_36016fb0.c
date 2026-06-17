
_String_base * __thiscall
FUN_36016fb0(void *this,_String_base *param_1,uint param_2,uint param_3,uint param_4)

{
  _String_base *p_Var1;
  uint uVar2;
  _String_base *p_Var3;
  uint uVar4;
  uint unaff_ESI;
  _String_base *p_Var5;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    std::_String_base::_Xran(this);
  }
  uVar4 = *(int *)(param_1 + 0x14) - param_2;
  if (param_4 < *(int *)(param_1 + 0x14) - param_2) {
    uVar4 = param_4;
  }
  if (this != param_1) {
    if (uVar4 == 0xffffffff) {
      std::_String_base::_Xlen(this);
    }
    if (*(uint *)((int)this + 0x18) < uVar4) {
      FUN_36013960(this,uVar4,*(uint *)((int)this + 0x14));
    }
    else if (uVar4 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        *(undefined1 *)((int)this + 4) = 0;
        return this;
      }
      **(undefined1 **)((int)this + 4) = 0;
      return this;
    }
    if (uVar4 != 0) {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        p_Var3 = param_1 + 4;
      }
      else {
        p_Var3 = *(_String_base **)(param_1 + 4);
      }
      p_Var1 = (_String_base *)((int)this + 4);
      p_Var5 = p_Var1;
      if (0xf < *(uint *)((int)this + 0x18)) {
        p_Var5 = *(_String_base **)p_Var1;
      }
      p_Var3 = p_Var3 + param_2;
      for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)p_Var5 = *(undefined4 *)p_Var3;
        p_Var3 = p_Var3 + 4;
        p_Var5 = p_Var5 + 4;
      }
      for (uVar2 = uVar4 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *p_Var5 = *p_Var3;
        p_Var3 = p_Var3 + 1;
        p_Var5 = p_Var5 + 1;
      }
      *(uint *)((int)this + 0x14) = uVar4;
      if (0xf < *(uint *)((int)this + 0x18)) {
        p_Var1 = *(_String_base **)p_Var1;
      }
      p_Var1[uVar4] = (_String_base)0x0;
    }
    return this;
  }
  FUN_36013830(this,uVar4 + param_2,0xffffffff,unaff_ESI);
  FUN_36013830(this,0,param_2,unaff_ESI);
  return this;
}

