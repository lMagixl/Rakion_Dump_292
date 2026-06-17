
void * __thiscall FUN_361db279(void *this,byte param_1)

{
  FUN_361db17d((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

