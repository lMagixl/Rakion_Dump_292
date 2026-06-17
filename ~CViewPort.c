
/* public: __thiscall CViewPort::~CViewPort(void) */

void __thiscall CViewPort::~CViewPort(CViewPort *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9c420  502  ??1CViewPort@@QAE@XZ */
  puStack_8 = &LAB_36212e2b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_36065750();
  CloseCanvas(this);
  if (*(CViewPort **)(_pGfx + 0xa30) == this) {
    *(undefined4 *)(_pGfx + 0xa30) = 0;
  }
  local_4 = 0xffffffff;
  FUN_3608d6d0((undefined4 *)(this + 8));
  ExceptionList = local_c;
  return;
}

