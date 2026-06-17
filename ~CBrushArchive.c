
/* public: virtual __thiscall CBrushArchive::~CBrushArchive(void) */

void __thiscall CBrushArchive::~CBrushArchive(CBrushArchive *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xccf60  393  ??1CBrushArchive@@UAE@XZ */
  puStack_8 = &LAB_362149a8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(this + 0x40) != 0) {
    ExceptionList = &local_c;
    operator_delete__(*(void **)(this + 0x44));
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x44) = 0;
  }
  if (*(int *)(this + 0x38) != 0) {
    operator_delete__(*(void **)(this + 0x3c));
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
  }
  thunk_FUN_360cc6c0((undefined4 *)(this + 0x14));
  local_4 = 0xffffffff;
  CSerial::~CSerial((CSerial *)this);
  ExceptionList = local_c;
  return;
}

