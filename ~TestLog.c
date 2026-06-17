
/* private: __thiscall TestLog::~TestLog(void) */

void __thiscall TestLog::~TestLog(TestLog *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x19f6c0  541  ??1TestLog@@AAE@XZ */
  puStack_8 = &LAB_3621b676;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  close(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x4c));
  local_4 = local_4 & 0xffffff00;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (this + 0x30));
  local_4 = 0xffffffff;
  if (*(void **)(this + 0x1c) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x1c));
  }
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  FUN_361a0880((int)(this + 0xc));
  operator_delete(*(void **)(this + 0x10));
  *(undefined4 *)(this + 0x10) = 0;
  ExceptionList = local_c;
  return;
}

