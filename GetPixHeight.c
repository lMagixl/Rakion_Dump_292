
/* public: long __thiscall CTextureObject::GetPixHeight(void)const  */

long __thiscall CTextureObject::GetPixHeight(CTextureObject *this)

{
                    /* 0x94070  2039  ?GetPixHeight@CTextureObject@@QBEJXZ */
  return *(int *)(*(int *)(this + 0x14) + 0x24) >>
         ((byte)*(undefined4 *)(*(int *)(this + 0x14) + 0x28) & 0x1f);
}

