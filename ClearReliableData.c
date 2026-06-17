
/* public: void __thiscall CNet::ClearReliableData(unsigned char) */

void __thiscall CNet::ClearReliableData(CNet *this,uchar param_1)

{
                    /* 0x104560  1271  ?ClearReliableData@CNet@@QAEXE@Z */
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  FUN_36105ea0((int *)(*(int *)(this + 0xc) + (uint)param_1 * 8));
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  return;
}

