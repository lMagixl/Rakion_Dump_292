
/* public: void __thiscall CTextureData::ChangeSize(long) */

void __thiscall CTextureData::ChangeSize(CTextureData *this,long param_1)

{
  ulonglong uVar1;
  
                    /* 0x3c10  1158  ?ChangeSize@CTextureData@@QAEXJ@Z */
  uVar1 = FUN_361bfd6c();
  *(int *)(this + 0x24) = (int)uVar1;
  *(long *)(this + 0x20) = param_1;
  return;
}

