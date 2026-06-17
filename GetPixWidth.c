
/* public: long __thiscall CTextureObject::GetPixWidth(void)const  */

long __thiscall CTextureObject::GetPixWidth(CTextureObject *this)

{
                    /* 0x94060  2041  ?GetPixWidth@CTextureObject@@QBEJXZ */
  return *(int *)(*(int *)(this + 0x14) + 0x20) >>
         ((byte)*(undefined4 *)(*(int *)(this + 0x14) + 0x28) & 0x1f);
}

