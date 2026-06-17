
/* private: __thiscall TestLog::TestLog(void) */

TestLog * __thiscall TestLog::TestLog(TestLog *this)

{
  undefined1 local_11;
  TestLog *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x19f750  363  ??0TestLog@@AAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621b68b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_361a10f0(this + 8,&local_11);
  local_4 = 0;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (this + 0x30));
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x4c));
  ExceptionList = local_c;
  return this;
}

