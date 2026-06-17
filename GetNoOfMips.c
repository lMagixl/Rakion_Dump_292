
/* public: unsigned long __thiscall CTextureData::GetNoOfMips(void)const  */

ulong __thiscall CTextureData::GetNoOfMips(CTextureData *this)

{
  int iVar1;
  uint uVar2;
  uint local_8;
  
                    /* 0xd6a0  2018  ?GetNoOfMips@CTextureData@@QBEKXZ */
  local_8 = *(int *)(this + 0x24) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f);
  uVar2 = *(int *)(this + 0x20) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f);
  if ((int)uVar2 <= (int)local_8) {
    local_8 = uVar2;
  }
  iVar1 = 0x1f;
  if (local_8 != 0) {
    for (; local_8 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return iVar1 + 1;
}

