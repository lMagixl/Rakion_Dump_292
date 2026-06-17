
/* public: struct _CharacterInfoInField __thiscall FieldInfo::GetLocalCharacterInfo(void) */

void * __thiscall FieldInfo::GetLocalCharacterInfo(FieldInfo *this)

{
  int iVar1;
  void *in_stack_00000004;
  
                    /* 0x19be30  1955
                       ?GetLocalCharacterInfo@FieldInfo@@QAE?AU_CharacterInfoInField@@XZ */
  iVar1 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  FUN_3601c310(in_stack_00000004,this + (uint)*(byte *)(iVar1 + 0x475c) * 0x37c + 0x1ac);
  return in_stack_00000004;
}

