
/* public: int __thiscall CTextureData::IsCompressed(void) */

int __thiscall CTextureData::IsCompressed(CTextureData *this)

{
  int iVar1;
  
                    /* 0x97860  2374  ?IsCompressed@CTextureData@@QAEHXZ */
  iVar1 = *(int *)(this + 0x4c);
  if (((iVar1 != DAT_362c9b70) && (iVar1 != DAT_362c9b74)) && (iVar1 != DAT_362c9b78)) {
    return 0;
  }
  return 1;
}

