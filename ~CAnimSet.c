
/* public: virtual __thiscall CAnimSet::~CAnimSet(void) */

void __thiscall CAnimSet::~CAnimSet(CAnimSet *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x153a60  384  ??1CAnimSet@@UAE@XZ */
  puStack_8 = &LAB_36219b49;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 1;
  Clear(this);
  local_4 = local_4 & 0xffffff00;
  if (*(int *)(this + 0x14) != 0) {
    pvVar1 = *(void **)(this + 0x18);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x2c,*(int *)((int)pvVar1 + -4),FUN_36019c80);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  local_4 = 0xffffffff;
  CSerial::~CSerial((CSerial *)this);
  ExceptionList = local_c;
  return;
}

