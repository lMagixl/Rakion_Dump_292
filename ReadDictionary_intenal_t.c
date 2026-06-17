
/* public: void __thiscall CTStream::ReadDictionary_intenal_t(long) */

void __thiscall CTStream::ReadDictionary_intenal_t(CTStream *this,long param_1)

{
  CTStream *this_00;
  long lVar1;
  int iVar2;
  CTFileName *pCVar3;
  long lVar4;
  int iVar5;
  undefined4 local_1d;
  undefined1 local_19;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x40ea0  2954  ?ReadDictionary_intenal_t@CTStream@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210cf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  lVar1 = GetPos_t(this);
  SetPos_t(this,param_1);
  *(undefined4 *)(this + 0x24) = 2;
  local_1d = DAT_36226fec;
  local_19 = DAT_36226ff0;
  ExpectID_t(this,(CChunkID *)&local_1d);
  this_00 = this + 0x34;
  iVar2 = FUN_360259d0((int)this_00);
  iVar5 = **(int **)(this + 0x14);
  *(int **)(this + 0x14) = *(int **)(this + 0x14) + 1;
  if (0 < iVar5) {
    FUN_36026c30(this_00,iVar5);
    iVar5 = iVar5 + iVar2;
    for (; iVar2 < iVar5; iVar2 = iVar2 + 1) {
      pCVar3 = (CTFileName *)FUN_360217c0(this_00,iVar2);
      ::operator>>(this,pCVar3);
    }
  }
  local_1d = DAT_36226ff4;
  local_19 = DAT_36226ff8;
  ExpectID_t(this,(CChunkID *)&local_1d);
  lVar4 = GetPos_t(this);
  *(long *)(this + 0x28) = lVar4;
  SetPos_t(this,lVar1);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

