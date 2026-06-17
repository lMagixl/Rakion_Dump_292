
_String_base * __thiscall
FUN_361a7800(void *this,_String_base *param_1,uint param_2,_String_base *param_3)

{
  undefined4 *puVar1;
  _String_base *p_Var2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_EDI;
  
  uVar6 = *(uint *)((int)this + 0x18);
  if (uVar6 < 0x10) {
    p_Var2 = (_String_base *)((int)this + 4);
  }
  else {
    p_Var2 = *(_String_base **)((int)this + 4);
  }
  if (p_Var2 <= param_1) {
    puVar1 = (undefined4 *)((int)this + 4);
    puVar4 = puVar1;
    if (0xf < uVar6) {
      puVar4 = (undefined4 *)*puVar1;
    }
    if (param_1 < (_String_base *)(*(int *)((int)this + 0x14) + (int)puVar4)) {
      if (0xf < uVar6) {
        puVar1 = (undefined4 *)*puVar1;
      }
      p_Var2 = FUN_361a7700(this,(int)this,(int)param_1 - (int)puVar1,param_2,unaff_EDI);
      return p_Var2;
    }
  }
  if (-*(int *)((int)this + 0x14) - 1U <= param_2) {
    std::_String_base::_Xlen(this);
  }
  if (param_2 != 0) {
    uVar6 = *(int *)((int)this + 0x14) + param_2;
    if (0x3ffffff < uVar6) {
      std::_String_base::_Xlen(this);
    }
    if (*(uint *)((int)this + 0x18) < uVar6) {
      FUN_3601a6f0(this,uVar6,*(uint *)((int)this + 0x14));
    }
    else if (uVar6 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        *(undefined1 *)((int)this + 4) = 0;
        return this;
      }
      **(undefined1 **)((int)this + 4) = 0;
      return this;
    }
    if (uVar6 != 0) {
      if (*(uint *)((int)this + 0x18) < 0x10) {
        iVar3 = (int)this + 4;
      }
      else {
        iVar3 = *(int *)((int)this + 4);
      }
      p_Var2 = (_String_base *)(*(int *)((int)this + 0x14) + iVar3);
      for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)p_Var2 = *(undefined4 *)param_3;
        param_3 = param_3 + 4;
        p_Var2 = p_Var2 + 4;
      }
      for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *p_Var2 = *param_3;
        param_3 = param_3 + 1;
        p_Var2 = p_Var2 + 1;
      }
      *(uint *)((int)this + 0x14) = uVar6;
      if (0xf < *(uint *)((int)this + 0x18)) {
        *(undefined1 *)(*(int *)((int)this + 4) + uVar6) = 0;
        return this;
      }
      *(undefined1 *)((int)this + uVar6 + 4) = 0;
    }
  }
  return this;
}

