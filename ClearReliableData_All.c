
/* public: void __thiscall CNet::ClearReliableData_All(void) */

void __thiscall CNet::ClearReliableData_All(CNet *this)

{
  int iVar1;
  
                    /* 0x104590  1272  ?ClearReliableData_All@CNet@@QAEXXZ */
  iVar1 = 0;
  do {
    ClearReliableData(this,(uchar)iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x14);
  return;
}

