
/* public: int __thiscall CSessionState::IsDisconnected(void) */

int __thiscall CSessionState::IsDisconnected(CSessionState *this)

{
  int iVar1;
  
                    /* 0x10e410  2383  ?IsDisconnected@CSessionState@@QAEHXZ */
  iVar1 = CTString::operator!=((CTString *)(this + 0x7c),&DAT_36237511);
  return iVar1;
}

