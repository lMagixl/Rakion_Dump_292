
/* public: void __thiscall CTStream::DictionaryWriteEnd_t(void) */

void __thiscall CTStream::DictionaryWriteEnd_t(CTStream *this)

{
  CTStream *this_00;
  long lVar1;
  long lVar2;
  int iVar3;
  CTFileName *pCVar4;
  long lVar5;
  int iVar6;
  undefined4 local_1d;
  undefined1 local_19;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x40d60  1498  ?DictionaryWriteEnd_t@CTStream@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210ce6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  lVar1 = *(long *)(this + 0x28);
  local_4 = 0;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  lVar2 = GetPos_t(this);
  *(undefined4 *)(this + 0x24) = 2;
  local_1d = DAT_36226fdc;
  local_19 = DAT_36226fe0;
  WriteID_t(this,(CChunkID *)&local_1d);
  this_00 = this + 0x34;
  iVar3 = FUN_360259d0((int)this_00);
  **(int **)(this + 0x14) = iVar3 - *(int *)(this + 0x2c);
  iVar6 = *(int *)(this + 0x2c);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 4;
  for (; iVar6 < iVar3; iVar6 = iVar6 + 1) {
    pCVar4 = (CTFileName *)FUN_360217c0(this_00,iVar6);
    ::operator<<(this,pCVar4);
  }
  local_1d = DAT_36226fe4;
  local_19 = DAT_36226fe8;
  WriteID_t(this,(CChunkID *)&local_1d);
  lVar5 = GetPos_t(this);
  SetPos_t(this,lVar1);
  **(long **)(this + 0x14) = lVar2;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 4;
  *(undefined4 *)(this + 0x24) = 0;
  FUN_360e4640(*(undefined4 **)(this + 0x30));
  FUN_36021ad0((undefined4 *)this_00);
  *(undefined4 *)(this + 0x48) = 0;
  SetPos_t(this,lVar5);
  *(undefined4 *)(this + 0x28) = 0;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

