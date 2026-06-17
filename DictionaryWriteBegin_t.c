
/* public: void __thiscall CTStream::DictionaryWriteBegin_t(class CTFileName const &,long) */

void __thiscall CTStream::DictionaryWriteBegin_t(CTStream *this,CTFileName *param_1,long param_2)

{
  int iVar1;
  CTStream *pCVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 local_91;
  undefined1 local_8d;
  CTSingleLock local_8c [12];
  CTFileStream local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x42f90  1497  ?DictionaryWriteBegin_t@CTStream@@QAEXABVCTFileName@@J@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362110f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_8c,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  FUN_360e4670(*(void **)(this + 0x30),100,5,5);
  *(undefined4 *)(this + 0x2c) = 0;
  iVar1 = CTString::operator!=((CTString *)param_1,&DAT_36226fc8);
  if (iVar1 != 0) {
    CTFileStream::CTFileStream(local_80);
    local_4._0_1_ = 1;
    CTFileStream::Open_t(local_80,param_1,1);
    ReadDictionary_intenal_t((CTStream *)local_80,param_2);
    CopyDictionary(this,(CTStream *)local_80);
    local_91 = DAT_36226fcc;
    local_8d = DAT_36226fd0;
    WriteID_t(this,(CChunkID *)&local_91);
    pCVar2 = ::operator<<(this,param_1);
    **(long **)(pCVar2 + 0x14) = param_2;
    *(int *)(pCVar2 + 0x14) = *(int *)(pCVar2 + 0x14) + 4;
    uVar3 = FUN_360259d0((int)(this + 0x34));
    *(undefined4 *)(this + 0x2c) = uVar3;
    local_4 = (uint)local_4._1_3_ << 8;
    CTFileStream::~CTFileStream(local_80);
  }
  local_91 = DAT_36226fd4;
  local_8d = DAT_36226fd8;
  WriteID_t(this,(CChunkID *)&local_91);
  lVar4 = GetPos_t(this);
  *(long *)(this + 0x28) = lVar4;
  **(undefined4 **)(this + 0x14) = 0;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 4;
  *(undefined4 *)(this + 0x24) = 1;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_8c);
  ExceptionList = local_c;
  return;
}

