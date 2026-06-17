
/* public: void __thiscall CSoundLibrary::RemoveFromPendingList(class CSoundObject &,int) */

void __thiscall
CSoundLibrary::RemoveFromPendingList(CSoundLibrary *this,CSoundObject *param_1,int param_2)

{
  int iVar1;
  
                    /* 0x9f550  3135  ?RemoveFromPendingList@CSoundLibrary@@QAEXAAVCSoundObject@@H@Z
                        */
  if (-1 < *(int *)(param_1 + 0x28)) {
    ReleasePlayingBuffer(this,*(int *)(param_1 + 0x28),param_2);
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  iVar1 = CListNode::IsLinked((CListNode *)param_1);
  if (iVar1 != 0) {
    CListNode::Remove((CListNode *)param_1);
  }
  return;
}

