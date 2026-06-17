
void FUN_36156bf0(void)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_EAX;
  int iVar4;
  
  if (0 < in_EAX) {
    iVar4 = 0;
    do {
      piVar2 = (int *)(iVar4 + 8 + (int)DAT_362fde08);
      if (*piVar2 != 0) {
        operator_delete__((void *)piVar2[1]);
        *piVar2 = 0;
        piVar2[1] = 0;
      }
      puVar3 = (undefined4 *)(iVar4 + 0x10 + (int)DAT_362fde08);
      if (*(int *)(iVar4 + 0x10 + (int)DAT_362fde08) != 0) {
        operator_delete__((void *)puVar3[1]);
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      iVar4 = iVar4 + 0x18;
      in_EAX = in_EAX + -1;
    } while (in_EAX != 0);
  }
  if (DAT_362fddfc != 0) {
    operator_delete__(DAT_362fde00);
    DAT_362fddfc = 0;
    DAT_362fde00 = (void *)0x0;
  }
  if (DAT_362fddf4 != 0) {
    operator_delete__(DAT_362fddf8);
    DAT_362fddf4 = 0;
    DAT_362fddf8 = (void *)0x0;
  }
  if (DAT_362fde04 != 0) {
    if (DAT_362fde08 != (void *)0x0) {
      pvVar1 = (void *)((int)DAT_362fde08 + -4);
      _eh_vector_destructor_iterator_
                (DAT_362fde08,0x18,*(int *)((int)DAT_362fde08 + -4),FUN_3615b2c0);
      operator_delete__(pvVar1);
    }
    DAT_362fde04 = 0;
    DAT_362fde08 = (void *)0x0;
  }
  if (DAT_362fde0c != 0) {
    operator_delete__(DAT_362fde10);
    DAT_362fde0c = 0;
    DAT_362fde10 = (void *)0x0;
  }
  return;
}

