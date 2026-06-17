
/* Library Function - Single Match
    public: void * __thiscall CODBCFieldInfo::`vector deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall CODBCFieldInfo::_vector_deleting_destructor_(CODBCFieldInfo *this,uint param_1)

{
  CODBCFieldInfo *pCVar1;
  
  if ((param_1 & 2) == 0) {
    thunk_FUN_361d4c81((byte *)this);
    pCVar1 = this;
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    pCVar1 = this + -4;
    _eh_vector_destructor_iterator_(this,0x10,*(int *)pCVar1,thunk_FUN_361d4c81);
    if ((param_1 & 1) != 0) {
      operator_delete(pCVar1);
    }
  }
  return pCVar1;
}

