
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_361ae6b0(void)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = FUN_361b3eb0((undefined4 *)&DAT_363826d4);
  if (iVar2 != 0) {
    if (DAT_363826d8 != (void *)0x0) {
      pvVar1 = (void *)((int)DAT_363826d8 + -4);
      _eh_vector_destructor_iterator_
                (DAT_363826d8,0xc,*(int *)((int)DAT_363826d8 + -4),FUN_361b3ee0);
      operator_delete__(pvVar1);
    }
    _DAT_363826d4 = 0;
    DAT_363826d8 = (void *)0x0;
    DAT_363826dc = 0;
  }
  return;
}

