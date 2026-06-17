
/* public: int __thiscall CModelInstance::HasAlpha(void) */

int __thiscall CModelInstance::HasAlpha(CModelInstance *this)

{
  ulong uVar1;
  
                    /* 0x15c640  2251  ?HasAlpha@CModelInstance@@QAEHXZ */
  uVar1 = GetModelColor(this);
  return (uint)((char)uVar1 != -1);
}

