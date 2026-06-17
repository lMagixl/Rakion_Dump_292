
/* public: void __thiscall CSoundLibrary::AddToPendingList(class CSoundObject &) */

void __thiscall CSoundLibrary::AddToPendingList(CSoundLibrary *this,CSoundObject *param_1)

{
                    /* 0x9eb50  1033  ?AddToPendingList@CSoundLibrary@@QAEXAAVCSoundObject@@@Z */
  CListHead::AddTail((CListHead *)(this + 0x458),(CListNode *)param_1);
  return;
}

