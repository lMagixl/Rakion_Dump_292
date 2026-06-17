
_String_base * __thiscall FUN_3601df80(void *this,_String_base *param_1,uint param_2)

{
  undefined4 *puVar1;
  _String_base *p_Var2;
  undefined4 *puVar3;
  uint uVar4;
  uint unaff_EDI;
  
  uVar4 = *(uint *)((int)this + 0x18);
  if (uVar4 < 0x10) {
    p_Var2 = (_String_base *)((int)this + 4);
  }
  else {
    p_Var2 = *(_String_base **)((int)this + 4);
  }
  if (p_Var2 <= param_1) {
    puVar1 = (undefined4 *)((int)this + 4);
    puVar3 = puVar1;
    if (0xf < uVar4) {
      puVar3 = (undefined4 *)*puVar1;
    }
    if (param_1 < (_String_base *)(*(int *)((int)this + 0x14) + (int)puVar3)) {
      if (0xf < uVar4) {
        puVar1 = (undefined4 *)*puVar1;
      }
      p_Var2 = FUN_3601cb20(this,this,(int)param_1 - (int)puVar1,param_2,unaff_EDI);
      return p_Var2;
    }
  }
  if (0x3ffffff < param_2) {
    std::_String_base::_Xlen(this);
  }
  if (*(uint *)((int)this + 0x18) < param_2) {
    FUN_3601a6f0(this,param_2,*(uint *)((int)this + 0x14));
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    if (*(uint *)((int)this + 0x18) < 0x10) {
      *(undefined1 *)((int)this + 4) = 0;
      return this;
    }
    **(undefined1 **)((int)this + 4) = 0;
    return this;
  }
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0x18) < 0x10) {
      p_Var2 = (_String_base *)((int)this + 4);
    }
    else {
      p_Var2 = *(_String_base **)((int)this + 4);
    }
    for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)p_Var2 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      p_Var2 = p_Var2 + 4;
    }
    for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *p_Var2 = *param_1;
      param_1 = param_1 + 1;
      p_Var2 = p_Var2 + 1;
    }
    *(uint *)((int)this + 0x14) = param_2;
    if (0xf < *(uint *)((int)this + 0x18)) {
      *(undefined1 *)(*(int *)((int)this + 4) + param_2) = 0;
      return this;
    }
    *(undefined1 *)((int)this + param_2 + 4) = 0;
  }
  return this;
}

