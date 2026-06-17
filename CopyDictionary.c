
/* public: void __thiscall CTStream::CopyDictionary(class CTStream &) */

void __thiscall CTStream::CopyDictionary(CTStream *this,CTStream *param_1)

{
  CTStream *this_00;
  int iVar1;
  CTString *pCVar2;
  int iVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x40fc0  1383  ?CopyDictionary@CTStream@@QAEXAAV1@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210d0a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  this_00 = this + 0x34;
  iVar3 = 0;
  local_4 = 0;
  FUN_36026ff0(this_00,param_1 + 0x34);
  iVar1 = FUN_360259d0((int)this_00);
  if (0 < iVar1) {
    do {
      pCVar2 = (CTString *)FUN_360217c0(this_00,iVar3);
      FUN_360e4780(*(void **)(this + 0x30),pCVar2);
      iVar3 = iVar3 + 1;
      iVar1 = FUN_360259d0((int)this_00);
    } while (iVar3 < iVar1);
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

