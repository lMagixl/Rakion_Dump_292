
int * __thiscall FUN_361d15cb(void *this,byte param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) == 0) {
    operator_delete(*(void **)this);
    piVar1 = this;
    if ((param_1 & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    _eh_vector_destructor_iterator_(this,0xc,*piVar1,(_func_void_void_ptr *)&LAB_361d1305);
    if ((param_1 & 1) != 0) {
      operator_delete(piVar1);
    }
  }
  return piVar1;
}

