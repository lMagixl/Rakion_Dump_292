
/* public: __thiscall FieldInfo::FieldInfo(void) */

FieldInfo * __thiscall FieldInfo::FieldInfo(FieldInfo *this)

{
  FieldInfo *pFVar1;
  int iVar2;
  
                    /* 0x19bb70  336  ??0FieldInfo@@QAE@XZ */
  CTeamInfo::CTeamInfo((CTeamInfo *)(this + 4));
  CTeamInfo::CTeamInfo((CTeamInfo *)(this + 0x18));
  _eh_vector_constructor_iterator_(this + 0x1ac,0x37c,0x14,FUN_3619d0e0,FUN_360195c0);
  pFVar1 = this + 0x4764;
  iVar2 = 0x14;
  do {
    *(undefined4 *)pFVar1 = 0;
    *(undefined4 *)(pFVar1 + 4) = 0;
    *(undefined4 *)(pFVar1 + 8) = 0;
    *(undefined4 *)(pFVar1 + 0xc) = 0;
    pFVar1 = pFVar1 + 0x10;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  this[0x1a4] = (FieldInfo)0x1;
  *(undefined4 *)(this + 0x4760) = 1;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x48f4) = 0;
  *(undefined4 *)(this + 0x4930) = 0;
  *(undefined4 *)(this + 0x4934) = 0;
  *(undefined4 *)(this + 0x4938) = 0;
  *(undefined4 *)(this + 0x493c) = 0;
  this[0x475c] = (FieldInfo)0x0;
  *(undefined4 *)(this + 0x48fc) = 0;
  this[0x4900] = (FieldInfo)0x0;
  this[0x4901] = (FieldInfo)0x0;
  this[0x4908] = (FieldInfo)0x0;
  *(undefined4 *)(this + 0x4904) = 0;
  *(undefined4 *)(this + 0x490c) = 0;
  *(undefined4 *)(this + 0x4910) = 0;
  *(undefined2 *)(this + 0x4914) = 0;
  return this;
}

