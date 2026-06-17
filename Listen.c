
/* public: void __thiscall CSoundLibrary::Listen(class CSoundListener &) */

void __thiscall CSoundLibrary::Listen(CSoundLibrary *this,CSoundListener *param_1)

{
  int iVar1;
  
                    /* 0x9eb20  2542  ?Listen@CSoundLibrary@@QAEXAAVCSoundListener@@@Z */
  iVar1 = CListNode::IsLinked((CListNode *)param_1);
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)param_1);
  }
  CListHead::AddTail((CListHead *)(this + 0x38),(CListNode *)param_1);
  return;
}

