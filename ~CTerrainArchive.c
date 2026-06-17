
/* public: virtual __thiscall CTerrainArchive::~CTerrainArchive(void) */

void __thiscall CTerrainArchive::~CTerrainArchive(CTerrainArchive *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xcd130  493  ??1CTerrainArchive@@UAE@XZ */
  puStack_8 = &LAB_362149e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  thunk_FUN_360cc760((undefined4 *)(this + 0x14));
  local_4 = 0xffffffff;
  CSerial::~CSerial((CSerial *)this);
  ExceptionList = local_c;
  return;
}

