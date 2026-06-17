
/* public: void __thiscall CTFileStream::Open_t(class CTFileName const &,enum CTStream::OpenMode) */

void __thiscall CTFileStream::Open_t(CTFileStream *this,CTFileName *param_1,OpenMode param_2)

{
  CListHead *this_00;
  CTFileName *pCVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  xFileManager *this_01;
  xFile *pxVar5;
  FILE *pFVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  CTStream *this_02;
  undefined4 uVar10;
  OpenMode OVar11;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  CTSingleLock local_18 [4];
  CTSingleLock local_14 [8];
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x42a70  2722
                       ?Open_t@CTFileStream@@QAEXABVCTFileName@@W4OpenMode@CTStream@@@Z */
  local_4 = 0xffffffff;
  local_8 = &LAB_362110ac;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  pCVar1 = param_1;
  local_4 = 0;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x28) == 0) {
    uVar10 = *(undefined4 *)param_1;
    pcVar2 = Translate(s_ETRSCannot_open_file___s___strea_362271b0,4);
    ThrowF_t(pcVar2,uVar10);
  }
  local_30 = StringDuplicate(&DAT_36222fa0);
  local_2c = (char *)0x0;
  local_4._0_1_ = 1;
  local_20 = StringDuplicate(&DAT_36222fa0);
  local_1c = (char *)0x0;
  local_4._0_1_ = 2;
  local_28 = StringDuplicate(&DAT_36222fa0);
  local_24 = (char *)0x0;
  local_4._0_1_ = 3;
  local_34 = StringDuplicate(*(char **)pCVar1);
  local_4._0_1_ = 4;
  CTString::ToLower((CTString *)&local_34);
  param_1 = (CTFileName *)StringDuplicate(s_default_tex_362271fc);
  local_4._0_1_ = 5;
  CTString::FindSubstr((CTString *)&local_34,(CTString *)&param_1);
  local_4 = CONCAT31(local_4._1_3_,4);
  StringFree((char *)param_1);
  OVar11 = param_2;
  uVar3 = (param_2 != 1) + 1;
  param_2 = ExpandxFilePath(uVar3,pCVar1,(CTFileName *)&local_20,(CTFileName *)&local_28);
  lVar4 = ExpandFilePath(uVar3,pCVar1,(CTFileName *)&local_30);
  if (OVar11 == 1) {
    *(undefined4 *)(this + 0x50) = 0;
    if ((lVar4 == 3) || (lVar4 == 2)) {
      iVar8 = FUN_360477f0((CTString *)&local_30);
      *(int *)(this + 0x54) = iVar8;
      uVar7 = FUN_36046ae0(iVar8);
      CTStream::AllocateVirtualMemory((CTStream *)this,(uVar7 / DAT_362bef94 + 2) * DAT_362bef94);
      *(uint *)(this + 0x18) = *(int *)(this + 0xc) + uVar7;
    }
    else if ((lVar4 == 1) || (param_2 == 1)) {
      if (1 < DAT_362bef9c) {
        CPrintF(s_Open___s_36227208,local_30);
      }
      this_01 = xfsMan::InitXfsFile((xfsMan *)&DAT_362befb0,(CTFileName *)&local_20);
      *(xFileManager **)(this + 0x60) = this_01;
      if (this_01 != (xFileManager *)0x0) {
        pxVar5 = Xenesis2::Foundation::File::xFileManager::open(this_01,local_28,true,false);
        *(xFile **)(this + 100) = pxVar5;
        if (pxVar5 == (xFile *)0x0) {
          Xenesis2::Foundation::File::xFileManager::close
                    (*(xFileManager **)(this + 0x60),(xFile *)0x0);
          *(undefined4 *)(this + 100) = 0;
        }
        else {
          uVar7 = *(uint *)(*(int *)(pxVar5 + 8) + 0x78);
          CTStream::AllocateVirtualMemory
                    ((CTStream *)this,(uVar7 / DAT_362bef94 + 2) * DAT_362bef94);
          *(uint *)(this + 0x18) = *(int *)(this + 0xc) + uVar7;
        }
        *(undefined4 *)(this + 0x70) = 0;
      }
      if (((*(int *)(this + 100) == 0) && (lVar4 == 1)) && (*(int *)(this + 0x6c) == 0)) {
        pFVar6 = fopen(local_30,&DAT_36227218);
        *(FILE **)(this + 0x50) = pFVar6;
        fseek(pFVar6,0,2);
        uVar7 = ftell(*(FILE **)(this + 0x50));
        fseek(*(FILE **)(this + 0x50),0,0);
        CTStream::AllocateVirtualMemory((CTStream *)this,(uVar7 / DAT_362bef94 + 2) * DAT_362bef94);
        *(uint *)(this + 0x18) = *(int *)(this + 0xc) + uVar7;
        *(undefined4 *)(this + 0x5c) = 1;
        goto LAB_36042d6c;
      }
    }
    *(undefined4 *)(this + 0x5c) = 1;
  }
  else if (OVar11 == 2) {
    pFVar6 = fopen(local_30,&DAT_3622721c);
    *(FILE **)(this + 0x50) = pFVar6;
    *(undefined4 *)(this + 0x5c) = 0;
    CTStream::AllocateVirtualMemory((CTStream *)this,DAT_362a274c + DAT_362bef94);
  }
  else {
    pcVar2 = Translate(s_ETRSFile_stream_opening_requeste_36227220,4);
    FatalError(pcVar2,OVar11);
  }
LAB_36042d6c:
  if (((*(int *)(this + 0x50) == 0) && (*(int *)(this + 0x54) == -1)) &&
     ((*(int *)(this + 100) == 0 && (*(int *)(this + 0x6c) == 0)))) {
    piVar9 = _errno();
    strerror(*piVar9);
    Translate(s_ETRSCannot_open_file___s____s__36227260,4);
    CTStream::Throw_t(this_02,(char *)this);
  }
  pcVar2 = StringDuplicate(*(char **)pCVar1);
  StringFree(*(char **)(this + 0x20));
  this_00 = DAT_362befa8;
  *(char **)(this + 0x20) = pcVar2;
  CListHead::AddTail(this_00,(CListNode *)(this + 4));
  SetProgressFile(pCVar1);
  StringFree(local_30);
  StringFree(local_24);
  StringFree(local_1c);
  StringFree(local_2c);
  CTSingleLock::~CTSingleLock(local_14);
  ExceptionList = local_8;
  return;
}

