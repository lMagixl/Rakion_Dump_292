
void __thiscall FUN_3601ebe0(void *this,undefined4 *param_1,_String_base *param_2)

{
  _String_base _Var1;
  uint uVar2;
  _String_base *p_Var3;
  _String_base *p_Var4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  _String_base *p_Var8;
  _String_base *p_Var9;
  uint unaff_EDI;
  bool local_8;
  
  p_Var3 = param_2;
  p_Var9 = *(_String_base **)(*(_String_base **)((int)this + 4) + 4);
  _Var1 = p_Var9[0x31];
  local_8 = true;
  p_Var8 = *(_String_base **)((int)this + 4);
  do {
    if (_Var1 != (_String_base)0x0) {
      param_2 = p_Var8;
      if (local_8) {
        if (p_Var8 == (_String_base *)**(int **)((int)this + 4)) {
          puVar6 = (undefined4 *)FUN_3601e880(this,&param_2,'\x01',(undefined4 *)p_Var8,p_Var3);
          *param_1 = *puVar6;
          *(undefined1 *)(param_1 + 1) = 1;
          return;
        }
        FUN_3600b660((int *)&param_2);
      }
      p_Var9 = param_2;
      if (*(uint *)(p_Var3 + 0x18) < 0x10) {
        p_Var4 = p_Var3 + 4;
      }
      else {
        p_Var4 = *(_String_base **)(p_Var3 + 4);
      }
      uVar7 = FUN_3600e4d0(param_2 + 0xc,0,*(undefined4 *)(param_2 + 0x20),(uint)p_Var4,
                           *(char **)(p_Var3 + 0x14),unaff_EDI);
      if (-1 < (int)uVar7) {
        *param_1 = p_Var9;
        *(undefined1 *)(param_1 + 1) = 0;
        return;
      }
      puVar6 = (undefined4 *)FUN_3601e880(this,&param_2,local_8,(undefined4 *)p_Var8,p_Var3);
      *param_1 = *puVar6;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    uVar7 = *(uint *)(p_Var9 + 0x20);
    if (*(uint *)(p_Var9 + 0x24) < 0x10) {
      p_Var8 = p_Var9 + 0x10;
    }
    else {
      p_Var8 = *(_String_base **)(p_Var9 + 0x10);
    }
    uVar2 = *(uint *)(p_Var3 + 0x14);
    param_2 = p_Var9;
    if (uVar2 == 0) {
LAB_3601ec58:
      if (uVar2 < uVar7) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (uint)(uVar2 != uVar7);
      }
    }
    else {
      uVar5 = uVar2;
      if (uVar7 <= uVar2) {
        uVar5 = uVar7;
      }
      if (*(uint *)(p_Var3 + 0x18) < 0x10) {
        p_Var4 = p_Var3 + 4;
      }
      else {
        p_Var4 = *(_String_base **)(p_Var3 + 4);
      }
      uVar5 = _strnicmp((char *)p_Var4,(char *)p_Var8,uVar5);
      if (uVar5 == 0) goto LAB_3601ec58;
    }
    local_8 = (int)uVar5 < 0;
    if (local_8) {
      p_Var9 = *(_String_base **)p_Var9;
    }
    else {
      p_Var9 = *(_String_base **)(p_Var9 + 8);
    }
    _Var1 = p_Var9[0x31];
    p_Var8 = param_2;
  } while( true );
}

