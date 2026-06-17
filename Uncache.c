
/* public: long __thiscall CShadowMap::Uncache(void) */

long __thiscall CShadowMap::Uncache(CShadowMap *this)

{
  CShadowMap *pCVar1;
  int iVar2;
  uint uVar3;
  CShadowMap *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x91dc0  3869  ?Uncache@CShadowMap@@QAEJXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36212b18;
  pvStack_c = ExceptionList;
  uVar3 = 0;
  DAT_362c9a34 = 1;
  ExceptionList = &pvStack_c;
  local_10 = this;
  CDisableAsyncProgress::CDisableAsyncProgress((CDisableAsyncProgress *)&local_10);
  local_4 = 0;
  if (*(int *)(this + 100) != 0) {
    (*DAT_362c468c)(this + 100);
    (*DAT_362c468c)(this + 0x68);
    *(undefined4 *)(this + 0x60) = 0;
    if (*(CShadowMap **)(this + 0x30) != this + 0x1c) {
      uVar3 = *(uint *)(this + 0x38);
      if (DAT_362a4094 == 0) {
        uVar3 = (int)uVar3 / 2;
      }
      if ((uVar3 & 0xfff) != 0) {
        uVar3 = uVar3 + (-uVar3 & 0xfff);
      }
    }
  }
  if (*(void **)(this + 0x34) != (void *)0x0) {
    FreeMemory(*(void **)(this + 0x34));
    *(undefined4 *)(this + 0x34) = 0;
    uVar3 = uVar3 + *(int *)(this + 0x38);
  }
  pCVar1 = *(CShadowMap **)(this + 0x30);
  if (pCVar1 != (CShadowMap *)0x0) {
    if (pCVar1 == this + 0x1c) {
      uVar3 = uVar3 + 4;
    }
    else {
      FreeMemory(pCVar1);
      uVar3 = uVar3 + *(int *)(this + 0x38);
    }
  }
  *(undefined4 *)(this + 0x3c) = 0x1f;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x80) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  iVar2 = CListNode::IsLinked((CListNode *)(this + 8));
  if (iVar2 != 0) {
    CListNode::Remove((CListNode *)(this + 8));
  }
  local_4 = 0xffffffff;
  CDisableAsyncProgress::~CDisableAsyncProgress((CDisableAsyncProgress *)&local_10);
  ExceptionList = pvStack_c;
  return uVar3;
}

