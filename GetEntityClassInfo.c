
/* public: struct EntityClassInfo __thiscall CEntity::GetEntityClassInfo(void) */

void __thiscall CEntity::GetEntityClassInfo(CEntity *this)

{
  CEntity CVar1;
  CEntity CVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *in_stack_00000004;
  
                    /* 0x124810  1853  ?GetEntityClassInfo@CEntity@@QAE?AUEntityClassInfo@@XZ */
  iVar3 = IsOfClass(this,s_Player_36237ad8);
  if (iVar3 == 0) {
    iVar3 = IsDerivedFromClass(this,s_NpcBase_36237ae0);
    if (iVar3 != 0) {
      CVar1 = this[0x264];
      CVar2 = this[0x265];
      *in_stack_00000004 = *(undefined4 *)(this + 0xfc);
      in_stack_00000004[1] = (uint)(byte)CVar1;
      in_stack_00000004[2] = (uint)(byte)CVar2;
      return;
    }
    uVar4 = 8;
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)(byte)this[0x264];
    uVar4 = 1;
  }
  *in_stack_00000004 = uVar4;
  in_stack_00000004[1] = uVar5;
  in_stack_00000004[2] = 0xffffffff;
  return;
}

