
/* public: __thiscall CObject3D::~CObject3D(void) */

void __thiscall CObject3D::~CObject3D(CObject3D *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x4a510  456  ??1CObject3D@@QAE@XZ */
  puStack_8 = &LAB_3621171c;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  Clear(this);
  local_4 = 0xffffffff;
  thunk_FUN_3604b2a0((undefined4 *)this);
  ExceptionList = local_c;
  return;
}

