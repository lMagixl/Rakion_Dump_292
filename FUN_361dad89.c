
void * __thiscall FUN_361dad89(void *this,byte param_1)

{
  thunk_FUN_361da577();
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

