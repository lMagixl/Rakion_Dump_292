
long __thiscall CListHead::Count(CListHead *this)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = *(int **)this;
  lVar1 = 0;
  while (piVar2 = (int *)*piVar2, piVar2 != (int *)0x0) {
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}

