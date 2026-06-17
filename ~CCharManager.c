
/* private: __thiscall CCharManager::~CCharManager(void) */

void __thiscall CCharManager::~CCharManager(CCharManager *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x186560  401  ??1CCharManager@@AAE@XZ */
  puStack_8 = &LAB_3621ac37;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  clear(this);
  local_4 = 0xffffffff;
  if (*(void **)(this + 0x14) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x14));
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  FUN_361868b0((int)(this + 4));
  operator_delete(*(void **)(this + 8));
  *(undefined4 *)(this + 8) = 0;
  ExceptionList = local_c;
  return;
}

