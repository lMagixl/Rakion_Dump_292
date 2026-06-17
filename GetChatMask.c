
/* public: unsigned long __thiscall CPlayerSource::GetChatMask(void) */

ulong __thiscall CPlayerSource::GetChatMask(CPlayerSource *this)

{
                    /* 0x107c90  1756  ?GetChatMask@CPlayerSource@@QAEKXZ */
  return 1 << ((byte)*(undefined4 *)this & 0x1f);
}

